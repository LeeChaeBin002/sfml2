#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


//### 9. Character Ŭ���� (������ �����ε�)

//RPG ĳ���� Ŭ������ �پ��� �����ڸ� ���弼��.
//
//- �⺻ ������ : �̸� = "���谡", HP = 100, MP = 50
//- �̸��� �޴� ������ : HP = 100, MP = 50
//- ��� ���� �޴� ������
class Character {
private:
	string name;
	int hp;
	int mp;

public:
	Character():name("���谡"),hp(100),mp(50){}//�⺻ ������
	Character(string _name) : name(_name), hp(100), mp(50) {}//2.
	Character(string _name, int _hp, int _mp) : name(_name), hp(_hp), mp(_mp) {}

	string Status() {
		return name + "(HP:" + to_string(hp) + ",MP:" + to_string(mp) + ")";

	}
};
int main() 
{
	Character c1;                         // �⺻ ������
	Character c2("����");                 // �̸��� �޴� ������
	Character c3("������", 80, 150);      // ��� �� �޴� ������

	cout << "ĳ����1: " << c1.Status() << endl;
	cout << "ĳ����2: " << c2.Status() << endl;
	cout << "ĳ����3: " << c3.Status() << endl;

	
}

