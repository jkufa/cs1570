/*
Name: Jack Kufa
Student ID: 12545491
Instructor: Xiong
Section: F
Date: Jan/29/2018
File: cookie.cpp
*/

//including IO stream libraries
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string name;
  int lock_1;
  int lock_1_tens, lock_1_thous;
  float lock_2;
  string lock_3;
  int length;
  bool retry;

  //greets user to program & prompts user to enter first name
  cout << "This is the Cookie Protection Application (CPA)." << endl;

  cout << "Please enter your first name:" << " ";
  cin >> name;

  //loop that checks if value for lock_1 has match values in the tens and thousands place. If not it will give user a 2nd try.
  do
  {
    cout << name << ", please enter the five-digit integer to unlock lock 1:" << " " << endl;
    cin >> lock_1;

    //determines tens place and thousands place of lock_1
    lock_1_tens = lock_1 % 100 / 10;
    lock_1_thous = lock_1 % 10000 / 1000;

    //checks if value for lock_1 is correct
    if (lock_1_tens * lock_1_thous == 15)
    {
      cout << "value accepted" << endl;
      cout << name << ", please insert a real floating point number" << endl;
      cin >> lock_2;
    }

    //if lock 1 was wrong
    else if(lock_1_tens * lock_1_thous != 15)
    {
      cout << "incorrect input, you may try again one more time" << endl;
      cin >> lock_1;
      lock_1_tens = lock_1 % 100 / 10;
      lock_1_thous = lock_1 % 10000 / 1000;
      
      if (lock_1_tens * lock_1_thous == 15)
      {
        cout << "value accepted" << endl;
        cout << name << ", please insert a real floating point number" << endl;
        cin >> lock_2;
      }
      
    }

    //checks for lock 2
    if ((lock_2 <= 17.55 && lock_2 >= 17.35) && lock_1_tens * lock_1_thous == 15)
    {
      cout << "value accepted" << endl;
      cout << name << ", please enter the 'secret pass code' " << endl;
      cin >> lock_3;
      length = lock_3.length();

     //checks ratio
      if (17.0 / length == 3.4)
      {
          cout << "Success! All locks have been bypassed.";
          cout << "Please check your thumb drive for your 4 cookies." << endl;
      }

      //if length is 1
      else if (length == 1)
      {
         //success text
         cout << "you are smarter than me. you may proceed." << endl;
         cout << "Success! All locks have been bypassed." << " "
             << "Please check your thumb drive for your 4 cookies." << endl;
         cout << "would you line to re-run the Cookie Protection Application?"
               << " " << "Please enter 1 for yes, 0 for no." << endl;
         cin >> retry;
      }

      //messup text
      else
      {
        cout << "invalid number. The program will now terminate. You messed up, " << name << "." << endl;
        cout << "Would you like to try again?"
             << " Please enter 1 for yes, 0 for no." << endl;
        cin >> retry;
      }
    }

    //messup text
    else
    {
      cout << "invalid number. The program will now terminate. You messed up, " << name << "." << endl;
      cout << "Would you like to try again? Please enter 1 for yes, 0 for no." << endl;
      cin >> retry;
    }

  }
  while (retry == 1);
return 0;
}
