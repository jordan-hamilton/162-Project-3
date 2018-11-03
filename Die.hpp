/*********************************************************************
** Description: Specification file for the Die class.
*********************************************************************/

#ifndef DIE_HPP
#define DIE_HPP

#include <cstdlib>
#include <string>

class Die {

  protected:
    int sides;

  public:
    Die();
    Die(int numOfSides);
    virtual ~Die() {};
    void setSides(int numOfSides);
    int getSides();
    int rollDie();

};

#endif
