#include "HarryPotter.hpp"

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
