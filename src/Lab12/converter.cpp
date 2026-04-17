#include <iostream>
using namespace std;
#include "converter.h"


converter::converter(int wholenumber) {

 if (wholenumber == 0) { /* if num is zero say zero */
    
      words = below20[0]; 
    
  } else {
    
      if (wholenumber / 1000 > 0) { /* starts here cuz the max is 9999 */
        
	/* using example number like 8357, 8357/1000 = 8 
	 * so append 8 thousand to word string
	 * to get 357 do 8357 % 1000 to get it
	 */
          words += below20[wholenumber / 1000] + " " + thousands + " "; 

          wholenumber %= 1000; 
        
      }
      if (wholenumber / 100 > 0) {
          /* now we are at 357 and continue like previously */
          words += below20[wholenumber / 100] + " " + hundreds + " ";
        
          wholenumber %= 100;
        
      }
      if (wholenumber >= 20) {
          /* tens array has 9 elements so element 5 at index 4 is fifty */
          words += tens[wholenumber / 10 - 1] + " ";
        
          wholenumber %= 10;
        
          if (wholenumber > 0) {
            
              words += below20[wholenumber];
            
          }
      } else {
        
          words += below20[wholenumber];
        
      }
    
  }

}

void converter :: display() {
 cout << "Your number in words is : " << words << endl;
}







  
