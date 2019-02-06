#include "card.h"

Card::Card()
{
  spaces_to_move = 0;
  riddle = "";
  riddleAns = "";
  rescue = "";
}

Card::Card(Card c)
{
  spaces_to_move = c.getSpaces();
  riddle = c.getRiddle();
  riddleAns = c.getAnswer();
  rescue = c.getRescue();
}

Card::Card(int in_spaces, string in_riddle, string in_answer, string in_rescue)
{
  spaces_to_move = in_spaces;
  riddle = in_riddle;
  riddleAns = in_answer;
  rescue = in_rescue;
}

int Card::getSpaces()
{
  return spaces_to_move;
}

void Card::setSpaces(int value)
{
  spaces_to_move = value;
  return;
}

string Card::getRiddle()
{
  return riddle;
}

void Card::setRiddle(string value)
{
  riddle = value;
  return;
}

string Card::getAnswer()
{
  return riddleAns;
}

void Card::setAnswer(string value)
{
  riddleAns = value;
  return;
}

string Card::getRescue()
{
  return rescue;
}

void Card::setRescue(string value)
{
  rescue = value;
  return;
}