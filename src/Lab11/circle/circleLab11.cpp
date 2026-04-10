
// __________________________________________________________________
//
// This program declares a class for a circle that will have
// member functions that set the center, find the area, find
// the circumference and display these attributes.
// The program as written does not allow the user to input data, but
// rather has the radii and center coordinates of the circles
// (spheres in the program) initialized at definition or set by a function.

#include "Circle.h"

// Austin Vu 


// Client section 

int main()
{



  
  Circles cir1(2);  //b.4
  
  cir1.printCircleStats();


  cout << "The area of the circle is " << cir1.findArea() << endl;
  cout << "The circumference of the circle is "
     << cir1.findCircumference() << endl;

  Circles cir2;
  cir2.printCircleStats();
   
  cout << "The area of the circle is " << cir2.findArea() << endl;
  cout << "The circumference of the circle is "
     << cir2.findCircumference() << endl;

 Circles cir3(15, 16);
  cir3.printCircleStats();

  cout << "The area of the circle is " << cir3.findArea() << endl;
  cout << "The circumference of the circle is "
     << cir3.findCircumference() << endl;

  return 0;
}

