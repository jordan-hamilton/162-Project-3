#include "Game.hpp"

Game::Game() {

}


Game::Game(int character1, int character2) {
  setFighter(1, character1);
  setFighter(2, character2);
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
