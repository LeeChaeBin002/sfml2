#include <iostream>  
using namespace std;  
#pragma once  
class Weapon  
{  
private:  

public:  
	Weapon() {  
		cout << "Weapon ������" << endl;  
	}  
	virtual ~Weapon() { // �Ҹ��ڴ� virtual�� ���� 
		cout << "Weapon �Ҹ���" << endl;  
	}  
};
