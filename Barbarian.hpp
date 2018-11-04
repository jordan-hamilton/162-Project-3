/*********************************************************************
** Description: Specification file for the Barbarian class.
*********************************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Character.hpp"

class Barbarian : public Character {

  public:
    Barbarian() : Character() {
      setAttackPts(0);
      setDefensePts(0);
      setArmorPts(0);
      setStrengthPts(12);
      setNumAttackDice(2);
      setNumAttackDieSides(6);
      setNumDefenseDice(1);
      setNumDefenseDieSides(6);
      setCharacteristics("Think Conan or Hercules from the movies. Big sword, big muscles, bare torso.");
    }
    
    int attack();
    int defend(int hitPts);

  private:


};

#endif
