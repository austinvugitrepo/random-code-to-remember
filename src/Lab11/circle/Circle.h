#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;


class Circles
{
public:
  void setCenter(int, int);
  double findArea();
  double findCircumference();
  void printCircleStats();	// This outputs the radius and center of the circle. 
  Circles(float, int, int);			// Constructor
  Circles();				// Default constructor
  Circles(float); /* constructor if just radius */
  Circles(int, int); /* constructor for just default center */
private:
  float	radius;
  int	center_x;
  int	center_y;
};



#endif
