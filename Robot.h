#pragma once

#include <iostream>
#include "Battlefield.h"

using namespace std;

class Battlefield;

class Robot
{
protected:
    string rtype;
    string rname;
    int Xc;
    int Yc;
    const Battlefield &battlefield;

public:
    Robot() = default;

    Robot(string name, string type, int Xc, int Yc, const Battlefield &battlefield);

    void setXRobot(int x);
    void setYRobot(int y);

    virtual char symbol() = 0;
    virtual void action(int x, int y) = 0;

    int getY() { return Yc; }
    int getX() { return Xc; }
};

class movingRobot : public virtual Robot
{
public:
    virtual void move(int x, int y) = 0;
};

class seeingRobot : public virtual Robot
{
public:
    virtual void seeing(int x, int y) = 0;
};

class shotingRobot : public virtual Robot
{
public:
    virtual void shoting() = 0;
};

class steppingRobot : public virtual Robot
{
public:
    virtual void stepping() = 0;
};

class RoboCop : public movingRobot, seeingRobot, shotingRobot
{
public:
    RoboCop() = default;
    RoboCop(std::string name, std::string type, int Xc, int Yc, Battlefield &battlefield) : Robot(name, type, Xc, Yc, battlefield){};

    char symbol();
    void move(int x, int y) override;
    void seeing(int x, int y) override;
    void shoting() override;
    void action(int x, int y) override;
};

class Terminator : public movingRobot, seeingRobot, steppingRobot
{
public:
    Terminator() = default;
    Terminator(string name, string type, int Xc, int Yc, Battlefield &battlefield) : Robot(name, type, Xc, Yc, battlefield){};

    char symbol();
    void move(int x, int y) override;
    void seeing(int x, int y) override;
    void stepping() override;
    void action(int x, int y) override;
};