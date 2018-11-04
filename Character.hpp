/*********************************************************************
** Description: Specification file for the Character class.
*********************************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>

class Character {

  public:
  Character();
  Character(int attack, int defense, int armor, int strength, std::string description);
  virtual ~Character();
  virtual int attack(Character &enemy) = 0;
  virtual int defend() = 0;
  int rollDie(int numSides, int numDice);
  int getAttackPts();
  int getDefensePts();
  int getArmorPts();
  int getStrengthPts();
  int getNumDice();
  int getNumSides();
  std::string getCharacteristics();
  void setAttactPts(int attack);
  void setDefensePts(int defense);
  void setArmorPts(int armor);
  void setStrengthPts(int strength);
  void setNumDice(int dice);
  void setNumSides(int sides);
  void setCharacteristics(std::string description);


  private:


  protected:
    int attackPts, defensePts, armorPts, strengthPts, numDice, numSides;
    std::string characteristics;

};

#endif
