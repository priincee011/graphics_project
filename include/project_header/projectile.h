#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "projectile.h"
#include <graphics.h>
#include <cmath>
#include <cstdio>
#include "userInput.h"

#define G 9.81               // Gravity (m/s²)
#define TIME_STEP 0.01      // Time step for simulation
#define DRAG_COEFFICIENT 0.01 // Drag coefficient for a sphere
#define RHO 1.225            // Air density (kg/m³)
#define PROJECTILE_RADIUS 7   // Radius of projectile

class projectile : public userInput{
    private:
    float x, y;
    float vx, vy;
    int maxx, maxy;
    float initialvelocity, angle;

    public:
    projectile();
    ~projectile();
    void drawScene(int, int, float,float, float, float);
    void simulateProjectile(float, float, int, int , bool);
};
#endif