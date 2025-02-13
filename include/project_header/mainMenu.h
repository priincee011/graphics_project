// mainMenu.h
#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>
#include <graphics.h>

#include "projectile.h"
#include "userInput.h"
class mainMenu {

   
public:
int maxx;
int maxy;
    mainMenu();
    ~mainMenu();

    void displayMenu();
    

protected:

    void startSimulation();
    void showHelp();
    void exitProgram();
};

#endif // MAINMENU_H
