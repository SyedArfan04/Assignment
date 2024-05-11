#pragma once

#include<iostream>
#include "Robot.h"
using namespace std;

class Robot;

class Battlefield {
    int width;
    int height;
    char** battlefield;
   public:
    Battlefield() { createBattlefield(); }

    Battlefield(int w, int h);

    void setWidth(int w);

    void setHeight(int h);

    void createBattlefield();

    void setRobot(Robot r);

    void printBattlefield();

    void clearBattlefield();

    ~Battlefield(){ clearBattlefield(); }
};

