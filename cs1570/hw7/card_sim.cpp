/*
       Name: Jack Kufa
 Student ID: 12545491
 Instructor: Xiong
    Section: F
       Date: March/5/2018
       File: card_sim.cpp
Description: runs a simulation that looks for 3 different cases to be met.
             if 1 of these 3 cases are met, the program will terminate.
             This program uses arrays to input and output various information
             as well as a struct to define the creatures providing necessary
             information
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "card_sim.h"
using namespace std;

Creature createCreature (string name, int l, int h)
{
  Creature creatureMade;
  creatureMade.name = name;
  creatureMade.l = l;
  creatureMade.h = h;
  return creatureMade;
}

void isNewCreature(int creaturesFound [], int & numCreatures, int randCreature)
{
  bool newCard = true;
  for(int i = 0; i<numCreatures; i++)
  {
    if(creaturesFound [i] == randCreature)
    {
      newCard = false;
    }
  }
  if(newCard)
  {
    creaturesFound [numCreatures] = randCreature;
    numCreatures++;
  }
  return;
}

void insertCreature (Creature stackCards[100], Creature insertC, int size)
{
  Creature current;
  for(int i = 0; i < size; i++)
  {
    if(insertC == stackCards[i])
    {
      current = stackCards[i];
      stackCards[i] = insertC;
      insertC = current; 
    }
  }


 for(int i = 0; i < size; i++)
 {
    if(insertC < stackCards[i])
    {
      current = stackCards[i];
      stackCards[i] = insertC;
      insertC = current;      
    }
 }
 stackCards[size] = insertC;
 return;
}

bool fourstackbabe(Creature stackCards[100], int size)
{
  if(size < 4)
  {
    return false;
  }
  for(int i = 0; i < size; i++)
  {
    if(stackCards[i] < stackCards[i+1] && 
    stackCards[i+1] < stackCards[i+2] && 
    stackCards[i+2] < stackCards[i+3])
    {
      cout << "You can now leave since you have four stackable cards" << endl;
      cout << " you cards are:\n " << stackCards[i].name << "; Dimensions: "
      <<stackCards[i].l << "x" << stackCards[i].h << endl;
      cout << stackCards[i+1].name << "; Dimensions: "
      <<stackCards[i+1].l << "x" << stackCards[i+1].h << endl;
      cout << stackCards[i+2].name << "; Dimensions: "
      <<stackCards[i+2].l << "x" << stackCards[i+2].h << endl;
      cout << stackCards[i+3].name << "; Dimensions: "
      <<stackCards[i+3].l << "x" << stackCards[i+3].h << endl;
      return true;
    }
  }
  return false;
}

bool operator == (Creature lhs, Creature rhs)
{
  if ((lhs.l == rhs.l && lhs.h == rhs.h) || (lhs.l == rhs.l && lhs.h == rhs.h))
  {
    return true;
  }
  return false;
}

bool operator > (Creature lhs, Creature rhs)
{
  if ((lhs.l >= rhs.l && lhs.h >= rhs.h) || (lhs.l >= rhs.h && lhs.h >= rhs.l))
  {
    return true;
  }
  return false;
}

bool operator < (Creature lhs, Creature rhs)
{
  if ((lhs.l <= rhs.l && lhs.h <= rhs.h) || (lhs.l <= rhs.h && lhs.h <= rhs.l))
  {
    return true;
  }
  return false;
}



