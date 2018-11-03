/*********************************************************************
** Description: Specification file for the Menu class.
*********************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

class Menu {

  private:
    std::string menuPrompt, lastEnteredString;
    int* intArray;
    int intArraySize;
    std::vector<std::string> options;
    std::string getEnteredString();
    void setEnteredString(const std::string &inputStr);
    bool validateInput(const std::string &inputStr);
    bool validateRange(const int &inputVal, const int &minVal, const int &maxVal);

  public:
    Menu();
    Menu(const std::string &prompt);
    ~Menu();
    void run();
    void addMenuItem(const std::string &menuItem);
    void displayMenu();
    int getIntChoiceFromPrompt(const std::string &prompt, const int &minVal, const int &maxVal, const bool &displayTheMenu);
    int getIntChoiceFromPrompt(const int &minVal, const int &maxVal, const bool &displayTheMenu);
    std::string getStringFromPrompt(const std::string &prompt, const bool &displayTheMenu);
    std::string getStringFromPrompt(const bool &displayTheMenu);
    void makeIntArray(int arraySize);
    void populateIntArray();
    int* getIntArray();
    int getIntArraySize();
    void setIntArraySize(int arraySize);
    int getMenuChoices();


};

#endif
