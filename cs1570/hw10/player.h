/*
Programmer: Andy Reyes
Date: 04/18/2018
ID: 12541073
Professor: Xiong
Assignment #9
*/

#ifndef PLAYER_H
#define PLAYER_H

#include "carddeck.h"
#include "path.h"

class player
{
  private:
    string name;
    string color;
    int lives;
    path player_path;

  public:
    player()
    {
      name = "";
      color = "";
      lives = 5;
    }

    void set_name(string player_name)
    {
      name = player_name;
      return;
    }

    void set_color(string player_color)
    {
      color = player_color;
      return;
    }

    string * get_array_path() { return player_path.get_path_array(); }

    path & get_path() { return player_path; }
};

#endif