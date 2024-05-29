#include "Battlefield.h"

Battlefield::Battlefield(int w, int h)
{
    width = w;
    height = h;
    createBattlefield();
}

void Battlefield::setWidth(int w)
{
    width = w;
}

void Battlefield::setHeight(int h)
{
    height = h;
}

void Battlefield::createBattlefield()
{    
    battlefield = new char *[width];
    for (int i = 0; i < width; ++i)
    {
        battlefield[i] = new char[height];
        for (int j = 0; j < height; ++j)
        {
            battlefield[i][j] = '*';
        }
    }
}


void Battlefield::setRobot(Robot r)
{
    // if (r.getY() > )
    battlefield[r.getY()][r.getX()] = 'R';
}
void Battlefield::deleteRobot(Robot r)
{
    battlefield[r.getY()-1][r.getX()-1] = 'R';
}

void Battlefield::setRoboCop(RoboCop r)
{
    battlefield[r.getY()][r.getX()] = 'C';
}
void Battlefield::deleteRoboCop(RoboCop r)
{
    battlefield[r.getY()-1][r.getX()-1] = '*';
}

void Battlefield::printBattlefield()
{
    cout << "   ";
    for(int i=0; i<width ; i++)
        cout << "   " << i;
    cout << endl;
    cout << "   ";
    for(int i=0; i<width; i++)
        cout << " + -";
    cout << endl;
    

    for (int i = 0; i < height; ++i)
    {
        cout << i << "  |";
        for (int j = 0; j < width; ++j)
        {
            cout << "  " << battlefield[i][j] << " ";
        }
        cout << "|" << endl;
    }

    cout << "   ";
    for(int i =0; i<width; i++)
        cout << " - +";
    cout << endl << endl;
}

void Battlefield::clearBattlefield()
{
    for (int i = 0; i < height; ++i)
    {
        delete[] battlefield[i];
    }
    delete[] battlefield;
    cout << "Battlefield clear";
}

char Battlefield::getCoordinateValue(int x, int y) const{
    if (x >= 0 && x < width && y >= 0 && y < height) {
        return battlefield[x][y];
    } else {
        // Return a default value (e.g., '#' for out-of-bounds cells)
        return '#';
    }
}
