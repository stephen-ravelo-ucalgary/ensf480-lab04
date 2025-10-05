#ifndef CAR_H
#define CAR_H

#include <string>

#include "Vehicle.h"

class Car final: public Vehicle
{
public:
    void turn();

private:
    int seats;
};

#endif