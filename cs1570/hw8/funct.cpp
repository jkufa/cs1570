/*
Programmers: Jack Kufa & Andy Reyes
Section: F
Date: 04/11/2018
*/

#include "functs.h"

int rng (int max, int min)
{
  int value = rand() % (max - min + 1) + min;
return value;
}

void beatrice()
{
  char beatrice_sayings_counter[150];
  char beatrice_sayings[30];
  int value_beatrice;
  int beatrice_count = 30;
  int d = 0;
  
  ifstream in2;
  in2.open("beatriceSayings.dat");
  in2 >> beatrice_count;


  value_beatrice = rng(beatrice_count,1);
  if (value_beatrice == 1)
    value_beatrice += 1;
  for (int a=0; a < value_beatrice-1; a++)
    in2.ignore(256, '\n');
  cout << "Beatrice: ";
    
  in2.getline(beatrice_sayings_counter, 149, '\n');//have this count how many spaces in order to get
  for (int i = 0; i < static_cast<int>(strlen(beatrice_sayings_counter)); i++) //how many words to loop until it reaches the end
  {
    if (beatrice_sayings_counter[i] == ' ')
      d++;
  }
  in2.seekg(0, ios::beg);        
    
  for (int a=0; a < value_beatrice-1; a++)
    in2.ignore(256, '\n');  

  for (int i = 0; i < d + 1; i++)
  {
    if(i == d)
      in2.getline(beatrice_sayings,29,'\n');
    else
      in2.getline(beatrice_sayings,29, ' ');
    
    //beatrice_sayings = filter(beatrice_sayings);
    filter(beatrice_sayings);
    cout << " " << beatrice_sayings;
  }
  in2.seekg(0, ios::beg);
  cout << endl;
  in2.close();
}

void bojack()
{
  char bojack_sayings_counter[150];
  char bojack_sayings[30];
  int value_bojack;
  int bojack_count = 25;
  int d = 0;

  ifstream in1;  
  in1 >> bojack_count;
  in1.open("bojackSayings.dat");

  value_bojack = rng(bojack_count,1);
  if (value_bojack == 1)
    value_bojack += 1;
  for (int a=0; a < value_bojack-1; a++)
    in1.ignore(256, '\n');
  cout << "Bojack: ";
    
  in1.getline(bojack_sayings_counter, 149, '\n');//have this count how many spaces in order to get
  bojack_sayings_counter[strlen(bojack_sayings_counter)] = '\0';
  for (int i = 0; i < static_cast<int>(strlen(bojack_sayings_counter)); i++)                  //how many words to loop until it reaches the end
  {
    if (bojack_sayings_counter[i] == ' ')
      d++;
  }
  in1.seekg(0, ios::beg);        
    
  for (int a=0; a < value_bojack-1; a++)
    in1.ignore(256, '\n');  
  for (int i = 0; i < d + 1; i++)
  {
    if(i == d)
      in1.getline(bojack_sayings,29,'\n');
    else
      in1.getline(bojack_sayings,29, ' ');
      
  filter(bojack_sayings);
      

    cout << " " << bojack_sayings;
  }
  in1.seekg(0, ios::beg);
  cout << endl;
  in1.close();
}



char filter(char sayings[])
{
  char bitch1[20] = "Bitch,";
  char bitch2[20] = "bitch?";
  char bitch3[20] = "bitch!";
  char bitch4[20] = "bitch,";
  char dammit[20] = "Dammit,";
  char shit1[20] = "shit";
  char shit2[20] = "shit!";
  char crap1[20] = "crap";
  char crap2[20] = "crap!";
  char damn[20] = "damn";

  if (!(strcmp(sayings, bitch1)))
    strcpy(sayings, "Mean person");
  if (!(strcmp(sayings, bitch2)))
    strcpy(sayings, "mean person?");
  if (!(strcmp(sayings, bitch3)))
    strcpy(sayings, "mean person!");
  if (!(strcmp(sayings, bitch4)))
    strcpy(sayings, "mean person,");
  if (!(strcmp(sayings, dammit)))
    strcpy(sayings, "darn it,");
  if (!(strcmp(sayings, shit1)))
    strcpy(sayings, "poop");
  if (!(strcmp(sayings, shit2)))
    strcpy(sayings, "poop!");
  if (!(strcmp(sayings, crap1)))
    strcpy(sayings, "poopie");
  if (!(strcmp(sayings, crap2)))
    strcpy(sayings, "poopie!");
  if (!(strcmp(sayings, damn)))
    strcpy(sayings, "hoot");
}

void bingocards(char bojack_sayings[])
{
  char bingo[5][5][15];
  char bingo2[5][5][15];
  char bingospot[20];
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
  cout << "fuck off" << endl;
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cout << bingo2[i][j] << " ";
    }
  }
for (int i = 0; i < 5;i++)
{
  for (int j=0; j < 5; j++)
  {
    in3.getline(bingospot,14," ");
    if(strcmp(bingospot, bojack_sayings));
    strcpy(bingospot, " ");
    cout << bingospot;
  }
}
return;
}


  