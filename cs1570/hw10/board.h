#ifndef BOARD_H
#define BOARD_H
#include "colors.h"

class Board
{
public:
  void move(Color color, int spaces)
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
        if ((green_loc + spaces != 23 || red_loc != 23))
            && (green_loc + spaces != 32 || orang_loc != 32)
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

  int get_location(Color color)
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
/*
  Color get_winner()
  {
    Color winner = Nobody;
    if (red_dead && green_dead && orange_dead && blue_dead)
    {
      winner = Nobody;
    }
    else if (red_dead && green_dead && orange_dead)
    {
      winner = Blue;
    }
    else if (green_dead && orange_dead && blue_dead)
    {
      winner = Red;
    }
    else if (orange_dead && blue_dead && red_dead)
    {
      winner = Green;
    }
    else if (blue_dead && red_dead && green_dead)
    {
      winner = Orange;
    }
    else if (red_loc >= WIN_SPOT)
    {
      winner = Red;
    }
    else if (green_loc >= WIN_SPOT)
    {
      winner = Green;
    }
    else if (orang_loc >= WIN_SPOT)
    {
      winner = Orange;
    }
    else if (blue_loc >= WIN_SPOT)
    {
      winner = Blue;
    }
    return winner;
  }
  
*/
private:
  const int WIN_SPOT = 41;
  int red_loc = 0;
  int blue_loc = 0;
  int green_loc = 0;
  int orang_loc = 0;
};
#endif