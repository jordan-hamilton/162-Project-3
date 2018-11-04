#include "HarryPotter.hpp"


/***********************************************************************************************
** Description: An attack method that rolls the number of dice for this object, returns a random
** number, and sets and returns the object's attack points as an integer.
***********************************************************************************************/
int HarryPotter::attack() {

  setAttackPts( rollDie(numAttackDice, numAttackSides) );

  return getAttackPts();

}


int HarryPotter:: defend(int hitPts) {

  int damage = 0;

  setDefensePts( rollDie(numDefenseDice, numDefenseSides) );

  damage = hitPts - getDefensePts() - getArmorPts();

  if ( damage > 0) {
    setStrengthPts( getStrengthPts() - damage );
  }

  if (getStrengthPts() <= 0 && !getHasRevived()) {
    revive();
  }

  return getDefensePts();

}


//TODO: call this
void HarryPotter::revive() {

    setStrengthPts(20);
    setHasRevived(true);

}


bool HarryPotter::getHasRevived() {
  return hasRevived;
}


void HarryPotter::setHasRevived(bool lifeUsed) {
  hasRevived = lifeUsed;
}
