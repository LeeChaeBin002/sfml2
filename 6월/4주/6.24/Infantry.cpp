#include "Infantry.h"
#include <string>  
#include <iostream>  
using namespace std;

Infantry::Infantry(int x, int y) : Unit(x, y) {}

void Infantry::Move(int dx, int dy) {
    x += dx;
    y += dy;
    cout << "������ �ɾ �̵��մϴ�.\n";
    PrintPosition();
}
