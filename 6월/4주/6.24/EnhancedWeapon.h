#pragma once
#include "Weapon.h"
class EnhancedWeapon : public Weapon
{
public:
	EnhancedWeapon() {
		std::cout << "EnhancedWeapon ������" << std::endl;
	}
	~EnhancedWeapon() { // �Ҹ��ڴ� virtual�� ���� 
		std::cout << "EnhancedWeapon �Ҹ���" << std::endl;
	}
};

