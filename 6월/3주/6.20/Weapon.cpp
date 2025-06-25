#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon(string name, int damage)
    : name(name), damage(damage) {
}

string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

void Weapon::upgrade() {
    damage += 5;
    cout << "���� ��ȭ!" << endl;
}

void Weapon::print() const {
    cout << "����: " << name << " (���ݷ�: " << damage << ")" << endl;
}

