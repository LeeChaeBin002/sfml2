#pragma once  
#include "Skill.h"  
#include <iostream>  

using namespace std;  
class FireBall : public Skill  
{  
private:  
public:  
	void Use() override   
	{  
		cout << "���̾ ���! 50 �������� �������ϴ�." << endl;  
	}  
	int GetManaCost() override { return 30; }  
	int GetCooldown() override { return 5; }  
	string GetName() override { return "���̾"; }  

};
