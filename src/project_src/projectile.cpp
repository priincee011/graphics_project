#include "projectile.h"
projectile::projectile()
:x(0), y(0), vx(0), vy(0)
{}

projectile::~projectile(){}

// Function to simulate projectile motion
void projectile::simulateProjectile(double initialv, double angle, int maxx, int maxy, bool withDrag)
{
    cleardevice();
   
    double radianAngle = angle * M_PI / 180.0;

    double maxHeight = (initialv * initialv * sin(radianAngle) * sin(radianAngle)) / (2 * G);
    double range = (initialv * initialv * sin(2 * radianAngle)) / G;
    double totalTime = (2 * initialv * sin(radianAngle)) / G; // Total flight time

    double xScale = (maxx - 150) / range;  // Adjusted scaling for better fit
    double yScale = (maxy - 100) / maxHeight;

    x = 90;  
    y = maxy - 60;
    vx = initialv * cos(radianAngle);
    vy = initialv * sin(radianAngle);

    drawScene(maxx, maxy,maxHeight, range, xScale);

    double t = 0;
    double projectileMaxHeight = y;
    
    while (y < maxy - 50) 
    {
        // Clear previous frame
        cleardevice();
        drawScene(maxx, maxy, maxHeight, range, xScale);

        // Update position
        x += vx * TIME_STEP * xScale;
        y -= vy * TIME_STEP * yScale;

        if (withDrag) 
        {
            double v = sqrt(vx * vx + vy * vy);
            double dragForce = DRAG_COEFFICIENT * RHO * v * v;

            double ax = -dragForce * (vx / v);
            double ay = -G - dragForce * (vy / v);

            vx += ax * TIME_STEP;
            vy += ay * TIME_STEP;
        } 
        else 
        {
            vy -= G * TIME_STEP;
        }

        if (y < projectileMaxHeight) 
            projectileMaxHeight = y;

        // Draw projectile
        setfillstyle(SOLID_FILL, RED);
        fillellipse(x, y, PROJECTILE_RADIUS, PROJECTILE_RADIUS);

        // Adjust delay dynamically based on flight time
        delay((totalTime / (range / (vx * TIME_STEP))) * 1000);

        t += TIME_STEP;
    }

    // Display results
    char result[100];
    sprintf(result, "Time: %.2f s  Range: %.2f m  Max Height: %.2f m", t, range, maxHeight);
    outtextxy(100, 50, result);

    
}
void projectile::drawScene(int maxx, int maxy, double maxHeight, double range, double xScale)
{
  
      int groundY = maxy - 50;
      
      // Draw ground
      line(90, groundY, maxx - 20, groundY);
      
      // Draw launcher stand
      int standLeft = 60, standTop = groundY - 10, standRight = 120, standBottom = groundY;
      rectangle(standLeft, standTop, standRight, standBottom);
      
      // Draw Y-axis
      line(90, 20, 90, groundY); 
  
      // Adjust tick interval for x-axis to have exactly 8 ticks
      int numXTicks = 8;
      int tickIntervalX = (range + 100) / numXTicks;
      
      for(int i = 1; i <= numXTicks; i++) {
          int tickX = 90 + i * tickIntervalX * xScale;
          line(tickX, groundY, tickX, groundY - 10);
  
          // Display distance labels for x-axis
          char label[10];
          sprintf(label, "%d m", i * tickIntervalX);
          outtextxy(tickX - 10, groundY + 5, label);
      }
  
      // Adjust tick interval for y-axis to have exactly 6 ticks
      int numYTicks = 6;
      int tickIntervalY = (maxHeight +50)/ numYTicks;
  
      for (int i = 0; i <= numYTicks; i++) {
          int tickY = maxy - 100 - i * (maxHeight / numYTicks);  // Ensure spacing between ticks
  
          // Draw tick for y-axis
          line(85, tickY, 90, tickY);  // X-axis is at 90, so ticks are at 85 (just to the left of the Y-axis)
  
          // Display label for y-ticks
          char label[10];
          sprintf(label, "%d m", i * tickIntervalY);
          outtextxy(50, tickY - 5, label);  // Position the label to the left of the tick
      }
  }
