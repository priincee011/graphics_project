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

    while (y < (maxy - 50 - PROJECTILE_RADIUS)) {

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

    char result[100];
    sprintf(result, "Time: %.2f s  Range: %.2f m  Max Height: %.2f m (with Drag: %s)",
            t, withDrag ? actualRange : range,
            withDrag ? (maxy - 50 - actualMaxHeight) / yScale : maxHeight,
            withDrag ? "Yes" : "No");

    outtextxy(100, 50, result);

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
