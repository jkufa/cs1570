/*
Programmer: Andy Reyes
Date: 04/18/2018
ID: 12541073
Professor: Xiong
Assignment #9
*/

#include "carddeck.h"
#include "path.h"
#include "player.h"
using namespace std;
int main()
{
  srand(time(NULL));
  
  player players[4];
  string poss_color;
  string temp;
  char temp_char[20]; //because of next_card() function
  int roll;
  int a = 0, b = 0, c = 0, d = 0;
  int retry = 0;
  string player1_spot;
  string player2_spot;
  string player3_spot;
  string player4_spot;  
  char rescue_die[8][20] = { "axe",
                             "die",
                             "open door",
                             "racquet",
                             "raft",
                             "rope",
                             "saber",
                             "hourglass" };

  for(int i = 0; i < 4; i++)
  {
    cout << "Please enter player " << i + 1 << "'s name: ";
    getline(cin, temp);
    players[i].set_name(temp);
  }

struct piece
{
  string color_picked;
  bool chosen;
}
  piece[4] =  {{"red", 0}, {"green", 0}, {"blue", 0}, {"orange", 0}};

  for (int i = 0; i < 4; i++)
  {
    do
    {
      retry = 0;
      do
      {
        cout << "Player " << i+1 << " please pick a color for your piece ("
             << "red, green, blue, or orange): ";
        getline(cin, poss_color);
        for (int j = 0; j < 4; j++)
        {
          if (poss_color == piece[j].color_picked)
          {
            if(piece[j].chosen)
            {
             retry = 1;
            }
            else
            {
              piece[j].chosen = true;
            }
          }
        }
      }while(poss_color!="red" && poss_color!="green" && poss_color!="blue"
             && poss_color!="orange");
    }while(retry == 1);
    players[i].set_color(poss_color);
  }
  
  cout << "Player 1's path: " << endl << players[0].get_path();
  cout << "Player 2's path: " << endl << players[1].get_path();
  cout << "Player 3's path: " << endl << players[2].get_path();
  cout << "Player 4's path: " << endl << players[3].get_path();

  carddeck stack;
  stack.shuffle();

  cout << stack << endl;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << "Player " << j + 1 << "'s roll," << endl;
      roll = (rand() % 8) + 1;
      cout << "Move forward " << roll << " spaces" << endl;
      if(j == 0)
      {
        a += roll;
        cout << "Tile: #" << a << " " << players[j].get_array_path()[a] << endl;
      }else if (j == 1)
      {
        b += roll;
        cout << "Tile: #" << b << " " << players[j].get_array_path()[b] << endl;
      }else if (j == 2)
      {
        c += roll;
        cout << "Tile: #" << c << " " << players[j].get_array_path()[c] << endl;
      }else
      {
        d += roll;
        cout << "Tile: #" << d << " " << players[j].get_array_path()[d] << endl;
      }
    
      strcpy(temp_char, stack.next_card().get_rescuer());
      cout << stack.next_card().get_riddle() << endl;
      phrases ();
      cout << " It's a " << stack.next_card().get_answer() << "!" << endl;
      cout << "You may be rescued by a " << temp_char << endl;
      for (int k = 0; k < 50; k++)
      {
        int roll1 = (rand() % 8);
        int roll2 = (rand() % 8);
        int roll3 = (rand() % 8);
        int roll4 = (rand() % 8);

        if ((roll1==roll2 && roll1==roll3 && roll1==roll4
            && (!(strcmp (rescue_die[roll1], temp_char))))
            || (roll1==roll2 && roll1==roll3 && roll1==roll4 &&
               (!(strcmp (rescue_die[roll1], "hourglass")))))
        {
          survived = 1;
          break;
        }
      }
      if (survived == 0)
      {
        cout << "Sorry! None of the tries matched! Lose a life" << endl
             << "Player " << j+1 << " has " << player().set_lives()
             << " lives remaining. Also move back 1 space." << endl << endl;
        if (j == 0)
          a--;
        else if (j == 1)
          b--;
        else if (j == 2)
          c--;
        else
          d--;
      }
      else
      {
        cout << "All four rolls match. Carry on." << endl << endl;
      strcpy(temp_char, stack.next_card().get_rescuer());
      cout << stack.next_card();
      roll = (rand() % 8);
      cout << "You rolled the '" << rescue_die[roll] << "'" << endl << endl;
      if (!(strcmp (rescue_die[roll], temp_char)))
      {
        cout << "The two items match." << endl << endl;
      }else
      {
        cout << "The two items do not match." << endl << endl;
      }
    }
  }

  return 0;
}
