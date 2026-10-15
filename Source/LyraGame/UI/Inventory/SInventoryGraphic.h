// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "Widgets/SLeafWidget.h"
#include "Rendering/DrawElements.h"
#include "Brushes/SlateRoundedBoxBrush.h"

/** Small resolution-independent UI illustrations; no extra textures or scene capture. */
class SInventoryGraphic : public SLeafWidget
{
public:
	SLATE_BEGIN_ARGS(SInventoryGraphic) : _Backpack(false), _Medical(false) {} SLATE_ARGUMENT(bool, Backpack) SLATE_ATTRIBUTE(bool, Medical) SLATE_END_ARGS()
	void Construct(const FArguments& Args) { bBackpack = Args._Backpack; Medical = Args._Medical; }
	virtual FVector2D ComputeDesiredSize(float) const override { return bBackpack ? FVector2D(200, 260) : FVector2D(120, 70); }
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& Geometry, const FSlateRect& Cull,
		FSlateWindowElementList& Elements, int32 Layer, const FWidgetStyle& Style, bool ParentEnabled) const override
	{
		const FVector2D Design = ComputeDesiredSize(1);
		const float Scale = FMath::Min(Geometry.GetLocalSize().X / Design.X, Geometry.GetLocalSize().Y / Design.Y);
		const FVector2D Offset = (Geometry.GetLocalSize() - Design * Scale) * 0.5;
		const FLinearColor Cyan(0.01f, 0.78f, 0.95f);
		auto Box = [&](float X, float Y, float W, float H, FLinearColor Color, float Radius = 3)
		{
			FSlateRoundedBoxBrush Brush(FLinearColor::White, Radius * Scale);
			FSlateDrawElement::MakeBox(Elements, ++Layer, Geometry.ToPaintGeometry(FVector2D(W, H) * Scale,
				FSlateLayoutTransform(Offset + FVector2D(X, Y) * Scale)), &Brush, ESlateDrawEffect::None, Color);
		};
		auto Line = [&](TArray<FVector2D> Points, FLinearColor Color, float Width = 2)
		{
			for (auto& Point : Points) { Point = Offset + Point * Scale; }
			FSlateDrawElement::MakeLines(Elements, ++Layer, Geometry.ToPaintGeometry(), Points, ESlateDrawEffect::None, Color, true, Width * Scale);
		};
		if (bBackpack)
		{
			TArray<FVector2D> Ring;
			for (int32 Step = 0; Step <= 64; ++Step) { const float A = Step * PI / 32; Ring.Add(FVector2D(100 + 90 * FMath::Cos(A), 236 + 15 * FMath::Sin(A))); }
			Line(Ring, FLinearColor(0.015f, 0.20f, 0.30f), 5); Line(Ring, Cyan, 1);
			Line({{70,48},{72,22},{83,12},{117,12},{128,22},{130,48}}, FLinearColor(0.25f,0.34f,0.39f), 11);
			Line({{73,44},{76,25},{86,19},{114,19},{124,25},{127,44}}, Cyan, 1);
			Box(27,54,146,169,FLinearColor(0.008f,0.014f,0.022f),22);
			Box(16,107,31,78,FLinearColor(0.11f,0.15f,0.18f),9); Box(153,107,31,78,FLinearColor(0.11f,0.15f,0.18f),9);
			Box(21,120,7,46,Cyan,3); Box(172,120,7,46,Cyan,3);
			Box(35,46,130,184,FLinearColor(0.33f,0.42f,0.49f),23);
			Box(39,50,122,176,FLinearColor(0.037f,0.06f,0.085f),20);
			Box(47,62,106,46,FLinearColor(0.16f,0.22f,0.27f),13);
			Line({{53,69},{72,96},{87,107}}, FLinearColor(0.55f,0.69f,0.74f),3);
			Line({{147,69},{128,96},{113,107}}, FLinearColor(0.55f,0.69f,0.74f),3);
			Line({{49,115},{60,147},{82,160},{82,205}}, Cyan,3);
			Line({{151,115},{140,147},{118,160},{118,205}}, Cyan,3);
			Box(64,168,72,43,FLinearColor(0.075f,0.11f,0.15f),8);
			Line({{100,102},{120,118},{113,143},{87,143},{80,118},{100,102}}, FLinearColor(0.45f,0.61f,0.69f),4);
			Line({{100,110},{111,120},{107,135},{93,135},{89,120},{100,110}}, Cyan,5);
			Line({{55,215},{75,220},{125,220},{145,215}}, FLinearColor(0.39f,0.5f,0.56f),2);
		}
		else if (Medical.Get())
		{
			Box(37,5,46,18,FLinearColor(0.10f,0.3f,0.14f),5);
			Box(12,18,96,47,FLinearColor(0.08f,0.38f,0.15f),7);
			Box(22,18,10,47,FLinearColor(0.04f,0.18f,0.08f),2);
			Box(88,18,10,47,FLinearColor(0.04f,0.18f,0.08f),2);
			Box(54,25,12,33,FLinearColor::White,1);
			Box(43,36,34,11,FLinearColor::White,1);
		}
		else
		{
			Box(8,20,104,43,FLinearColor(0.05f,0.09f,0.12f),4);
			for (int32 Index = 0; Index < 4; ++Index)
			{
				const float X = 19 + 23 * Index;
				Box(X,21,15,35,FLinearColor(0.65f,0.36f,0.085f),2);
				Box(X+3,22,4,31,FLinearColor(0.94f,0.73f,0.25f),1);
				Line({{X,21},{X+3,9},{X+7.5,3},{X+12,9},{X+15,21}}, FLinearColor(0.78f,0.64f,0.38f),2);
				Box(X-1,54,17,4,FLinearColor(0.92f,0.64f,0.18f),1);
			}
			Line({{10,24},{10,62},{110,62},{110,24}}, FLinearColor(0.3f,0.42f,0.49f),2);
		}
		return Layer;
	}
private:
	bool bBackpack = false;
	TAttribute<bool> Medical;
};
