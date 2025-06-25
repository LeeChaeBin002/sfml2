#pragma once  
#include <string>  

using namespace std;  
class Skill  
{  
public:  
	virtual void Use() = 0;  
	virtual int GetManaCost() = 0;  
	virtual int GetCooldown() = 0; // ��ȯ ������ int�� �����Ͽ� ������ ���� �ذ�  
	virtual string GetName() = 0;  
};
