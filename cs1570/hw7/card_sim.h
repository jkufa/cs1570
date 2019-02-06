/*    
       Name: Jack Kufa
 Student ID: 12545491
 Instructor: Xiong
    Section: F
       Date: March/5/2018
       File: card_sim.h
Description: runs a simulation that looks for 3 different cases to be met.
             if 1 of these 3 cases are met, the program will terminate.
             This program uses arrays to input and output various information
             as well as a struct to define the creatures providing necessary
             information
*/

#ifndef CARD_SIM_H
#define CARD_SIM_H

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Creature {
    string name;
    int l,h;
};
// Description: sets an outline for defining each indivisual creature
//         Pre: creature struct must be defined
//        Post: each individual creature will be defined
Creature createCreature(string name, int l, int h);

// Description: sorts and moves values of business cards in an array to
//              check for 'stackability'
//         Pre: All creatures have been defined
//        Post: program will complete (if condtion is met)
void insertCreature (Creature stackCards[100], Creature insertC, int size);

// Description: sees if there are four cards that are stackable
//         Pre: insertCreature must be running
//        Post: will output true once 4 'stackable' cards have been found
bool fourstackbabe (Creature stackCards[100], int size);

// Description: Checks to see if the creature being ecountered is unique or not
//         Pre: a stack of four cards has not yet been met
//        Post: program will complete (if condtion is met)
void isNewCreature(int (creaturesFound []), int & numCreatures,int randCreature);

bool operator == (Creature lhs, Creature rhs);
bool operator > (Creature lhs, Creature rhs);
bool operator < (Creature lhs, Creature rhs);

#endif //CARD_SIM_H