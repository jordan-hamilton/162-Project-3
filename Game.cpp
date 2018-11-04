#include <cstdlib>

#include "Game.hpp"

using std::cout;
using std::endl;

Game::Game() {

}


Game::Game(int character1, int character2) {
  setFighter(1, character1);
  setFighter(2, character2);
  fight(fighter1, fighter2);
}

Game::~Game() {

  if (fighter1) {
    delete fighter1;
    fighter1 = nullptr;
  }

  if (fighter2) {
    delete fighter2;
    fighter2 = nullptr;
  }

}


void Game::fight(Character* character1, Character* character2) {

  unsigned seed = time(0);
  srand(seed);

  int lastAttacker = 0;

  int character1Strength = character1->getStrengthPts();
  int character2Strength = character2->getStrengthPts();

  cout << endl;

  if (firstStrike() == 1) {

    displayType(character1, 1, true);
    displayType(character2, 2, false);

    character2->defend( character1->attack() );

    displayRoll(character1, true);
    displayRoll(character2, false);

    displayDamage(character2, 2, character2Strength);

    lastAttacker = 1;

  } else {

    displayType(character2, 2, true);
    displayType(character1, 1, false);

    character1->defend( character2->attack() );

    displayRoll(character2, true);
    displayRoll(character1, false);

    displayDamage(character1, 1, character1Strength);

    lastAttacker = 2;

  }

  while( character1->getStrengthPts() > 0 && character2->getStrengthPts() > 0 ) {

    character1Strength = character1->getStrengthPts();
    character2Strength = character2->getStrengthPts();

    if (lastAttacker == 1) {

      displayType(character2, 2, true);
      displayType(character1, 1, false);

      character1->defend( character2->attack() );

      displayRoll(character2, true);
      displayRoll(character1, false);

      displayDamage(character1, 1, character1Strength);

      lastAttacker = 2;

    } else {

      displayType(character1, 1, true);
      displayType(character2, 2, false);

      character2->defend( character1->attack() );

      displayRoll(character1, true);
      displayRoll(character2, false);

      displayDamage(character2, 2, character2Strength);

      lastAttacker = 1;

    }

  }

}


int Game::firstStrike() {
  return rand() % 2 + 1;
}


void Game::displayDamage(Character *character, const int &characterNumber, const int &originalStrength) {

  if (character->getStrengthPts() <= 0) {
    cout << "Total inflicted damage: " << originalStrength << endl;
  } else if (character->getStrengthPts() > originalStrength) {
    cout << "Total inflicted damage: 0" << endl;
  } else {
    cout << "Total inflicted damage: " << originalStrength - character->getStrengthPts() << endl;
  }

  cout << "Defender's strength after this attack: ";

  if (character->getStrengthPts() > 0) {
    cout << character->getStrengthPts();
  } else {
    cout << 0 << endl;
    cout << "Fighter " << characterNumber << " has died." << endl;
    cout << "Fighter " << (characterNumber % 2 + 1) << " wins this fight.";
  }

   cout << endl << endl;

}


void Game::displayRoll(Character *character, const bool &isAttacker) {

  if (isAttacker) {
    cout << "Attacker rolls a " << character->getAttackPts() << endl;
  } else {
    cout << "Defender rolls a " << character->getDefensePts() << endl;

  }

}


void Game::displayType(Character *character, const int &characterNumber, const bool &isAttacker) {

  if (isAttacker) {
    cout << "Attacker: Fighter " << characterNumber << " - " << character->getType() << endl;
  } else {
    cout << "Defender: Fighter " << characterNumber << " - " << character->getType() << endl;
    cout << "Defender Armor: " << character->getArmorPts() << endl;
    cout << "Defender Strength: " << character->getStrengthPts() << endl;
  }

}


Character* Game::getFighter1() {
  return fighter1;
}


Character* Game::getFighter2() {
  return fighter2;
}


void Game::setFighter(int fighter, int choice) {
  if (fighter == 1) {

    switch (choice) {

      case 1 : fighter1 = new Barbarian;
               break;

      case 2 : fighter1 = new BlueMen;
               break;

      case 3 : fighter1 = new HarryPotter;
               break;

      case 4 : fighter1 = new Medusa;
               break;

      case 5 : fighter1 = new Vampire;
               break;

      default : {}

    }

  } else if (fighter == 2) {

    switch (choice) {

      case 1 : fighter2 = new Barbarian;
               break;

      case 2 : fighter2 = new BlueMen;
               break;

      case 3 : fighter2 = new HarryPotter;
               break;

      case 4 : fighter2 = new Medusa;
               break;

      case 5 : fighter2 = new Vampire;

      default : {}

    }

  }
}
