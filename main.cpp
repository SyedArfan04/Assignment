#include "Battlefield.h"
#include "Robot.h"
using namespace std;

int main(){
    Battlefield b(10,10);
    b.createBattlefield();
    Robot robot("R2D2", "Astro", 2, 5);
    RoboCop robot2("R2D3", "Astro", 3, 1);
    int randX = rand() % 10 + 1;
    int randY = rand() % 10 + 1;
    Robot robot3("R2D4", "Astro", randX, randY );
    Robot robot4("R2D5", "Astro", 2, 1); // same random coordinate
    b.setRobot(robot);
    b.setRoboCop(robot2);
    
    b.setRobot(robot3);
    b.setRobot(robot4);
    b.printBattlefield();
    // robot4.look(0,0);
    b.deleteRoboCop(robot2);
    robot2.move(2,5);
    b.setRoboCop(robot2);
    b.printBattlefield();
    // b.clearBattlefield();
    // Battlefield c(10,10);
    // c.createBattlefieldTest();
    // cout << endl;
    // c.printBattlefieldTest();
    // cout << "this is ok" <<endl;

    return 0;
}