// BubbleWarsStart.cpp : Defines the entry point for the console application.
//

#include "BubbleWarsStart.h"
#include "Bubble.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	Point *Posn = new Point[2];
	Posn[0].x = 2;
	Posn[0].y = 7;
	Posn[1].x = 15;
	Posn[1].y = 1;
	PointD *Velocity = new PointD[2];
	Velocity[0].x = 2.1;
	Velocity[0].y = 0.4;
	Velocity[1].x = 0;
	Velocity[1].y = 1;
	CBubble CB0(Posn[0].x,Posn[0].y,Velocity[0].x,Velocity[0].y);
	CBubble CB1(Posn[1].x,Posn[1].y,Velocity[1].x,Velocity[1].y);
	double angDeg = CB0.useRadar(CB1);
	cout<<"angle of CB1 as seen from motion direction of CBO is "<<std::setprecision(3)<<angDeg<<" degrees";
	delete [] Posn;
	delete [] Velocity;
	return 0;
}

