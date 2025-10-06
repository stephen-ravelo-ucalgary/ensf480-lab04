/*
 * File Name: Vehicle.h
 * Assignment: Lab 4 Exercise C
 * Lab Section: B02
 * Completed by: Stephen Ravelo, Aaron Lauang
 * Submission Date: October 6, 2025
 */

 #ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

#include "Moveable.h"
#include "Resizeable.h"

class Vehicle : public Moveable, public Resizeable
{
public:
    Vehicle(string name);
    virtual void move() = 0;

protected:
    string name;
};

#endif