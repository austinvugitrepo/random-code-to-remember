#ifndef CONVERTER_H
#define CONVERTER_H
using namespace std;
#include <string>

class converter {

private:

int input;
string words; /* string to hold word number */
/*each index correlates to a word number so like below20[0] = zero and so on */
string below20[20] = {"zero", "one", "two", "three", "four", "five","six", "seven", "eight", "nine", "ten", "eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen","seventeen", "eighteen", "nineteen"};
string tens[9] = {  "ten", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
string hundreds = "hundred";
string thousands = "thousand";  

public: 
converter(int);
void display(); 

};
#endif
