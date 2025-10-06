/*
 * File Name: Car.h
 * Assignment: Lab 4 Exercise C
 * Lab Section: B02
 * Completed by: Stephen Ravelo, Aaron Lauang
 * Submission Date: October 6, 2025
 */

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