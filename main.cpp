#include "Battlefield.h"
#include "Robot.h"
using namespace std;

int main(){
    Battlefield b(10,10);

    Robot robot("R2D2", "Astro", 2, 3, b);
    Robot robot3("R2D2", "Astro", 1, 3, b);
    RoboCop robot2("R2D3", "Astro", 9, 10, b);

    b.setRobot(robot);
    b.setRobot(robot3);
    int bwidth =  b.getWidth();
    cout << bwidth << endl;
    b.setRoboCop(robot2);   
    b.printBattlefield();
    robot2.look(0,0);
    robot.look(0,0);
    b.deleteRoboCop(robot2);
    robot2.move(2,4);
    b.setRoboCop(robot2);
    robot2.look(0,0);
    robot.look(0, 0);
    b.printBattlefield();
    // b.clearBattlefield();
    // Battlefield c(10,10);
    // c.createBattlefieldTest();
    cout << endl;
    // c.printBattlefieldTest();

    return 0;
}