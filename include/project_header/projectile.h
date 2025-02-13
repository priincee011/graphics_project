#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "projectile.h"
#include <graphics.h>
#include <cmath>
#include <cstdio>
#include "userInput.h"

#define G 9.81               // Gravity (m/s²)
#define TIME_STEP 0.005       // Time step for simulation
#define DRAG_COEFFICIENT 0.47 // Drag coefficient for a sphere
#define RHO 1.225            // Air density (kg/m³)
#define PROJECTILE_RADIUS 5   // Radius of projectile

class projectile : public userInput{
    private:
    double x, y;
    double vx, vy;
    int maxx, maxy;
    double initialvelocity, angle;

    public:
    projectile();
    ~projectile();
    void drawScene(int, int, double,double, double);
    void simulateProjectile(double, double, int, int , bool);
};
#endif