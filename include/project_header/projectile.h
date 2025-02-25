#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "projectile.h"
#include <graphics.h>
#include <cmath>
#include <cstdio>
#include <vector> 
#include <algorithm>
#include "userInput.h"


#define PROJECTILE_RADIUS 5  // Define radius of the projectile
#define G 9.8  // Gravitational acceleration
#define RHO 1.225  // Air density at sea level (kg/m^3)
#define DRAG_COEFFICIENT 0.47  // Drag coefficient for a sphere

class projectile {
public:
    projectile();
    ~projectile();

    // actual simulation function
    void simulateProjectile(float initialv, float angle, int maxx, int maxy, bool withDrag);
    //graphing function
    
    void plotGraph(const double* times, const double* vx, const double* vy, int dataSize, int screenWidth, int screenHeight);

    

private:
    double x, y, vx, vy;  // postion and velocity

    // calculateScale function to calculate the scale factor for the simulation
    double calculateScale(double value, int maxValue);

    //applies drag force if user selects with drag
    void applyDragForce(double);

    // draws projectile on the screen (x,y )
    void drawProjectile();

    // display resulst in screen
    void displayResults(double t, bool withDrag, double actualRange, double actualMaxHeight, double maxHeight, double range, int maxy, double yScale);

    // draw scene with axes 
    void drawScene(int maxx, int maxy, float maxHeight, float range, float xScale, float yScale);

    // ticks on axes 
    void drawTicks(int maxx, int groundY, float xScale, float yScale);
};

#endif // PROJECTILE_H
