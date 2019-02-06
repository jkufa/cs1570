/*
Programmers: Andy Reyes & Jack Kufa
Date: 5/2/2018
ID: 12541073 / 12545491
Professor: Xiong
Assignment #10
*/

#ifndef CARDDECK_H
#define CARDDECK_H

#include "card.h"

class carddeck
{
  private:
    int num_cards_in_deck, pos;
    card deck [50];
    
    int temp_int;
    char temp_chars[300];

  public:
    carddeck()
    {
      pos = 0;
      read_cards();
    }
    
    void shuffle()
    {
      int indices[50];
      card temp_deck[50];

      for(int k = 0; k < num_cards_in_deck; k++)
      {
        temp_deck[k] = deck[k];
      }

      for(int i = 0; i < num_cards_in_deck; i++)
      {
        indices[i] = i;
      }

      for(int q = 0; q < num_cards_in_deck; q++)
      {
        do
        {
          temp_int = rng(num_cards_in_deck - 1, 0);
        }while(indices[temp_int] == -1);

        deck[q] = temp_deck[temp_int];
        indices[temp_int] = -1;
      }
      return;
    }
    
    void read_cards()
    {
      srand(time(NULL));
      //srand(423432523);

      int num_lines;

      num_cards_in_deck = (rand() % 46) + 5; //need some cards in deck
      
      for(int i = 0; i < num_cards_in_deck; i++)
      {
        num_lines = 0;
        ifstream cards;
        cards.open("cards.dat");
        while(cards.getline(temp_chars, 300, '\n'))
        {
          if(strcmp(temp_chars, "-1"))
          {
            num_lines++;
          }
        }
        num_lines--; //because of extra newline at bottom
        
        cards.clear();
        cards.seekg(0, ios::beg);

        num_lines = rng(num_lines, 0);

        for(int j = 1; j < num_lines; j++)
        {
          cards.getline(temp_chars, 300, '\n');
        }
        cards >> temp_int;
        deck[i].set_spaces(temp_int);
        cards.ignore(256, '\t');
        cards.getline(temp_chars, 128, '\t');
        deck[i].set_riddle(temp_chars);
        cards.getline(temp_chars, 25, '\t');
        deck[i].set_answer(temp_chars);
        cards.getline(temp_chars, 20, '\n');
        deck[i].set_rescuer(temp_chars);
      }
      return;
    }

    card & next_card()
    {
      //calls card to read riddle, answer, and rescue item three ties and then
      //it increments to the new card
      static int third_read = 0;
      if (third_read == 3)
      {
        pos++;
        third_read = 0;
      }
      third_read++;
      if(pos >= 50 || !(deck[pos].get_spaces()))
      {
        shuffle();
        pos = 0;
      }
      if(pos == 0)
      {
        return deck[num_cards_in_deck - 1];
      }
      else
      {
        return deck[pos - 1];
      }
    }
    
    int rng(int max_val, int min_val)
    {
      int random_number = (rand() % (max_val - min_val + 1)) + min_val;

      return random_number;
    }

    friend ostream & operator<<(ostream &out, carddeck &source)
    {
        out << endl;
        
        for(int i = 0; i < source.num_cards_in_deck; i++)
        {
            out << source.deck[i] << endl;
        }
        
        return out;
    }
};

#endif