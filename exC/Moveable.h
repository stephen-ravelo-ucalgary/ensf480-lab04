/*
 * File Name: Moveable.h
 * Assignment: Lab 4 Exercise C
 * Lab Section: B02
 * Completed by: Stephen Ravelo, Aaron Lauang
 * Submission Date: October 6, 2025
 */

#ifndef MOVEABLE_H
#define MOVEABLE_H

class Moveable
{
public:
    virtual void forward() = 0;
    virtual void backward() = 0;
};

#endif