// SYED ARFAN ZAHIN BIN SYED ZARUDDIN 1221103586
// AHMAD ZULHILMI BIN AHMAD ZAHIDI 1221103514
// MUHAMMAD FAIM BIN TARMIZAI 1211112332
// DHARMESH A/L KUMARAN 1231302697

#include "Battlefield.h"
#include "Robot.h"
#include "Queue.h"
using namespace std;

int main()
{
    Battlefield b(10, 10);
    RoboCop robot2("R2D3", "Astro", 5, 5, b);
    Terminator robot1("R2D3", "Astro", 6, 6, b);
    RoboCop robot3("R2D3", "Astro", 8, 9, b);
    Queue turn1(3);
    turn1.push(&robot2);
    turn1.push(&robot1);
    turn1.push(&robot3);
    Queue turn2(turn1);
    
    cout << endl;

    b.setRobot(&robot2);
    b.setRobot(&robot1);
    b.setRobot(&robot3);
    b.printBattlefield();
    // robot2.seeing(0,0);
    // b.deleteRoboCop(robot2);
    // robot2.move(0,0);
    while (!turn1.empty())
    {
        turn1.front();
        turn1.action();
        turn1.pop();
    }
    b.setRobot(&robot2);
    b.printBattlefield();
    robot2.seeing(0, 0);
    cout << endl;

    return 0;
}