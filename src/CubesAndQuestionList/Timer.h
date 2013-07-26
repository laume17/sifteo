#include <sifteo.h>
using namespace Sifteo;

class Timer
{

private:
	int imageNumber;
	int endTile;
	TimeTicker ticker;
	int SecondsLeft;
	GameDrawer* myGameDrawer;
	CubeID myCube;

public:
	Timer(GameDrawer* gameDrawer, CubeID cubeID);
	void updateAnimation();

};