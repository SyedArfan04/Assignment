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

// void Robot::look(int x, int y){
//     // Calculate the center coordinates of the area to look around
//     int centerX = Xc + x;
//     int centerY = Yc + y;

//     // Loop through the 3x3 area around the center coordinates
//     cout << battlefield->getWidth() << "," << battlefield->getHeight() << endl;
//     for (int i = centerY - 1; i <= centerY + 1; ++i) {
//         for (int j = centerX - 1; j <= centerX + 1; ++j) {
//             // Check if the current coordinates are within the bounds of the battlefield
//             if (j >= 0 && j < battlefield->getWidth() && i >= 0 && i < battlefield->getHeight()) {
//                 // Retrieve the value of the cell at the current coordinates
//                 char cellValue = battlefield->getCoordinateValue(j, i);
//                 // Print information based on the cell value
//                 if (cellValue == '*') {
//                     std::cout << "Empty ";
//                 } else if (cellValue == 'R') {
//                     std::cout << "Robot ";
//                 } else {
//                     std::cout << "Unknown ";
//                 }
//             } else {
//                 // The current coordinates are outside the bounds of the battlefield
//                 std::cout << "Outside ";
//             }
//         }
//         std::cout << std::endl;
//     }
// }

void RoboCop::move(int x, int y){
    setYRobot(y);
    setXRobot(x);
}

