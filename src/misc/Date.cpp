#include <iostream>
using namespace std;
#include "Date.h"

int alldayz[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Date::Date(){
  
  month = 1;
  day = 1;
  year = 1;
  
}
Date::Date(int m, int d, int y){
  
  if(m > 12 || m < 1){
    
    month = 1;
  }
  else{
    
    month = m;
  }

  if (d > alldayz[m-1] || d < 1){
    
    day = 1;
  }
  else{
    
    day = d;
  }

  year = y;
}
void Date::setDate(int m, int d, int y){
  
  if(m > 12 || m < 1){
    
    month = 1;
  }
  else{
    
    month = m;
  }

  if (d > alldayz[m-1] || d < 1){
    
    day = 1;
  }
  else{
    
    day = d;
  }

  year = y;
}


void Date::addDays(int d){
  
  day += d;
  while(day > alldayz[month-1]){
    
    day -= alldayz[month-1];
    month= month + 1;
    if(month == 12 && day > 31){
      
      year++;
      month = 1;
      
    }
  }
}

void Date::subtractDays(int days){
  
  for(int i = 0; i < days; i++){
    
    day--;
    if(day == 0){
      month--;
      if(month == 0){
        year--;
        month = 12;
        
      }
      day = alldayz[month-1];
    }
  }
}

int Date::getDay() const{
  
  return day;
}

int Date::getMonth() const{
  
  return month;
}

int Date::getYear() const{
  
  return year;
}
void Date::printDate() const{
  
  cout << month << "/" << day << "/" << year << endl;
}