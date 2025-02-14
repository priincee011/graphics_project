#ifndef USERINPUT_H
#define USERINPUT_H
#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <cstdlib>
class userInput{
    
   
    public:
   userInput();
    
    ~userInput();
    float angle;
    float speed;
    
    void getUserInput();
    
   
    double getValue(char *);
    bool checkButtonClick(int, int , int ,int , int , int );
};
#endif