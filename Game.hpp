/*********************************************************************
** Description: Specification file for the Game class.
*********************************************************************/

#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>

#include "Character.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "HarryPotter.hpp"
#include "Medusa.hpp"
#include "Vampire.hpp"

class Game {

  public:
  Game();
  Game(int character1, int character2);
  ~Game();
  void fight(Character* character1, Character* character2);

  private:
  Character* fighter1 = nullptr;
  Character* fighter2 = nullptr;
  Character* getFighter1();
  Character* getFighter2();
  void setFighter(int fighter, int choice);

};

#endif
