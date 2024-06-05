// SYED ARFAN ZAHIN BIN SYED ZARUDDIN 1221103586
// AHMAD ZULHILMI BIN AHMAD ZAHIDI 1221103514
// MUHAMMAD FAIM BIN TARMIZAI 1211112332
// DHARMESH A/L KUMARAN 1231302697


#include "Battlefield.h"
#include "Robot.h"
using namespace std;

int main(){
    Battlefield b(10,10);

    RoboCop robot2("R2D3", "Astro", 5, 5, b);

    // int bwidth =  b.getWidth();
    // cout << bwidth << endl;

    b.setRoboCop(robot2);   
    b.printBattlefield();
    robot2.seeing(0,0);
    b.deleteRoboCop(robot2);
    robot2.move(0,0);
    b.setRoboCop(robot2);
    b.printBattlefield();
    robot2.seeing(0, 0);
    cout << endl;

    return 0;
}