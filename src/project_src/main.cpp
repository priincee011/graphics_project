#include <graphics.h>
#include <iostream>
#include <cmath>
#include <conio.h> //kbhit
#include <stdlib.h> //atof
#include <mainMenu.h>


int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    mainMenu menu;
    
    menu.displayMenu();

    
     closegraph();
    return 0;
    
}

