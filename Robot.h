#pragma once

#include<iostream>
#include"Battlefield.h"


using namespace std;

class Battlefield;

class Robot{
    string type;
    string name;
    int Xc;
    int Yc;
    Battlefield* battlefield;

   public:
    Robot() = default;

    Robot(string name, string type, int Xc, int Yc);

    void setXRobot(int x);
    void setYRobot(int y);

    void look(int x, int y);

    int getY(){return Yc;}
    int getX(){return Xc;}

};

class RoboCop: public Robot{
   public:
    RoboCop() = default;
    RoboCop(string name, string type, int Xc, int Yc): Robot(name, type, Xc, Yc){};

    void move(int x, int y);
};