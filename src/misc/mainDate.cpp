#include <iostream>
#include "Date.h"

int
main()
{
  
	bool bo = true;
  
	int m, d, y;
  
	std::cout << "Enter the month (number) : \n ";
	std::cin >> m;
	std::cout << "Enter the day (number) :  \n";
	std::cin >> d;
	std::cout << " Enter the year (number): \n";
	std::cin >> y;
  
	Date time(m, d, y);
  
	while (bo) {
		std::cout << "The Date is: ";
		time.printDate();
		std::cout << "1. add days" << std::endl;
		std::cout << "2. subtract days" << std::endl;
		std::cout << "3. get day" << std::endl;
		std::cout << "4. get month" << std::endl;
		std::cout << "5. get year" << std::endl;
		std::cout << "6. quit" << std::endl;

    		int choice;
    		int choicew;
    		std::cout << "Enter your choice: ";
    		std::cin >> choice;
    
    		switch(choice){
      
      		case 1:
        	std::cout << "\n\nHow many days do you want to add: ";
        	std::cin >> choicew;
        	time.addDays(choicew);
        	break;
      
      		case 2: 
        	std::cout <<"\n\nHow many days do you want to subtract: ";
        	std::cin >> choicew;
        	time.subtractDays(choicew);
        	break;
      
      		case 3:
        	std::cout << "\n\nThe day is: " << time.getDay() << std::endl;
        	break;

      		case 4:
        	std::cout << "\n\nThe month is: " << time.getMonth() << std::endl;
        	break;

      		case 5:
        	std::cout << "\n\nThe year is: " << time.getYear() << std::endl;
       		break;

      		case 6:
        	bo = false;
        	break;

    		}

  	}

	return 0;

}
