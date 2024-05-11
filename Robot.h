#pragma once

#include<iostream>


using namespace std;

class Battlefield;

class Robot{
    string type;
    string name;
    int Xc;
    int Yc;

   public:
    Robot() = default;

    Robot(string name, string type, int Xc, int Yc);

    void setXRobot(int x);
    void setYRobot(int y);

    int getY(){return Yc;}
    int getX(){return Xc;}

};