#include "Vehicle.h"
#include <iostream>  
using namespace std;

Vehicle::Vehicle(int x, int y) 
    : Unit(x, y) {}

void Vehicle::Move(int dx, int dy) {
    x += dx;
    y += dy;
    cout << "������ �޷��� �̵��մϴ�.\n";
    PrintPosition();
}