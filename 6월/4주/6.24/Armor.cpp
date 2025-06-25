#include "Armor.h"  
#include <iostream>  

using namespace std;  

Armor::Armor(const std::string& name, int price, int durability, int defense)  
	: Equipment(name, price, durability), defense(defense) {}  

void Armor::PrintInfo() const {
    cout << name << " ����:\n";
    Equipment::PrintInfo();
    cout << "����: " << defense << "\n";
}
