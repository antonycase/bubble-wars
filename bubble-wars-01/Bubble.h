#pragma once

#include "BubbleWarsStart.h"

class CBubble
{
public:
	CBubble(void);
	CBubble(int x, int y, double vx, double vy);
	~CBubble(void);

private:
	int x_;		//bubble x coordinate
	int y_;		//bubble y coordinate
	double vx_;	//bubble x velocity
	double vy_;	//bubble y velocity

public:
	double useRadar(const CBubble &Bubble);
};

