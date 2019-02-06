/*
       Name: Jack Kufa
 Student ID: 12545491
 Instructor: Xiong
    Section: F
Description: Runs through a simulation that provides randomized units
             to the user and runs through certain scenarios depending
             on how mnay points have been accumulated
*/
#include <iostream>
#include <cstdlib>
using namespace std;

//Description:  Runs a simulation of the CS Office
//        Pre:  None
//       Post:  Description has been output to the screen
void beginSimulation();

//Description:  Gets card from Rachel
//        Pre:  `card` variable is had been declared
//              and can recieve return value from rachel.
//       Post:  card is initialized to number between 0 and 4
//              welcome message has been output to screen
int rachel();

//Description:  talks to Dylan
//        Pre:  card and chips have been declared and card has been initialized
//       Post:  card incremented by 7, chips incremented by 5
//              "Hey. Are you ok? Here, have some chips...they're free." output to screen
int dylan1(int & card, int & chips);

//Description:  talks to Dylan
//        Pre:  card and chips have been declared and card has been initialized
//       Post:  card doubled, chips incremented by 10
//              "Ignore him. CHIPS?! What kind?"
int dylan2(int & card, int & chips);

//Description:  talks to Dylan
//        Pre:  card and chips have been declared and card has been initialized
//       Post:  chips increase by 3, 8 points added to card
//              "Hull LO"
int dylan3(int & card, int & chips);

//Description:  talks to Dylan
//        Pre:  card and chips have been declared and card has been initialized
//       Post:  gives no point, takes 2 points away from card
//              "ZZzzzzzzzz"
int dylan4(int & card);

//Description:  talks to Dylan
//        Pre:  card and chips have been declared and card has been initialized
//       Post:  gives 4 chips, if point count is less than 10 it will double,
//              otherwise +5 points
//              "You won't do it, you're scared!"
int dylan5(int & card, int & chips);

//Description:  responds to user's accrued points and shows them the exit
//        Pre:  card must be greater than or equal to 30
//       Post:  user is allowed to leave
//              Elaina's reaction to card value has been output to screen
void elaina(int card);

//Description:  exits the office
//        Pre:  elaina() has been run, card >= 30
//       Post:  outputs number of chips and points accumulated; 
//              office has been exited, simulation ready to end
void leave(int card, int chips);

int main()
{
  srand(time(NULL));
  int card, chips, randNum;
  beginSimulation();
  chips = 0;
  card = rachel();
  while (card < 31)
  {
    randNum = rand() % 5 + 1;
    switch(randNum)
    {
      case 1:
        dylan1(card, chips);
        break;
      case 2:
        dylan2(card, chips);
        break;
      case 3:
        dylan3(card, chips);
        break;
      case 4:
        dylan4(card);
        break;
      case 5:
        dylan5(card, chips);
        break;
      default:
        cout << "ERROR - number outside [1,5] reached" << endl;
    }
  }
  elaina(card);
  leave(card, chips);
  return 0;
}
void beginSimulation()
{
  cout << "It was a dark and stormy night in the world of CS 1570 homework" 
  << " simulations..." << endl;
  cout << "As the rain pours down you run into the Missouri "
  << "S&T Computer Science Department for shelter." << endl;
  cout << "Inside, you are greeted by a woman known as Rachel..." << endl;
  return;
}

int rachel()
{
  cout << "Rachel: Hello! Welcome to the Computer Science Department Office(tm)!" << endl;
  cout << "Watch out for rogue Dylans. Here's your card! Depending on"
  << " how many points you accumulate interesting things will occur!" << endl;
  return rand() % 5;
}

int dylan1(int & card, int & chips)
{
  chips += 5;
  card += 7;
  cout << "Dylan (1): Hey. Are you ok? Here, have some chips...they're free." << endl;
  return 0;
}

int dylan2(int & card, int & chips)
{
  chips += 10;
  card *= 2;
  cout << "Dylan(2): Ignore him. CHIPS?! What kind?" << endl;
  return 0;
}

int dylan3(int & card, int & chips)
{
  chips += 3;
  card += 8;
  cout << "Dylan(3): Hull LO!" << endl;
  return 0;
}

int dylan4(int & card)
{
  card -= 2;
  cout << "Dylan(4): ZZzzzzzzzz" << endl;
  return 0;
}

int dylan5(int & card, int & chips)
{
  chips += 4;
  if (card < 10)
    {
      card *= 2;
    }
    else
    {
      card += 5;
    }
  cout << "Dylan(5): You won't do it; you're scared." << endl;
  return 0;
}

void elaina(int card)
{
  if (card < 30)
  {
    cout << "ERROR - you need 30 points to see Elaina." << endl;
    return;
  }

  if (card <= 40)
  {
    cout << "Elaina: Hello there! Huh? Only " << card
    << " points? Please leave through that door. "
    << "Here's a dum-dum for your efforts." << endl;
  }
  else if (card < 60)
  {
    cout << "Elaina: Hello there! Wow, you have " << card
    << " points. You get a smarty. Please leave through that door." << endl;
  }
  else
  {
    cout << "Elaina: Hello there! Oh Double WOW, you have " << card
    << " points! Here's 2 smarties. You get to talk to the boss." << endl;
  }
 
  return;
}

void leave (int card, int chips)
{
  cout << "The storm has finally subsided. You leave the department " 
  << "uncomfortable and" << endl;
  cout << "confused. Regardless, you managed to accumulate " 
  << card << " points and " << chips << " chips." << endl;
  cout << "Thus, the CS 1570 homework simulation has concluded. Have a nice day!" << endl;
  return;
}