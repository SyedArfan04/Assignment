#pragma once

#include<iostream>
#include"Robot.h"
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
    int getWidth()const {return width;}

    void setHeight(int h);
    int getHeight()const {return height;}

    void createBattlefield();

    void setRobot(Robot *r);
    void deleteRobot(Robot *r);

    void printBattlefield();

    void clearBattlefield();

    char getCoordinateValue(int x, int y) const;

    ~Battlefield(){ clearBattlefield(); }
};

