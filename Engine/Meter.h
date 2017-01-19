#pragma once

#include "Graphics.h"

class Meter
{
public:
	Meter( int x, int y )
		:
		x( x ),
		y( y )
	{}
	void IncreaseLevel()
	{
		++level;
	}
	float GetLevel() const
	{
		return level;
	}
	void Draw( Graphics& gfx ) const
	{
		gfx.DrawRectDim( (int)x,(int)y,int(level * scale),(int)girth,c );
	}
private:
	static constexpr Color c = Colors::Blue;
	static constexpr float girth = 12.0f;
	static constexpr float scale = 4.0f;
	float level = 0.0f;
	float x;
	float y;
};
