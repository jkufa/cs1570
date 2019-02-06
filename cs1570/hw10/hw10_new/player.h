/*
Programmers: Andy Reyes & Jack Kufa
Date: 5/2/2018
ID: 12541073 / 12545491
Professor: Xiong
Assignment #10
*/

#ifndef PLAYER_H
#define PLAYER_H

#include "carddeck.h"
#include "path.h"
#include "colors.h"

class player
{
  private:
    string name;
    string color;
    COLOR color_enum;
    int lives;
    path player_path;
    bool fun;

  public:
    player()
    {
      name = "";
      lives = 5;
      fun = true;
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

    COLOR get_color()
    {
     return color_enum;
    }

    void decrease_lives()
    {
      lives--;
      return;
    }

    int get_lives() {return lives;}

    string * get_array_path() { return player_path.get_path_array(); }

    path & get_path() { return player_path; }
    bool operator== (const bool havingFun)
    {
      return (fun == havingFun);
    }
};

#endif