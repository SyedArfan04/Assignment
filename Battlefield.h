#pragma once

#include<iostream>
#include"Robot.h"
using namespace std;

class Robot;
class RoboCop;

class Battlefield {
    int width;
    int height;
    char** battlefield;
   public:
    Battlefield() { createBattlefield(); }

    Battlefield(int w, int h);

    void setWidth(int w);
    int getWidth(){return width;}

    void setHeight(int h);
    int getHeight(){return height;}

    void createBattlefield();

    void setRobot(Robot r);
    void deleteRobot(Robot r);

    void setRoboCop(RoboCop r);
    void deleteRoboCop(RoboCop r);

    void printBattlefield();

    void clearBattlefield();

    char getCoordinateValue(int x, int y);

    ~Battlefield(){ clearBattlefield(); }
};

