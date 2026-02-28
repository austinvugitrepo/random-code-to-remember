//austin vu
// 2d array and 1d array diagonal
#include <iostream>

int darray(int array_name[6][6], int row, int col);

int main(){

int row = 6;
int col = 6;
int array_name[6][6];

darray(array_name, row , col);

return 0;
}

int darray(int array_name[6][6], int row, int col){

  for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
    array_name[i][j] = i + j + 2;
    }
  
  }
 std::cout << "2D array:\n";
 for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
     std::cout << array_name[i][j] << "  ";
    }
    std::cout << std::endl;  
  }

std::cout << std::endl;  
 std::cout << "1D array:\n";
 for (int i = 0; i < row; i++){
    std::cout << array_name[i][i] << "  ";
  }
std::cout << std::endl; 

  return 0;
}

