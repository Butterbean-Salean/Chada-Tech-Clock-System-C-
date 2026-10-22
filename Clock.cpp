/*
 * Clock.cpp
 *
 * Chada Tech Clock Project
 * Author: Salean Rawlinson
 * Date: September 17, 2026
 */

#include "Clock.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor initializes the clock
Clock::Clock(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

// Adds one hour
void Clock::addHour()
{
    hour++;

    if (hour >= 24)
    {
        hour = 0;
    }
}

// Adds one minute
void Clock::addMinute()
{
    minute++;

    if (minute >= 60)
    {
        minute = 0;
        addHour();
    }
}

// Adds one second
void Clock::addSecond()
{
    second++;

    if (second >= 60)
    {
        second = 0;
        addMinute();
    }
}

// Displays the clock in 12-hour format
void Clock::display12Hour()
{
    int displayHour = hour;
    string period = "AM";

    if (displayHour >= 12)
    {
        period = "PM";
    }

    if (displayHour == 0)
    {
        displayHour = 12;
    }
    else if (displayHour > 12)
    {
        displayHour -= 12;
    }

    cout << setfill('0')
        << setw(2) << displayHour << ":"
        << setw(2) << minute << ":"
        << setw(2) << second
        << " " << period;
}

// Displays the clock in 24-hour format
void Clock::display24Hour()
{
    cout << setfill('0')
        << setw(2) << hour << ":"
        << setw(2) << minute << ":"
        << setw(2) << second;
}