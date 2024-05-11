#include "Battlefield.h"
using namespace std;

int main(){
    Battlefield b(5,5);
    b.createBattlefield();
    Robot robot("R2D2", "Astro", 2, 5);
    Robot robot2("R2D3", "Astro", 3, 1);
    int randX = rand() % 5 + 1;
    int randY = rand() % 5 + 1;
    Robot robot3("R2D4", "Astro", randX, randY );
    Robot robot4("R2D5", "Astro", randX, randY ); // same random coordinate
    b.setRobot(robot);
    b.setRobot(robot2);
    b.setRobot(robot3);
    b.setRobot(robot4);
    b.printBattlefield();
    // b.clearBattlefield

    return 0;
}