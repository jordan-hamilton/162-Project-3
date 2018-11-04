#include "Barbarian.hpp"

int Barbarian::attack() {

  setAttackPts( rollDie(numAttackDice, numAttackSides) );

  return getAttackPts();

}

int Barbarian:: defend(int hitPts) {

  int damage = 0;

  setDefensePts( rollDie(numDefenseDice, numDefenseSides) );

  damage = hitPts - getDefensePts() - getArmorPts();

  if ( damage > 0) {
    setStrengthPts( getStrengthPts() - damage );
  }

  return getDefensePts();

}
