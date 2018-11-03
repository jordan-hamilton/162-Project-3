#include "Die.hpp"

using std::rand;
using std::string;


/***********************************************************************************************
** Description: Default constructor that initalizes an object with an invalid number of sides
** and a standard die type (not loaded).
***********************************************************************************************/
Die::Die() {
  setSides(0);
}


/***********************************************************************************************
** Description: Constructor that takes an integer to set the data member sides and a string to
** specify the type of die.
***********************************************************************************************/
Die::Die(int numOfSides) {
  setSides(numOfSides);
}


/***********************************************************************************************
** Description: Returns the sides data member.
***********************************************************************************************/
int Die::getSides() {
  return sides;
}


/***********************************************************************************************
** Description: Takes an integer to set the number of sides.
***********************************************************************************************/
void Die::setSides(int numOfSides) {
  sides = numOfSides;
}


/***********************************************************************************************
** Description: Virtual function that uses the rand() function and modular arithmetic to return
** an integer representing a die roll between 1 and the number of sides on the Die object.
***********************************************************************************************/
int Die::rollDie() {
  int roll;
  roll = rand() % sides + 1;
  return roll;
}
