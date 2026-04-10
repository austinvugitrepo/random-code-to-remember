#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
using namespace std;

//class declaration
class Square
{
   private:
      float side;
   public:
      Square()
      {
      side = 1;
      }
      void setSide(float length);
      float getSide();
      float findArea();
      float findPerimeter();
};


#endif
