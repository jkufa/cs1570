/*
       Name: Jack Kufa
 Student ID: 12545491
 Instructor: Xiong
    Section: F
       Date: March/5/2018
       File: vending.cpp
Description: defines all functions for homework 6
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "vending.h"

float rateInput(float rate)
{
cout << "welcome to the Digital Vending Machine!" << endl;
cout << "Please enter your metabolic rate:" << endl;
cin >> rate; 
return rate; 
}

void vendingCase(float rate)
{
  int attempts = 0;
  string name;
  int choice;
  bool retry = true;
  int rngChoice;
  
  while (retry)
  {
    if(attempts > 10)
    {
      cout << "Get lost, Pal!  You've gotten enough of me already." << endl;
      retry = false;
    }
    else
    {
      cout << "Here are your options..." << endl;
      cout << "1. Dry Hay                $1.50       34" << endl;
      cout << "2. Wet Hay                $1.25       33" << endl;
      cout << "3. Kale                   $0.75       26" << endl;
      cout << "4. Ground Corn            $2.50       12" << endl;
      cout << "5. Carrots                $1.00       25" << endl;
      cout << "6. Carrots                $1.00       25" << endl;
      cout << "7. Carrots                $1.00       25" << endl;
      cout << "8. Industrially Milled "
      << "Fortified Sawdust Horse Feed      $0.50       13" << endl;
      cout << "9. Quit" << endl;
      cout << "Please select an option (choose a number between 1 and 9)" 
      << endl;
      cin >> choice;
      rngChoice = choice;
      attempts += 1;
      
      if(rand()%10 > 7)
      {  
        while(rngChoice == choice)
        {
          rngChoice=(rand()%9)+1;
        }
        choice = rngChoice;

      }

      switch (choice)
        { 
          case 1:
            retry = dryHay(rate, attempts);
            break;

          case 2:
            retry = wetHay(rate, attempts);
            break;

          case 3:
            retry = kale(rate, attempts);
            break;

          case 4:
          retry = groundCorn(rate, attempts); 
          break;

          case 5:
            retry = carrots(rate, attempts);
            break;

          case 6:
            retry = carrots(rate, attempts);
            break;

          case 7:
            retry = carrots(rate, attempts);
            break;

          case 8:
            retry = imfshf(rate, attempts);
            break;

          case 9:
            retry = false;
            signoff();
            break;

          default:
            cout << "I don't know what exactly you inputted, but it's most "
            << "definitely wrong." << endl;
            cout << "Please retry." << endl;
            break;
        }
      
    }
  }
  return;
}

bool dryHay(float rate, int attempts)
{
  string name;
  float pay, price;
  float mtb; //defines USDA Standardized Metabolic Weight Loss Multiplying 
             //Gorgification Factor

  name = "Dry Hay";
  price = 1.5;
  mtb = 34;
  cout << "You have selected " << name << ". You owe $" << price << "." << endl;
  cout << "Please input sufficient funds:" << endl;
  cin >> pay;
  while (!(pay >= price))
  {
    cout << "insufficient funds. Please try again." << endl;
    cin >> pay;
  }
  if(rand()%100 > 54)
  { 
    if(pay > price) 
    {
      cout << "Sorry! No change for you, sucker!" << endl;
      price = pay;
    }
  }
  cout << "Thank you for purchasing " << name << "! Your change is $" << (pay - price) 
  << "." << endl;
  rngBull(name, mtb, rate, attempts);
  return checkRetry();
}

bool wetHay(float rate, int attempts)
{
  string name;
  float pay, price;
  float mtb; //defines USDA Standardized Metabolic Weight Loss Multiplying 
             //Gorgification Factor

  name = "Wet Hay";
  price = 1.25;
  mtb = 33;
  cout << "You have selected " << name << ". You owe $" << price << endl;
  cout << "Please input sufficient funds:" << endl;
  cin >> pay;
  while (!(pay >= price))
  {
    cout << "insufficient funds. Please try again." << endl;
    cin >> pay;
  }
  if(rand()%100 > 54)
  { 
    if(pay > price) 
    {
      cout << "Sorry! No change for you, sucker!" << endl;
      price = pay;
    }
  }
  cout << "Thank you for purchasing " << name << "! Your change is $" << (pay - price)
   << "." << endl;
  rngBull(name, mtb, rate, attempts);
  return checkRetry();
}

bool kale(float rate, int attempts)
{
  string name;
  float pay, price;
  float mtb; //defines USDA Standardized Metabolic Weight Loss Multiplying 
             //Gorgification Factor

  name = "Kale";
  price = 0.75;
  mtb = 26;
  cout << "You have selected " << name << ". You owe $" << price << endl;
  cout << "Please input sufficient funds:" << endl;
  cin >> pay;
  while (!(pay >= price))
  {
    cout << "insufficient funds. Please try again." << endl;
    cin >> pay;
  }
  if(rand()%100 > 54)
  { 
    if(pay > price) 
    {
      cout << "Sorry! No change for you, sucker!" << endl;
      price = pay;
    }
  }
  cout << "Thank you for purchasing " << name << "! Your change is $" 
  << (pay - price) << "." << endl;
  rngBull(name, mtb, rate, attempts);
  return checkRetry();
}
bool groundCorn(float rate, int attempts)
{
  string name;
  float pay, price;
  float mtb; //defines USDA Standardized Metabolic Weight Loss Multiplying 
             //Gorgification Factor

  name = "Ground Corn";
  price = 2.50;
  mtb = 12;
  cout << "You have selected " << name << ". You owe $" << price << "." << endl;
  cout << "Please input sufficient funds:" << endl;
  cin >> pay;
  while (!(pay >= price))
  {
    cout << "insufficient funds. Please try again." << endl;
    cin >> pay;
  }
  if(rand()%100 > 54)
  { 
    if(pay > price) 
    {
      cout << "Sorry! No change for you, sucker!" << endl;
      price = pay;
    }
  }
  cout << "Thank you for purchasing " << name << "! Your change is $"
  << (pay - price) << "." << endl;
  rngBull(name, mtb, rate, attempts);
  return checkRetry();
}
bool carrots(float rate, int attempts)
{
  string name;
  float pay, price;
  float mtb; //defines USDA Standardized Metabolic Weight Loss Multiplying Gorgification Factor
    
  name = "Carrots";
  price = 1.00;
  mtb = 25;
  cout << "You have selected " << name << ". You owe $" << price << "." << endl;
  cout << "Please input sufficient funds:" << endl;
  cin >> pay;
  while (!(pay >= price))
  {
    cout << "insufficient funds. Please try again." << endl;
    cin >> pay;
  }
  if(rand()%100 > 54)
  { 
    if(pay > price) 
    {
      cout << "Sorry! No change for you, sucker!" << endl;
      price = pay;
    }
  }
  cout << "Thank you for purchasing " << name << "! Your change is $" 
  << (pay - price) << "." << endl;
  rngBull(name, mtb, rate, attempts);
  return checkRetry();
}
bool imfshf(float rate, int attempts) //function for Industrially Milled Fortified Sawdust Horse Feed
{
  string name;
  float pay, price;
  float mtb; //defines USDA Standardized Metabolic Weight Loss Multiplying Gorgification Factor
    
  name = "Industrially Milled Fortified Sawdust Horse Feed";
  price = 0.50;
  mtb = 13;
  cout << "You have selected " << name << "." << endl;
  cout << "You owe $" << price << "." << endl;
  cout << "Please input sufficient funds:" << endl;
  cin >> pay;
  while (!(pay >= price))
  {
    cout << "insufficient funds. Please try again." << endl;
    cin >> pay;
  }
  if(rand()%100 > 54)
  { 
    if(pay > price) 
    {
      cout << "Sorry! No change for you, sucker!" << endl;
      price = pay;
    }
  }
  cout << "Thank you for purchasing " << name << "! Your change is $"
  << (pay - price) << "." << endl;
  rngBull(name, mtb, rate, attempts);
  return checkRetry();
}
void rngBull (string & name, float mtb, float rate, int attempts)
{
  int outputRNG = rand()%100;
  if(outputRNG <= (49-attempts*5))
  {
    cout << "You will lose " << (mtb*rate) << " pounds by eating this " 
    << name << "." << endl;

    cout << "running" << endl;
  }
  else if(outputRNG > (49-attempts*5) || outputRNG <= 64)
  { 
    switch(rand()%3) 
    {
      case 0:
      name = "mousie";
      cout << "You get " << name << "... It's been there for a while." << endl;
      break;
      case 1:
      name = "a circuit board";
      cout << "You get " << name << "... I have a small internal fire here!"
      << " Run!  What are you standing there for??" << endl;
      break;
      case 2:
      name = "a Dylan5 doll";
      cout << "You get " << name << "... ZZZZZZZ" << endl;
      break;
    }
  }
  else if (outputRNG >= 65|| outputRNG <= 89)
  {
    cout << "Nothing for you, sucker!  I don't care if you paid" << endl;
  }
  else if (outputRNG >= 90)
  {
    cout << "you get " << name << "... times 7! HOLY MOLY." << endl;
    mtb *= 7;
    
    cout << "You will lose " << (mtb*rate) << " pounds by eating these " 
    << name << "s." << endl;
  }
  return;
}

bool checkRetry()
{
  string name;
  string retryUser = "";
  while(retryUser != "yes" && retryUser != "no")
  {
    cout << "Would you like to purchase something else? Please enter 'yes'"
    << "or 'no'" << endl;
    cin >> retryUser;
  }
  return retryUser == "yes";  
}

void signoff()
{
  cout << "This concludes the Digital Vending Machine. "
  << "Thank you for your service" << endl;
  cout << "(and more importantly, your money)!" << endl;
  return;
}
