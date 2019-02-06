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

int main()
{
  srand(456);
  int randCreature, randSaying;
  int numCreatures = 0;
  //this sets each creature equal to particular values
  Creature Wanda   = createCreature("Wanda",2,6);
  Creature Stanley = createCreature("Stanley",3,1);
  Creature Sylvia  = createCreature("Sylvia",4,2);
  Creature Janie   = createCreature("Janie",1,10);
  Creature Doris   = createCreature("Doris",8,4);
  Creature Bob     = createCreature("Bob",1,5);
  Creature Sammy   = createCreature("Sammy",8,4);
  Creature Walter  = createCreature("Walter",6,2);
  Creature Stevie  = createCreature("Stevie",2,3);
  Creature Sheila  = createCreature("Sheila",1,3);
  Creature insert;
  Creature stackCards[100];
  Creature creatureArray [10] = {Wanda,Stanley,Sylvia,Janie,Doris,Bob,Sammy,
                                Walter,Stevie,Sheila};
  string sayings [14] = {"Whazzup?",
                        "Duuude, totally love the horse head and human body"
                          " combo!",
                        "Looking for a card (shark)?",
                        "Are you someone famous?",
                        "You look fishy to me; or are you horsing around?",
                        "Don't trust the salmon!!!",
                        "Here's some advice:  the shark wants you to be his"
                          " chum!",
                        "Better take some paper towels if you visit the"
                         " blobfish",
                        "Hey man, got any sea-weed?",
                        "Let me give you my card...my phone number is on the"
                          " back",
                        "I'd gladly pay you Tuesday for a lobster roll today.",
                        "Don't be so crabby!",
                        "Just keep swimming, swimmin, swimming, ...",
                        "You just keep sinking, sinking, sinking,...",
                        };
  int creaturesFound [7];

  cout << "Welcome to Atlantis! You're stuck here unless you meet 7"
  "unique creature, collect 4 'stackable' cards, or you visit 100 different"
  " creatures! Let's begin with the simulation..." << endl;
  for (int i = 0; i < 100; i++)
  {
    randCreature = rand() % 10;
    randSaying = rand() % 14;
    Creature insertC = creatureArray[randCreature];
    cout << insertC.name << ": ";
    cout << "'" << sayings[randSaying] << "'" << endl;
    cout << insertC.name << " handed you their business card." << endl;
    
    insertCreature(stackCards, insertC, i);
    if(fourstackbabe(stackCards, i))
    {
      i = 101; //This is to force the for loop to close
      break;
    }
    isNewCreature(creaturesFound, numCreatures, randCreature);
    cout << "You have met " << numCreatures << " unique creatures." << endl;
    if (numCreatures == 7)
    {
      cout << "You can now leave since you have met 7 unique creatures.";
      i = 101; 
    }
    else if (i == 100)
    {
      cout << "Wow! You've visited 100 creatures." << endl;
      i = 101;
    }

    cout << endl;
  }
  cout << "Thank you for visiting Atlantis! Have a nice day."
  "(and please, go easy on the grading! This was a hard program "
  "to make!)" << endl;
return 0;
} 