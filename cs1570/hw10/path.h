/*
Programmer: Andy Reyes
Date: 04/18/2018
ID: 12541073
Professor: Xiong
Assignment #9
*/

#ifndef PATH_H
#define PATH_H

#include "carddeck.h"

class path
{
  private:
    string entries[4];
    unsigned int current_position;
    string player_path[42];

  public:
    path()
    {
      int a;
      current_position = 0;
      entries[0] = "blank";
      entries[1] = "wait for 5 or 8";
      entries[2] = "jungle";
      entries[3] = "rhino";
      player_path[0] = '\0';
      
      for (int i =0; i < 5; i++)
      {
        do
        {
          a = rng(41,0);
        }while(player_path[a] == entries[1]);
        player_path[a] = entries[1];
      }

      for(int i =0; i < 3; i++)
      {
        do
        {
        a = rng(41,1);
        }while(player_path[a] == entries[1] || player_path[a] == entries[2]);
        player_path[a] = entries[2];
      }
      for (int i = 0; i < 7; i++)
      {
        do
        {
        a = rng(41,0);
        }while(player_path[a]==entries[1]||player_path[a]==entries[2]||player_path[a]==entries[3]);
        player_path[a] = entries[3];        
      }
      for (int i =0; i < 42; i++)
      {
        if (player_path[i] == "")
        {
          player_path [i] = entries[0];
        }
      }
    }

    string * get_path_array() { return player_path; }

    int rng (int max, int min)
    {
      return rand()%(max-min+1)+min;
    }

    friend ostream & operator<<(ostream &out, path &source)
    {
      for(int i = 0; i < 42; i++)
      {
        if(source.player_path[i] != source.entries[0])
        {
          out << "     " << i + 1 << ": " << source.player_path[i] << endl;
        }
      }

      return out;
    }
};

#endif