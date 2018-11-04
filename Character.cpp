#include "Character.hpp"

Character::Character() {
  attackPts = -1;
  defensePts = -1;
  armorPts = -1;
  strengthPts = -1;
  characteristics = "";

}


Character::Character(int attack, int defense, int armor, int strength, std::string description) {
  attackPts = attack;
  defensePts = defense;
  armorPts = armor;
  strengthPts = strength;
  characteristics = description;
}


Character::~Character() {

}


int Character::rollDie(int numSides, int numDice) {

  int result = 0;

  for (int i = 0; i < numDice; i++) {
    result += rand() % numSides + 1;
  }

  return result;

}


int Character::getAttackPts() {
  return attackPts;
}


int Character::getDefensePts() {
  return defensePts;
}


int Character::getArmorPts() {
  return armorPts;
}


int Character::getStrengthPts() {
  return strengthPts;
}


int Character::getNumDice() {
  return numDice;
}


int Character::getNumSides() {
  return numSides;
}


std::string Character::getCharacteristics() {
  return characteristics;
}


void Character::setAttackPts(int attack) {
  attackPts = attack;
}


void Character::setDefensePts(int defense) {
  defensePts = defense;
}


void Character::setArmorPts(int armor) {
  armorPts = armor;
}


void Character::setStrengthPts(int strength) {
  strengthPts = strength;
}


void Character::setNumDice(int dice) {
  numDice = dice;
}


void Character::setNumSides(int sides) {
  numSides = sides;
}

void Character::setCharacteristics(std::string description) {
  characteristics = description;
}
