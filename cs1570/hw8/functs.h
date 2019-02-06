/*
Programmers: Jack Kufa & Andy Reyes
Section: F
Date: 04/11/2018
*/

#ifndef FUNCTS_H
#define FUNCTS_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string.h>
using namespace std;

//Desc: Randomly generates a number betwwen the min value and max value
//Pre: input numbers are valid
//Post: returns a number between 
int rng (int max,int min);

//Desc: randomly chooses a sentence for beatrice to say
//Pre: 
//Post:
void beatrice ();

//Desc: randomly chooses a sentence for bojack to say
//Pre:
//Post:
void bojack ();

//Desc: filters the bad words
//Pre:
//Post:
char filter (char sayings[]);

void bingocards(char bojack_sayings[]);
#endif