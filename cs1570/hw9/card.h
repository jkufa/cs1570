#include <iostream>
#include <cstring>
using namespace std;

class Card
{
private:
  unsigned int spaces_to_move;
  string riddle;
  string riddleAns;
  string rescue;
public:
  int getSpaces();
  void setSpaces(int value);
  string getAnswer();
  void setAnswer(string value);
  string getRiddle();
  void setRiddle(string value);
  string getRescue();
  void setRescue(string value);
  Card();
  Card(Card c);
  Card(int spaces, string riddle, string answer, string rescue);

}
