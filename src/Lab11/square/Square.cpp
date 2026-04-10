#include "Square.h"

void Square::setSide(float length)
{
        side = length;
}

float Square::getSide()
{
  return side;
}

float Square::findArea()
{
        return side * side;
}

float Square::findPerimeter()
{
        return 4 * side;
}


