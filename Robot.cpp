#include "Robot.h"


Robot::Robot(string name, string type, int x, int y, const Battlefield& battlefield)
    : rname(name), rtype(type), Xc(x), Yc(y), battlefield(battlefield) {
    // Constructor implementation
}
// Robot::Robot(string name, string type, int x, int y, const Battlefield& b) {
//     rname = name;
//     rtype = type;
//     Xc = x;
//     Yc = y;
//     this->battlefield = b;
// }

void Robot::setXRobot(int x){
    Xc = x;
}

void Robot::setYRobot(int y){
    Yc = y;
}

void Robot::look(int x, int y) {
    // Calculate the center coordinates of the area to look around
    int centerX = Xc + x ;
    int centerY = Yc + y ;
    cout << "Center coordinates: (" << centerX << "," << centerY << ")" << endl;

    std::cout << std::endl; // Print an extra line to separate each 3x3 area
    // for (int a = 0; a < battlefield.getWidth(); ++a) {
    //     for (int b = 0; b < battlefield.getHeight(); ++b) {
            // Print the 3x3 area around each element
            std::cout << "3x3 area around element at (" << Xc << ", " << Yc << "):\n";
            cout << battlefield.getCoordinateValue(Yc, Xc) << endl;
            for (int i = Yc - 1; i <= Yc + 1; ++i) {
                for (int j = Xc - 1; j <= Xc + 1; ++j) {
                    // Check if the current indices are within the bounds of the array
                    if (i >= 0 && i < battlefield.getWidth() && j >= 0 && j < battlefield.getHeight()) {
                        std::cout << battlefield.getCoordinateValue(i, j) << " ";
                    } else {
                        // If the indices are out of bounds, print a placeholder
                        std::cout << "X ";
                    }
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
        
    

    
}

void RoboCop::move(int x, int y){
    setYRobot(y);
    setXRobot(x);
}

