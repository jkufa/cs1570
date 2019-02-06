/*
Name: Jack Kufa
Student ID: 12545491
Instructor: Xiong
Section: F
Date: Feb/16/2018
File: case.cpp
Description:
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{

  string name;
  int choice;
  float rate, pay, price;
  float mtb; //defines USDA Standardized Metabolic Weight Loss Multiplying Gorgification Factor
  bool retry = 1;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
//get metabolism function
  cout << "welcome to the Digital Vending Machine!" << endl;
  cout << "Please enter your metabolic rate:" << endl;
  cin >> rate;

  while (rate < .05 || rate > .09)
  {
    cout << "incorrect rate. please try again" << endl;
    cin >> rate;
  }
//end get metabolism function

//vend function
  while (retry)
  {
    cout << "Here are your options..." << endl;
    cout << "1. Dry Hay                $1.50       34" << endl;
    cout << "2. Wet Hay                $1.25       33" << endl;
    cout << "3. Kale                   $0.75       26" << endl;
    cout << "4. Ground Corn            $2.50       12" << endl;
    cout << "5. Carrots                $1.00       25" << endl;
    cout << "6. Carrots                $1.00       25" << endl;
    cout << "7. Carrots                $1.00       25" << endl;
    cout << "8. Industrially Milled Fortified Sawdust Horse Feed      $0.50       13" << endl;
    cout << "9. Quit" << endl;
    cout << "Please select an option (choose a number between 1 and 9)" << endl;
    cin >> choice;

    switch (choice)
    {
      case 1:
        name = "Dry Hay";
        price = 1.5;
        mtb = 34;
        cout << "You have selected " << name << ". You owe $" << price << "." << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }
        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
        break;

      case 2:
        name = "Wet Hay";
        price = 1.25;
        mtb = 33;
        cout << "You have selected " << name << ". You owe $" << price << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }
        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
      break;

      case 3:
        name = "Kale";
        price = 0.75;
        mtb = 26;
        cout << "You have selected " << name << ". You owe $" << price << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }
        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
      break;

      case 4:
        name = "Ground Corn";
        price = 2.50;
        mtb = 12;
        cout << "You have selected " << name << ". You owe $" << price << "." << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }
        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
      break;

      case 5:
        name = "Carrots";
        price = 1.00;
        mtb = 25;
        cout << "You have selected " << name << ". You owe $" << price << "." << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }
        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
      break;

      case 6:
        name = "Carrots";
        price = 1.00;
        mtb = 25;
        cout << "You have selected " << name << ". You owe $" << price << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }
        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
      break;

      case 7:
        name = "Carrots";
        price = 1.00;
        mtb = 25;
        cout << "You have selected " << name << ". You owe $" << price << "." << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }

        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
      break;

      case 8:
        name = "Industrially Milled Fortified Sawdust Horse Feed";
        price = 0.50;
        mtb = 13;
        cout << "You have selected " << name << "." << endl;
        cout << "You owe $" << price << "." << endl;
        cout << "Please input sufficient funds" << endl;
        cin >> pay;
        while (!(pay >= price))
        {
          cout << "insufficient funds. Please try again." << endl;
          cin >> pay;
        }
        cout << "Thank you for your purchase! Your change is $" << (pay - price) << "." << endl;
        cout << "You will lose " << (mtb*rate) << " pounds by eating this " << endl;
        cout << name << "." << endl;
        cout << "Would you like to purchase something else?" << endl;
        cout << "Please enter 1 for yes and 0 for no" << endl;
        cin >> retry;
      break;

      case 9:
        retry = 0;
      break;

      default:
        cout << "I don't know what exactly you inputted, but it's most definitely wrong" << endl;
    }
  }
//end vend function

//signoff function
cout << "This concludes the Digital Vending Machine. Thank you for your service" << endl;
cout << "(and more importantly, your money)!" << endl;
//end signoff function

return 0;
}
