#pragma once  
#include <string>  

class Character  
{  
protected:  //��� ���� �ڽ� Ŭ������ ���� ����
	std::string name;  
	int hp;  

public:  
	Character(std::string name, int hp); 
	virtual void Attack() = 0;
	virtual ~Character() = default;  //�Ҹ���
};


