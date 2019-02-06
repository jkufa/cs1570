#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
  char bingo[5][5][15];
  char bingo2[5][5][15];
  ifstream in3;
  ifstream in4;
  in3.open("bingoCard1.dat");
  in4.open("bingoCard2.dat");
  // construct bingo card from "bingoCard.txt"
  cout << "beep" << endl;
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      char current_word[15];
      in3.getline(current_word,15,',');
      strcpy(bingo[i][j], current_word);
    }
  }
  // print bingo card 1
  cout << "boop" << endl;
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << bingo[i][j] << " ";
    }
    cout << endl;
  }
  // construct bingo card 2
  cout << "blip" << endl;
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      char current_word[15];
      in4.getline (current_word,15,',');
      strcpy(bingo2[i][j], current_word);
    }
  }
  // print bingo card 2
  cout << "blop" << endl;
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << bingo2[i][j] << " ";
    }
  }

  return 0;
}