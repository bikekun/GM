#pragma once

#include "stdafx.h"
#include "Tile.h"
#include "ObjectType.h"

using namespace std;

class AGenerateMap
{
public:
	AGenerateMap();
	~AGenerateMap();

	Vec2d MapCoord;
	void Display();

private:
	STile **GMap;
	void IntializedMap();
};




