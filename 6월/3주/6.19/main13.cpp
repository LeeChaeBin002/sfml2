#include <iostream>  
#include <cstdlib>  
using namespace std;  
//### 13. Enemy Ŭ����  

//�� ĳ������ ��ü ���� �����ϴ� Ŭ������ ���弼��.  
//  
//- static int totalEnemies  
//- �����ڿ��� ����, �Ҹ��ڿ��� ����  
//- static �޼���� �� ���� ��ȯ  
class Enemy {  
private:  
	string name;  

	static int totalEnemies;  

public:  
	Enemy(string _name):name(_name)   
	{  
		totalEnemies++;  
		cout << name << " �� ����! ���� �� ��: " << totalEnemies << endl;  
	}  
	~Enemy() {  
		totalEnemies--;  
		cout << name << " �� óġ! ���� �� ��: " << totalEnemies << endl;  
	}  

	static int getTotalEnemies() {  
		return Enemy:: totalEnemies=0;  
	}  

};  

int Enemy::totalEnemies = 0; // static ���� �ʱ�ȭ  

int main()  
{  
	Enemy* e1 = new Enemy();
	Enemy* e2 = new Enemy();
	Enemy* e3 = new Enemy();

	delete e2;  

	cout<<"���� �� ��:"<< Enemy::getTotalEnemies() << endl;


	return 0;  
}
