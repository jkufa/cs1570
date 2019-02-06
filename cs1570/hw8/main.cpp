/*
Programmers: Jack Kufa & Andy Reyes
Section: F
Date: 04/11/2018
*/

#include "functs.h"

int main()
{
  char end_of[55];
  int f = 0, m = 0, n = 0;
  int value_Prize;
  char winners_Prize[50];
  char player1[25];
  char player2[25];
  srand(time(NULL));
  //srand(1522258756);
  
  cout << "Welcome to the Bojack and Beatrice bingo game!" << endl << endl;
  cout << "Enter Player 1's name (25 character limit): ";
  cin.getline(player1, 24);
  cout << "Enter Player 2's name (25 character limit): ";
  cin.getline(player2, 24);
  cout << endl;

  ifstream in3;
  ifstream in4;
  ifstream in5;

  in3.open("bingoCard1.dat");
  in4.open("bingoCard2.dat");

  do{
    
    bojack();
    beatrice();
    f++;

  }while (f<5);

  if (f==6)
  {

    in5.open("WinnersPrize.dat");
    while(in5.getline(end_of, 54, '\n'))
      m++;
    value_Prize = rng (m, 1);
    in5.clear();
    in5.seekg(0, ios::beg);
    while(n <= value_Prize) //Read file until it reaches the random gen number
    {
      in5.getline(winners_Prize,54, '\n');
      n++;
    }

    cout << "congratulations! " << "Your prize is: " << winners_Prize << endl
         << endl;
  }
bingocards(bojack_saying);
return 0;
}

/*
for (int i, i < 26, i++)
in3.getline (bingo_t, 14, ',');
in3 >> bingo_s;
*/