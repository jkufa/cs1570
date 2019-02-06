/*
Programmers: Andy Reyes & Jack Kufa
Date: 5/2/2018
ID: 12541073 / 12545491
Professor: Xiong
Assignment #10
*/

#ifndef BOARD_H
#define BOARD_H
#include "colors.h"

class Board
{
private:
  int red_loc;
  int blue_loc;
  int green_loc;
  int orang_loc;
public:
  void move(COLOR color, int spaces)
  {
    switch(color)
    {
      case Red:
        if ((red_loc + spaces != 23 || blue_loc != 23)
            && (red_loc + spaces != 32 || green_loc != 32))
        {
          red_loc += spaces;
        }
        break;

      case Green:
        if ((green_loc + spaces != 23 || red_loc != 2)
            && (green_loc + spaces != 32 || orang_loc != 32))
        {
          green_loc += spaces;
        }
        break;

      case Orange:
        if ((orang_loc + spaces != 23 || green_loc != 23)
            && (orang_loc + spaces != 32 || blue_loc != 32))
        {
          orang_loc += spaces;
        }
        break;

      case Blue:
        if ((blue_loc + spaces != 23 || orang_loc != 23)
            && (blue_loc + spaces != 32 || red_loc != 32))
        {
          blue_loc += spaces;
        }
    }
    return;
  }

  int get_location(COLOR color)
  {
    int loc = 0;
    switch (color)
    {
      case Red:
        loc = red_loc;
        break;

      case Green:
        loc = green_loc;
        break;

      case Orange:
        loc = orang_loc;
        break;

      case Blue:
        loc = blue_loc;
    }
    return loc;
  }
};
#endif