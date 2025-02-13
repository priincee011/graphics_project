#include <graphics.h>
#include <iostream>
#include <cmath>
#include <conio.h> //kbhit
#include <stdlib.h> //atof
#include <mainMenu.h>
// do scaling and 


#define G 9.81  // Gravity (m/s²)
#define TIME_STEP 0.05  // Time step for motion updates (seconds)
#define DRAG_COEFFICIENT 0.1  // Drag coefficient
#define RHO 1.225  // Air density (kg/m³)
#define PROJECTILE_RADIUS 5  // Radius of projectile in pixels
#define SCALE 5  // Scaling factor for display

using namespace std;

struct Projectile {
    double x, y;
    double vx, vy;
    bool withDrag;
};

// Function to draw input box for user parameters

void simulateProjectile(Projectile p) {
    double t = 0, maxHeight = p.y, range = 0;

    while (p.y < getmaxy() - 50) {
        p.x += p.vx * TIME_STEP * SCALE;
        p.y -= p.vy * TIME_STEP * SCALE;  

        if (p.withDrag) {
            double v = sqrt(p.vx * p.vx + p.vy * p.vy);
            double dragForce = DRAG_COEFFICIENT * RHO * v * v;
            double ax = -dragForce * (p.vx / v);
            double ay = -G - dragForce * (p.vy / v);

            p.vx += ax * TIME_STEP;
            p.vy += ay * TIME_STEP;
        } else {
            p.vy -= G * TIME_STEP;
        }

        if (p.y < maxHeight) maxHeight = p.y;

       // drawScene();
        setfillstyle(SOLID_FILL, RED);
        fillellipse(p.x, p.y, PROJECTILE_RADIUS, PROJECTILE_RADIUS);
        delay(50);

        t += TIME_STEP;
    }

    range = p.x;

    char result[100];
    sprintf(result, "Time: %.2f s  Range: %.2f m  Max Height: %.2f m", t, range / SCALE, (getmaxy() - maxHeight) / SCALE);
    outtextxy(50, 50, result);
}

bool checkButtonClick(int x, int y, int x1, int y1, int x2, int y2) {
    return (x > x1 && x < x2 && y > y1 && y < y2);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    mainMenu menu;
    
    menu.displayMenu();

    
    
    
}

