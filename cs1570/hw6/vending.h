/*
       Name: Jack Kufa
 Student ID: 12545491
 Instructor: Xiong
    Section: F
       Date: March/5/2018
       File: vending.h
Description: 
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Description: Greets user & prompts for metabolic rate
//         Pre: none
//        Post: returns rate
float rateInput(float rate);

// Description: runs a simulation of a vending machine 
//              (now with additional arbitrary RNG!)
//         Pre: requires value for metabolic rate
//        Post: none
void vendingCase(float rate);

bool dryHay(float rate, int attempts);
bool wetHay(float rate, int attempts);
bool kale(float rate, int attempts);
bool groundCorn(float rate, int attempts);
bool carrots(float rate, int attempts);
bool imfshf(float rate, int attempts); // Function for Industrially Milled
                                       // Fortified Sawdust Horse Feed
void rngBull (string & name, float mtb, float rate, int attempts);
bool checkRetry();

// Description: ends program
//         Pre: user prompts to exit vending machine
//        Post: program ceases
void signoff();