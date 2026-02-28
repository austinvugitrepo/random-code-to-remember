//austin vu 
//find sum and find largest
#include <iostream>

int findSum(int v[], int s);
int findLargest(int largev[], int bigsize);
int main(){

int SIZE = 8;
int values[SIZE];

for(int i = 0; i < SIZE; i++){
  std::cout << "Enter an integer value:";
  std::cin >> values[i];
  std::cout << std::endl;
}
int sum = findSum(values, SIZE);
std::cout << "The sum of all the numbers entered in the array is: " << sum << std::endl;
int large = findLargest(values, SIZE);
std::cout << "The largest number you entered in the array is: " << large << std::endl;
return 0;
}

int findSum(int v[], int s){
  int sum = 0;
  for(int i = 0; i < s; i++){
    sum += v[i];
  }
  return sum;
}

int findLargest(int largev[], int bigsize){
  int largest = largev[0];
  
  for(int i = 0 + 1; i < bigsize; i++){
    if(largest < largev[i]){
       largest = largev[i];
    }
  }
  return largest;
}


