/*
 * main.cpp
 *
 * Chada Tech Clock Project
 * Author: Salean Rawlinson
 * Date: September 17, 2026
 *
 * This program will displays a 12-hour and 24-hour clock.
 * You can add an hour, minute, or second to both clocks.
 */

#include <iostream>
#include "Clock.h"

using namespace std;

// Displays both clocks
void displayClocks(Clock& clock)
{
    cout << "\n**************************    **************************\n";
    cout << "*      12-HOUR CLOCK     *    *      24-HOUR CLOCK     *\n";
    cout << "*        ";

    clock.display12Hour();

    cout << "       *    *        ";

    clock.display24Hour();

    cout << "          *\n";
    cout << "**************************    **************************\n";
}

// Displays the menu
void displayMenu()
{
    cout << "\n**************************\n";
    cout << "*        MENU            *\n";
    cout << "**************************\n";
    cout << "* 1 - Add One Hour       *\n";
    cout << "* 2 - Add One Minute     *\n";
    cout << "* 3 - Add One Second     *\n";
    cout << "* 4 - Exit Program       *\n";
    cout << "**************************\n";
}

// Gets a valid menu choice from the user
int getMenuChoice()
{
    int choice;

    while (true)
    {
        cout << "Enter your choice: ";

        if (cin >> choice && choice >= 1 && choice <= 4)
        {
            return choice;
        }

        cout << "Invalid input. Please enter a number from 1 to 4.\n";

        cin.clear();
        cin.ignore(1000, '\n');
    }
}

int main()
{
    // Get the starting time from the user
    int hour;
    int minute;
    int second;

    cout << "Enter the initial hour (0-23): ";
    cin >> hour;

    cout << "Enter the initial minute (0-59): ";
    cin >> minute;

    cout << "Enter the initial second (0-59): ";
    cin >> second;

    // Create the clock using the starting time
    Clock clock(hour, minute, second);

    int choice = 0;

    // Continue until the user chooses Exit
    while (choice != 4)
    {
        displayClocks(clock);
        displayMenu();

        choice = getMenuChoice();

        if (choice == 1)
        {
            clock.addHour();
        }
        else if (choice == 2)
        {
            clock.addMinute();
        }
        else if (choice == 3)
        {
            clock.addSecond();
        }
    }

    cout << "\nThank you for using the Chada Tech Clock program.\n";

    return 0;
}