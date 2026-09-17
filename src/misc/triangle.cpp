#include <iostream>
using namespace std;

class triangle{

private:

double base;
double height;

public:

triangle(){
  
  base =0;
  height =0;
}
triangle(double b, double h){
  
  base = b;
  height = h;
}

void setbase(double);
void setheight(double);

double getbase();
double getheight();
double getarea();
};

void triangle::setbase(double b){
  
  base = b;
}
void triangle::setheight(double h){
  
  height = h;
}
double triangle::getbase(){
  
  return base;
}
double triangle::getheight(){
  
  return height;
}

double triangle::getarea(){
  
  return (base*height*.5);
}

int main() { 
  
  int amount;
  
  cout << "How many triangles do you want to make?" << endl;
  cin >> amount;
  
  triangle array[amount];

  for (int i = 0; i < amount; i++){
    
    int base = 0;
    int height = 0;
    
    cout << "what is the base of triangle " << i+1<< ": " << endl;
    cin >>base;
    
    cout << "what is the height of triangle " << i+1 << ": " << endl;
    cin >>height;
    
    array[i].setbase(base);
    array[i].setheight(height);
    
  }

  if(amount == 1){
    
    cout << "The triangle with the highest area is triangle 1" << endl;
    cout << "The height is " << array[0].getheight() << endl;
    cout << "The base is " << array[0].getbase() << endl;
    cout << "The area of triangle 1 is " << array[0].getarea() << endl;
  }

  for (int i = 1, highest = 0; i < amount; i++){
    
    if(array[i].getarea() > array[highest].getarea()){
      
      highest = i;
    }
    if(i+1 == amount){
      
      cout << "The triangle with the highest area is triangle " << highest +1 << endl;
      cout << "The area of triangle " << highest +1 << " is " << array[highest].getarea()<< endl;
      
    }
  }

}
