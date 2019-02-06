/*
Programmer: Andy Reyes
Date: 04/18/2018
ID: 12541073
Professor: Xiong
Assignment #9
*/


#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include <cstring>
#include <iomanip>
using namespace std;

class card
{
  private:
    unsigned int spaces_to_move;
    char riddle[128];
    char answer_for_riddle[25];
    char rescue[20];

  public:
    card()
    {
      spaces_to_move = 0; //uninitialized card
    } //card values set in carddeck class

    int get_spaces() { return spaces_to_move; }

    char * get_riddle() { return riddle; }

    char * get_answer() { return answer_for_riddle; }

    char * get_rescuer() { return rescue; }

    void set_spaces(int spcs)
    {
        spaces_to_move = spcs;
        return;
    }

    void set_riddle(char ridd[])
    {
        strcpy(riddle, ridd);
        return;
    }

    void set_answer(char ans[])
    {
        strcpy(answer_for_riddle, ans);
        return;
    }

    void set_rescuer(char resc[])
    {
        strcpy(rescue, resc);
        return;
    }

    card & operator=(card &source)
    {
      set_spaces(source.get_spaces());
      set_riddle(source.get_riddle());
      set_answer(source.get_answer());
      set_rescuer(source.get_rescuer());
      
      return *this;
    }

    friend ostream & operator<<(ostream &out, card &source)
    {
        out << source.get_riddle() << endl
            << "The answer is: " << source.get_answer() << endl
            << "You may be rescued by: " << source.get_rescuer() << endl;
        
        return out;
    }
};

#endif