// Review of Operators
//Operators for Rational & Logi

//true give back 1 (or anything not 0); false gives back 0
A == B
A >= B
A <= B
A != B
//result is true/false; A,B should also be true/false
A && B
A || B //logic operator
!A
//
short A = 0
short B = 11

cout << (A && B); //will give false

//why to use constants in your programs:
//Defining numbers allows keeps the number condistent, can't change; ex: pi

//three variable declaration
A = (expression)?B:C;

// inclusively do/while statement example
#include <iostream>
using namespace std;
int main()
{
 int Bob;
 do{
  cout << "please input an odd integer between 5 and 199 inclusively" << endl;
  cin >> Bob;
 }while(Bob % 2 == 0 || Bob < 5 || Bob > 199);
 cout << "Bob successfully inputed" << endl;
 return 0;
}
