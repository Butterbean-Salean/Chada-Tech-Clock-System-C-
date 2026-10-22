/*
 * Clock.h
 *
 * Chada Tech Clock Project
 * Author: Salean Rawlinson
 * Date: September 17, 2026
 */

#ifndef CLOCK_H
#define CLOCK_H

class Clock
{
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor
    Clock(int h = 0, int m = 0, int s = 0);

    // Functions to add time
    void addHour();
    void addMinute();
    void addSecond();

    // Display functions
    void display12Hour();
    void display24Hour();
};

#endif