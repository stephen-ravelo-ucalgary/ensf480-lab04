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
    virtual void move();

protected:
    string name;
};

#endif