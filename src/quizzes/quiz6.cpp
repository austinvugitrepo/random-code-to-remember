//Programming Quiz 6 

// Austin Vu

//YOU NEED TO FILL IN THE CODE for all the TOODs

#include <iostream>
using namespace std;

/******************************************************
TODO 1: (20 points) 
  Declare a class Incrementor that contains the following members:
    - an int member counter
    - A constructor that set the value of counter
    - The member function increment that increments the counter data member. This is not in-line member function.
    - The member function getCountValue that returns the value of the counter. getCountValue member function is in-line member function
*******************************************************/
class Incrementor {
	private:
		int counter;
	public:
		Incrementor();
		void increment();
		int getCountValue() {

		return counter;

		}





};


Incrementor::Incrementor()
{
	counter = 0;
}

/*****************************************************
TODO 2: (5 Points)
    Implementation section
    Define increment member function here
******************************************************/
void Incrementor::increment()
{
	counter++;
}





int main()
{
  /*****************************************************
  TODO 3: (3 points)
    Define an object or instance of the class Incrementor
  *****************************************************/
	Incrementor incre;	
  //Prompt the user to enter an input
	int input ;
	cout << "Enter a number (or -99 to stop): ";
	cin >> input;

/*****************************************************
TODO 4: (5 points)
  Fill in code to perform following task:
  The program will repeatedly prompt the user for an integer value and uses the Incrementor object to count the number of zeros the user enters. The loop stops when the user enters -99. 
******************************************************/
	while (input != -99) {
		if (input == 0)
			incre.increment();
			
		cout << "Enter a number (or -99 to stop): ";
		cin >> input;
	}



//TODO 5: (2 points)
//Fill in the code between <<   << to display the counter using getCountValue member function.
	cout << "The number 0 was entered " << incre.getCountValue() << " times!\n";
}
