#include "Robot.h"

Robot::Robot(string name, string type, int x, int y){
    this->name = name;
    this->type = type;
    this->Xc = x;
    this->Yc = y;
}

void Robot::setXRobot(int x){
    Xc = x;
}
void Robot::setYRobot(int y){
    Yc = y;
}

