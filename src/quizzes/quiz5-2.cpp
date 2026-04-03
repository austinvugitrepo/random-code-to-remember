//COSC 1436 Introduction to Problem Solving with Computers
//Fall 2023
//Programming Quiz 5
//Your Name: Austin Vu 

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//TODO 1 (4 points): Declare a structure name MovieData that store the Title (string), Director Name (string), Year Released(int), and Running time in minutes (int).

struct MovieData {
string title;
string director;
int year;
int runtime;
};


// Function prototypes
void displayMovie(MovieData);

int main()
{
   //TODO 2 (2 points): Create two MovieData variables names movie1 and movie2.
   
    MovieData movie1;
    MovieData movie2;
    
  
   
   // TODO 3 (3 points): Assign values to movie1's members. 
  // Title: War of the Worlds", Director Name:Byron Haskin, Year Realased: 1953, Running time in minutes: 88 minutes.
      movie1.title = "War of the Worlds";
      movie1.director = "Bryon Haskin";
      movie1.year = 1953;
      movie1.runtime = 88; // in minutes


   // TODO 3 (3 points): Assign values to movie2's members. 
  // Title: War of the Worlds", Director Name:Stephen Spielberg, Year Realased: 2005, Running time in minutes: 118 minutes.
      movie2.title = "War of the Worlds";
      movie2.director = "Stephen Spielberg";
      movie2.year = 2005;
      movie2.runtime = 118; // in minutes
  


   //TOD 4 (2 points): Display movie1's data. Must use the function.
    displayMovie(movie1);

  
   cout << endl;
   
  //TOD 5 (2 points): Display movie1's data. Must use the function.
  displayMovie(movie2);
   
   return 0;
}

//*****************************************************
// The displayMovie function displays the data in the *
// member variables of the MovieData structure passed *
// as an argument.                                    *
// ****************************************************
void displayMovie(MovieData m)
{
   // Set up the floating-point formatting.
   cout << setprecision(2) << fixed << showpoint;
 
   // TODO 6 (4 points): fill in the code to display the movie data.
   cout << "\nTitle       : " << m.title;
   cout << "\nDirector    : " << m.director;
   cout << "\nReleased    : " << m.year;
   cout << "\nRunning Time: " << m.runtime << " minutes"<< endl;

}
