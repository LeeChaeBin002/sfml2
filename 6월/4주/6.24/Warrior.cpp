#include "Warrior.h"


Warrior::Warrior(std::string name, int hp, int strength)
	: Character(name, hp), strength(strength) 
{
	cout << "���� ����:" << name << "(HP:" << hp << ",��: " << strength << ")" << endl;
}
	
void Warrior::Attack(){
	cout << name << "��(��) ������ �����մϴ�! " << endl;
}