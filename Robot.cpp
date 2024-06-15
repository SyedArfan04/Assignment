#include "Robot.h"

Robot::Robot(string name, string type, int x, int y, const Battlefield &battlefield)
    : rname(name), rtype(type), Xc(y), Yc(x), battlefield(battlefield){}

void Robot::setXRobot(int x)
{
    Xc = x;
}

void Robot::setYRobot(int y)
{
    Yc = y;
}

char RoboCop::symbol(){
    return 'C';
}

void RoboCop::move(int x, int y)
{
    setYRobot(x);
    setXRobot(y);
}
void RoboCop::seeing(int x, int y)
{
    cout << "this robocop is seeing" << endl;
    // //Calculate the center coordinates of the area to look around
    // int centerX = Xc + x;
    // int centerY = Yc + y;
    // cout << "Center coordinates: (" << centerX << "," << centerY << ")" << endl;
    // cout << endl; // Print an extra line to separate each 3x3 area
    //                         // for (int a = 0; a < battlefield.getWidth(); ++a) {
    //                         //     for (int b = 0; b < battlefield.getHeight(); ++b) {
    // // Print the 3x3 area around each element
    // cout << "3x3 area around element at (" << Xc << ", " << Yc << "):\n";
    // cout << battlefield.getCoordinateValue(Yc, Xc) << endl;
    // for (int i = Yc - 1; i <= Yc + 1; ++i)
    // {
    //     for (int j = Xc - 1; j <= Xc + 1; ++j)
    //     {
    //         // Check if the current indices are within the bounds of the array
    //         if (i >= 0 && i < battlefield.getWidth() && j >= 0 && j < battlefield.getHeight())
    //         {
    //             cout << battlefield.getCoordinateValue(i, j) << " ";
    //         }
    //         else
    //         {
    //             // If the indices are out of bounds, print a placeholder
    //             cout << "X ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
}

void RoboCop::shoting()
{
    cout << "this robocop is shooting" << endl;
}

void RoboCop::action(int x, int y)
{
    seeing(x,y);
    move(x, y);
    shoting();
    shoting();
    shoting();
}

char Terminator::symbol()
{
    return 'T';
}
void Terminator::move(int x, int y)
{
    setYRobot(x);
    setXRobot(y);
}

void Terminator::seeing(int x, int y){
    cout << "this terminator is seeing" << endl;
}

void Terminator::stepping(){
    cout << "this terminator is stepping" << endl;
}

void Terminator::action(int x, int y){
    seeing(x, y);
    stepping();
    move(x,y);

}
