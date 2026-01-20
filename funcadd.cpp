#include <iostream>

int func(int a, int b){

  return a + b;

}

int main(){
 int a = 5;
 int b = 4;
 int tot = func(a, b);
 std::cout << tot << std::endl;
  
 return 0;
}
