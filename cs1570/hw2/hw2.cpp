/*
Name: Jack Kufa
Student ID: 12545491
Instructor: Xiong
Section: F
Date: Jan/29/2018
File: hw2.cpp
*/

//including IO stream libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  //introduces the user to the Aquarium Calculator
  cout << "Welcome to the Aquarium  Calculator!" << endl;

  int shrse_num; //defines the number of seahorse in the aquarium
  int glassThick; //defines glass thickness
  float volume; //defines the volume of the aquarium
  float length; //defines the length of the aquarium
  float width; //defines the width of the aquarium
  float depth; //defines the depth of the aquarium
  bool shrse_baby; //defines whether or not the aquarium contains baby seahorses

  //asks for user to give input on number of seahorses
  cout << "How many seahorses will be in your aquarium?" << endl;
  cin >>  shrse_num;
  //asks for user to give input on whether or not the aquarium will contain baby seahorses
  cout << "Will your aquarium contain baby seahorses?(enter 1 for yes, 0 for no)" << endl;
  cin >> shrse_baby;

  //calculates volume
  volume = 20 * shrse_num + shrse_baby;
  //calculates length
  length = pow((8*volume)/(7.47*3), 1.0/3.0);
  //calculates width and depth in terms of length
  width = (length/4);
  depth = (length*1.5);

  //calculates glass thickness by converting depth into inches then multiplying by .5, which is the ratio that determines the thickness of the glass
  glassThick = .5 * (depth * 12);

  //these cout inputs tell the user what dimensions should be used for the aquarium. This includes volume, length, width, depth, and glass thickness
  cout << "Your aquarium will need to meet these specifications:" << endl;
  cout << "" << endl;
  cout << "Volume:" << " " << volume << " gallons" << endl;
  cout << "Length:" << " " << length << " ft" << endl;
  cout << "Width:" << " " << width << " ft" << endl;
  cout << "Depth:" << " " << depth << " ft" << endl;
  cout << "Glass Thickness:" << " " << glassThick << " mm" << endl;

  //concludes the program
  cout << "" << endl;
  cout << "This concludes the Aquarium Calculator, farewell." << endl;

  return 0;
}
