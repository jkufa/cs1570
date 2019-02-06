/*
       Name: Jack Kufa
 Student ID: 12545491
 Instructor: Xiong
    Section: F
       Date: March/5/2018
       File: main.cpp
Description: references vending.cpp and vending.h to run a simulation
             of a vending machine... With some added RNG!
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "vending.h"

int main()
{
float rate = 0;
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
srand(time(NULL));

rate = rateInput(rate);
vendingCase(rate);
return 0;
}