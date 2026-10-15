param([string[]]$Case, [string]$EngineRoot)
$ErrorActionPreference = 'Stop'
# Explicitly enumerate the root JSON array for Windows PowerShell 5.1.
$matrix = @(
    Get-Content (Join-Path $PSScriptRoot 'InventoryMapMatrix.json') -Raw |
        ConvertFrom-Json |
        ForEach-Object { $_ }
)
if ($Case) {
    foreach ($name in $Case) { if ($name -notin $matrix.name) { throw "Unknown map case: $name" } }
    $matrix = @($matrix | Where-Object { $_.name -in $Case })
}
$results = @()
foreach ($entry in $matrix) {
    Write-Output "Checking $($entry.name): $($entry.map)"
    try {
        & (Join-Path $PSScriptRoot 'Test-InventoryMap.ps1') -Map $entry.map -Experience $entry.experience -EngineRoot $EngineRoot -TimeoutSeconds 420
        $results += [pscustomobject]@{name=$entry.name;passed=$true}
    } catch {
        $results += [pscustomobject]@{name=$entry.name;passed=$false;error=$_.Exception.Message}
        Write-Warning $_.Exception.Message
    }
}
$path = Join-Path $PSScriptRoot ('../../Saved/InventoryMultiplayer/MapTests/Matrix-' + (Get-Date -Format 'yyyyMMdd-HHmmss') + '.json')
$results | ConvertTo-Json | Set-Content $path -Encoding utf8
$results | Format-Table name,passed
if (@($results | Where-Object {-not $_.passed}).Count) { throw "Some map cases failed. See $path" }
Write-Output "PASS: all $($results.Count) selected map cases. Report: $path"
