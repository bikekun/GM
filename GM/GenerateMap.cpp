#include "GenerateMap.h"


AGenerateMap::AGenerateMap()
{
	MapCoord.X = 10;
	MapCoord.Y = 40;

	IntializedMap();

}

AGenerateMap::~AGenerateMap()
{
	for (int i = 0; i < MapCoord.X; i++)
		delete[] GMap[i];

	delete[] GMap;
}

void AGenerateMap::IntializedMap()
{
	GMap = new STile*[MapCoord.X];

	for (int x(0); x < MapCoord.X; x++)
		GMap[x] = new STile[MapCoord.Y];

	for (int i = 0; i< MapCoord.X; i++)
		for (int y = 0; y < MapCoord.Y; y++)
		{
			GMap[i][y].ObbjectType = ObjectType::Empty;

			if (y == 0 || y == MapCoord.Y - 1)
			{
				GMap[i][y].ObbjectType = ObjectType::DefaultCube;
			}
			if (i == MapCoord.X-1)
			{
				GMap[i][y].ObbjectType = ObjectType::DefaultCube;
			}
		}
}

void AGenerateMap::Display()
{
	for (int i = 0; i< MapCoord.X; i++)
		for (int y = 0; y < MapCoord.Y; y++)
		{
			cout << GMap[i][y].ObbjectType;

			if (y == MapCoord.Y - 1)
				cout << endl;
		}
}

