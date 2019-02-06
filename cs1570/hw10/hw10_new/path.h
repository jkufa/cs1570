/*
Programmers: Andy Reyes & Jack Kufa
Date: 5/2/2018
ID: 12541073 / 12545491
Professor: Xiong
Assignment #10
*/

#ifndef PATH_H
#define PATH_H

#include "carddeck.h"
#include <iostream>
#include <cstdlib>

class path
{
  private:
    string entries[4];
    int current_position;
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
      player_path[0] = "blank";
      player_path[41] = "jumanji";

      for (int i =0; i < 5; i++)
      {
        do
        {
          a = rng(40,1);
        }while(player_path[a] == entries[1] || player_path[a] == entries[0]
               || player_path[a] == "jumanji" || player_path[a] == "blank");
        player_path[a] = entries[1];
      }

      for(int i =0; i < 3; i++)
      {
        do
        {
        a = rng(40,1);
        }while(player_path[a] == entries[1] || player_path[a] == entries[2]
               || player_path[a] == entries[0] || player_path[a] == "jumanji"
               || player_path[a] == "blank");
        player_path[a] = entries[2];
      }
      for (int i = 0; i < 7; i++)
      {
        do
        {
        a = rng(40,1);
        }while(player_path[a] == entries[1] || player_path[a] == entries[2] 
               || player_path[a] == entries[3] || player_path[a] == entries[0]
               || player_path[a] == "jumanji" || player_path[a] == "blank");
        player_path[a] = entries[3];        
      }
      for (int i = 0; i < 42; i++)
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