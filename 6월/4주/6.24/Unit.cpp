#include "Unit.h"
#include <iostream>  
using namespace std;


Unit::Unit(int x, int y) : x(x), y(y) {}

void Unit::Move(int dx, int dy) {
    x += dx;
    y += dy;
    cout << "������ �̵��߽��ϴ�.\n";
}
void Unit::PrintPosition() const {
    cout << "���� ��ġ: (" << x << ", " << y << ")\n";
}