#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include "moveable.h"
#include "resizeable.h"

class Vehicle : public Moveable, public Resizeable {
    protected:
    std::string name;
    public:
    Vehicle(std::string name);
    virtual void move() = 0;
};

#endif