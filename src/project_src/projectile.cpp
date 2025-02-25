#include "projectile.h"

projectile::projectile() : x(0), y(0), vx(0), vy(0) {}

projectile::~projectile() {}

void projectile::simulateProjectile(float initialv, float angle, int maxx, int maxy, bool withDrag) {

   cleardevice();
    double physicalRadius = 0.1;
    double radianAngle = angle * M_PI / 180.0;
    double TIME_STEP = withDrag ? 0.01 : 0.05;
    double maxHeight = (initialv * initialv * sin(radianAngle) * sin(radianAngle)) / (2 * G);
    double range = (initialv * initialv * sin(2 * radianAngle)) / G;
    double totalTime = (2 * initialv * sin(radianAngle)) / G;

    double xScale = calculateScale(range, maxx);
    double yScale = calculateScale(maxHeight, maxy);

    std::cout << "Max Height (no drag): " << maxHeight << " m" << std::endl;
    std::cout << "Range (no drag): " << range << " m" << std::endl;
    
    x = 90;
    y = maxy - 51 - PROJECTILE_RADIUS;
    vx = initialv * cos(radianAngle);
    vy = initialv * sin(radianAngle);

    drawScene(maxx, maxy, maxHeight, range, xScale, yScale);

    double t = 0, actualMaxHeight = y, actualRange = 0;
    fillellipse(x, y, PROJECTILE_RADIUS, PROJECTILE_RADIUS);

    const int maxDataSize = 1000;
    double times[maxDataSize];
    double horizVel[maxDataSize];
    double vertVel[maxDataSize];

    int dataSize = 0;
    
    while (y < (maxy - 50 - PROJECTILE_RADIUS) ) {
       
        times[dataSize] = t; 
        horizVel[dataSize] = vx; 
        vertVel[dataSize] = vy; 
        dataSize++;
        
        x += vx * TIME_STEP * xScale;
        y -= vy * TIME_STEP * yScale;

        if (withDrag) {
            applyDragForce(physicalRadius);
        } else {
            vy -= G * TIME_STEP;
        }

        if (y < actualMaxHeight) actualMaxHeight = y;
        if (y >= (maxy - 50 - PROJECTILE_RADIUS)) actualRange = (x - 90) / xScale;

        
        drawProjectile();
        delay((totalTime / (range / (vx * TIME_STEP))) * 1000);

        t += TIME_STEP;
    }

    displayResults(t, withDrag, actualRange, actualMaxHeight, maxHeight, range, maxy, yScale);
    getch();
    
    plotGraph(times, horizVel, vertVel, dataSize, maxx, maxy);

}

double projectile::calculateScale(double value, int maxValue) {

    if (value < 150) return (maxValue - 150) / 150;
    if (value > maxValue - 150) return (maxValue - 150) / (value + 150);
    return 1.0;
}

void projectile::applyDragForce(double physicalRadius) {

    double v = sqrt(vx * vx + vy * vy);
    double dragForce = 0.5 * DRAG_COEFFICIENT * RHO * M_PI * pow(physicalRadius,2) * v * v;
    double ax = -dragForce * (vx / v);
    double ay = -G - dragForce * (vy / v);

    vx += ax * 0.005;   
    vy += ay * 0.005;

}

void projectile::drawProjectile() {

    setfillstyle(SOLID_FILL, RED);
    fillellipse(x, y, PROJECTILE_RADIUS, PROJECTILE_RADIUS);

}

void projectile::displayResults(double t, bool withDrag, double actualRange, double actualMaxHeight, double maxHeight, double range, int maxy, double yScale) {
    std::vector<double> times;  
    std::vector<double> heights;  
    char result[100];
    sprintf(result, "Time: %.2f s  Range: %.2f m  Max Height: %.2f m (with Drag: %s)",
            t, withDrag ? actualRange : range,
            withDrag ? (maxy - 50 - actualMaxHeight) / yScale : maxHeight,
            withDrag ? "Yes" : "No");

    outtextxy(100, 50, result);
    outtextxy(100, 70, "Press any key to view graph of V vs T ");
}

void projectile::drawScene(int maxx, int maxy, float maxHeight, float range, float xScale, float yScale) {

    int groundY = maxy - 50;
    
    // Draw ground and launcher stand

    line(50, 20, 50, groundY); 
    line(50, groundY, maxx - 10, groundY);
    rectangle(60, groundY - 10, 83, groundY);
    rectangle(97, groundY - 10, 120, groundY);
    // Draw X and Y axis ticks
    drawTicks(maxx, groundY, xScale, yScale);
}

void projectile::drawTicks(int maxx, int groundY, float xScale, float yScale) {
    // X-axis ticks

    int numXTicks = 8;
    int tickIntervalX = (maxx - 110) / numXTicks;
    for (int i = 0; i <= numXTicks; i++) {
        int tickX = 90 + i * tickIntervalX;
        line(tickX, groundY, tickX, groundY - 10);

        char label[10];
        sprintf(label, "%.2f ", (i * static_cast<float>(tickIntervalX) / xScale));
        outtextxy(tickX - 10, groundY + 5, label);

    }

    // Y-axis ticks
    int numYTicks = 6;
    int tickIntervalY = (groundY - 20) / numYTicks;
    for (int i = 1; i <= numYTicks; i++) {
        int tickY = groundY - i * tickIntervalY;
        line(47, tickY, 52, tickY);

        char label[10];
        sprintf(label, "%.2f ", (i * static_cast<float>(tickIntervalY) / yScale));
        outtextxy(0, tickY - 5, label);

    }
}




void projectile::plotGraph(const double* times,
                             const double* vx,
                             const double* vy,
                             int dataSize,
                             int screenWidth,
                             int screenHeight) {
    if (dataSize <= 0) {
        outtextxy(100, 20, "No graph data available");
        getch();
        return;
    }
    
    setbkcolor(WHITE);
    cleardevice();

    // Determine the maximum values manually.
    double maxTime = times[0];
    double maxVx   = vx[0];
    double maxVy   = vy[0];
    for (int i = 1; i < dataSize; ++i) {
        if (times[i] > maxTime)
            maxTime = times[i];
        if (vx[i] > maxVx)
            maxVx = vx[i];
        if (vy[i] > maxVy)
            maxVy = vy[i];
    }
    double maxVelocity = (maxVx > maxVy) ? maxVx : maxVy;
    maxVelocity *= 1.2; // Increase the maximum velocity by 20% for margin

    // Set margins to center the graph.
    int marginLeft   = screenWidth / 4;
    int marginRight  = screenWidth / 4;
    int marginTop    = screenHeight / 4;
    int marginBottom = screenHeight / 4;

    // Compute scaling factors.
    double xScale = (screenWidth - marginLeft - marginRight) / maxTime;
    double yScale = (screenHeight - marginTop - marginBottom) / maxVelocity;

    // Draw the axes.
    line(marginLeft, screenHeight - marginBottom,
         screenWidth - marginRight, screenHeight - marginBottom); // X-axis
    line(marginLeft, marginTop,
         marginLeft, screenHeight - marginBottom); // Y-axis

    // Label the axes.
    outtextxy(marginLeft + 20, screenHeight - marginBottom + 45, "Time (s)");
    outtextxy(marginLeft - 20, marginTop - 40, "Velocity (m/s)");

    // Label the tick marks on the X-axis.
    int numXTicks = 5;
    char label[16];
    for (int i = 0; i <= numXTicks; ++i) {
        double tickValue = i * maxTime / numXTicks;
        int xTick = marginLeft + static_cast<int>(tickValue * xScale);
        sprintf(label, "%.2f", tickValue);
        outtextxy(xTick - 10, screenHeight - marginBottom + 10, label);
    }

    // Label the tick marks on the Y-axis.
    int numYTicks = 10;
    for (int i = 0; i <= numYTicks; ++i) {
        int yValue = static_cast<int>(i * (maxVelocity / numYTicks));  // Use integer values for Y ticks
        int yTick = screenHeight - marginBottom - static_cast<int>(yValue * yScale);
        sprintf(label, "%d", yValue);  // Display as integer
        outtextxy(marginLeft - 40, yTick - 5, label);
    }




    

    // Plot vx (horizontal velocity) in red.
    setcolor(RED);
    for (int i = 1; i < dataSize; ++i) {
        int x1 = marginLeft + static_cast<int>(times[i - 1] * xScale);
        int y1 = screenHeight - marginBottom - static_cast<int>(vx[i - 1] * yScale);
        int x2 = marginLeft + static_cast<int>(times[i] * xScale);
        int y2 = screenHeight - marginBottom - static_cast<int>(vx[i] * yScale);
        line(x1, y1, x2, y2);
    }

    // Plot vy (vertical velocity) in blue.
    setcolor(BLUE);
    for (int i = 1; i < dataSize; ++i) {
        int x1 = marginLeft + static_cast<int>(times[i - 1] * xScale);
        int y1 = screenHeight - marginBottom - static_cast<int>(vy[i - 1] * yScale);
        int x2 = marginLeft + static_cast<int>(times[i] * xScale);
        int y2 = screenHeight - marginBottom - static_cast<int>(vy[i] * yScale);
        line(x1, y1, x2, y2);
    }

    // Add a legend.
    setcolor(RED);
    outtextxy(screenWidth - marginRight - 140, marginTop + 20, "Vx (Horizontal)");
    setcolor(BLUE);
    outtextxy(screenWidth - marginRight - 140, marginTop + 40, "Vy (Vertical)");

    
}
