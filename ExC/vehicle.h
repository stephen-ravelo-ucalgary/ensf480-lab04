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
    void move();
    void forward();
    void backward();
    void enlarge(int n);
    void shrink(int n);
};

#endif