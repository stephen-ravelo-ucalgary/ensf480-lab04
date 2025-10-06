/*
 * File Name: Resizeable.h.h
 * Assignment: Lab 4 Exercise C
 * Lab Section: B02
 * Completed by: Stephen Ravelo, Aaron Lauang
 * Submission Date: October 6, 2025
 */

#ifndef RESIZEABLE_H
#define RESIZEABLE_H

class Resizeable
{
public:
    virtual void enlarge(int n) = 0;
    virtual void shrink(int n) = 0;
};

#endif