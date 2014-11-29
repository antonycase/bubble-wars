#include "Bubble.h"


CBubble::CBubble(void)
{
}

CBubble::CBubble(int x, int y, double vx, double vy)
{
	x_ = x;
	y_ = y;
	vx_ = vx;
	vy_ = vy;
}

CBubble::~CBubble(void)
{
}

//determine the angle between the forward motion vector of (this) bubble and centre of other bubble 
//function uses a vector dot product
double CBubble::useRadar(const CBubble &OtherBubble)
{
	double dx = OtherBubble.x_ - x_;
	double dy = OtherBubble.y_ - y_;
    double d1 = sqrt(vx_ * vx_ + vy_ * vy_);				
    double d2 = sqrt(dx * dx + dy * dy);
    double cosTheta = (vx_ * dx + vy_ * dy) / (d1 * d2);
    double theta = acos(cosTheta);
	return theta*180.0/PI;				//angle in degrees
}
