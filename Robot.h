#pragma once

#include<iostream>
#include"Battlefield.h"


using namespace std;

class Battlefield;

class Robot{
   protected:
    string rtype;
    string rname;
    int Xc;
    int Yc;
    const Battlefield& battlefield;


   public:
    Robot() = default;

    Robot(string name, string type, int Xc, int Yc, const Battlefield& battlefield);

    void setXRobot(int x);
    void setYRobot(int y);

    virtual void look(int x, int y);

    int getY(){return Yc;}
    int getX(){return Xc;}

};

class RoboCop: public Robot{
   public:
    RoboCop() = default;
    RoboCop(string name, string type, int Xc, int Yc, Battlefield& battlefield): Robot(name, type, Xc, Yc, battlefield){};

    void move(int x, int y);

};


class Terminator: public Robot{
   public:
    Terminator() = default;
    Terminator(string name, string type, int Xc, int Yc, Battlefield& battlefield): Robot(name, type, Xc, Yc, battlefield){};

    void move(int x, int y);

};