#include "projectile.h"
projectile::projectile()
:x(0), y(0), vx(0), vy(0)
{}

projectile::~projectile(){}

// Function to simulate projectile motion
void projectile::simulateProjectile(float initialv, float angle, int maxx, int maxy, bool withDrag)
{
    cleardevice();
   
    double radianAngle = angle * M_PI / 180.0;

    double maxHeight = (initialv * initialv * sin(radianAngle) * sin(radianAngle)) / (2 * G);
    double range = (initialv * initialv * sin(2 * radianAngle)) / G;
    double totalTime = (2 * initialv * sin(radianAngle)) / G; // Total flight time
    std::cout<<"maxheight: "<<maxHeight<<std::endl;
    std::cout<<"ran: "<<range<<std::endl;
    double xScale = (maxx - 150) / range;  // Adjusted scaling for better fit
    double yScale = (maxy - 100) / maxHeight;

    x = 90;  
    y = maxy - 60 - PROJECTILE_RADIUS;
    vx = initialv * cos(radianAngle);
    vy = initialv * sin(radianAngle);

    drawScene(maxx, maxy,maxHeight, range, xScale, yScale);

    double t = 0;
    double projectileMaxHeight = y;
    
    fillellipse(x, y, PROJECTILE_RADIUS, PROJECTILE_RADIUS);
   while(y <( maxy - 50 - PROJECTILE_RADIUS))
    {
        // Clear previous frame
        
        

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
void projectile::drawScene(int maxx, int maxy, float maxHeight, float range, float xScale, float yScale)
{
  
      int groundY = maxy - 50;
      
      // Draw ground
      line(50, groundY, maxx -10, groundY);
      
      // Draw launcher stand
      int standLeft = 60, standTop = groundY - 10, standRight = 120, standBottom = groundY;
      rectangle(standLeft, standTop, standRight, standBottom);
      
      // Draw Y-axis
      line(50, 20, 50, groundY); 
  
      // Adjust tick interval for x-axis to have exactly 8 ticks
      int numXTicks = 8;
      int tickIntervalX = (maxx - 110) / numXTicks;
      std::cout << "X Tick Interval: " << tickIntervalX << std::endl;
      
      for (int i = 0; i <= numXTicks; i++) {
          int tickX = 90 + i * tickIntervalX;
          line(tickX, groundY, tickX, groundY - 10);
      
          // Display distance labels for x-axis (scaling only for the displayed value)
          char label[10];
          sprintf(label, "%.1f ", (i * static_cast<float>(tickIntervalX) / xScale));
          outtextxy(tickX - 10, groundY + 5, label);
      }
      
      // Adjust tick interval for y-axis to have exactly 6 ticks
      int numYTicks = 6;
      int tickIntervalY = (groundY - 20) / numYTicks;
      std::cout << "Y Tick Interval: " << tickIntervalY << std::endl;
      
      for (int i = 1; i <= numYTicks; i++) {
          int tickY = groundY - i * tickIntervalY;
      
          // Draw tick for y-axis
          line(47, tickY, 52 , tickY);
      
          // Display label for y-ticks (scaling only for the displayed value)
          char label[10];
          sprintf(label, "%.2f ", (i * static_cast<float>(tickIntervalY) / yScale));
          outtextxy(0, tickY - 5, label);
      }
      
  }
