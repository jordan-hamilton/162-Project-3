/***********************************************************************************************
** Program name: Project 3
** Author: Jordan Hamilton
** Date: 11/3/2018
** Description: This zoo tycoon game starts the player with a sum of money to purchase animals,
** beginning with 1 or 2 penguins, tigers and turtles. The player's money is subtracted for each
** purchased animal. Then, in a while loop, the animals in the zoo age by one day, are fed and
** reduce the players money by the cost of feeding each animal, then an random event occurs:
** an animal of a random type may die, an animal of a random type may have babies according to
** the number of babies associated with that animal's class, the player is rewarded with an
** added random bonus for the day based on the number of tigers in the zoo, or nothing occurs
** that day. Finally, the player's money is increased by the payoff associated with each animal
** in the zoo according to its type. The player is given the opportunity to purchase an adult
** animal, or skip their turn by not making a purchase. A long as the player's money is greater
** than 0 and the player has selected to continue the game at the end of a turn, the game
** continues. If the player runs out of money or quits the game, the program ends.
***********************************************************************************************/

#include "Menu.hpp"
#include "Game.hpp"

/***********************************************************************************************
** Description: This program can be run via the project3 executable generated by make.
***********************************************************************************************/
int main() {

  Menu mainMenu, gameMenu;

  mainMenu.addMenuItem("Play a game");
  mainMenu.addMenuItem("Exit");

  gameMenu.addMenuItem("Barbarian");
  gameMenu.addMenuItem("Blue Men");
  gameMenu.addMenuItem("Harry Potter");
  gameMenu.addMenuItem("Medusa");
  gameMenu.addMenuItem("Vampire");

  do {
    int character1 = gameMenu.getIntChoiceFromPrompt("Who should fighter 1 be?", 1, gameMenu.getMenuChoices(), true);
    int character2 = gameMenu.getIntChoiceFromPrompt("Who should fighter 2 be?", 1, gameMenu.getMenuChoices(), true);
    Game newGame(character1, character2);

  } while (mainMenu.getIntChoiceFromPrompt(1, mainMenu.getMenuChoices(), true) != 2);
  
  return 0;

}
