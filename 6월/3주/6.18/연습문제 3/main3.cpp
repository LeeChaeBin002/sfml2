#include <iostream>
#include <string>
using namespace std;
//3.### Monster Ŭ����

//Monster Ŭ������ ����� private ���(hp, attack)�� public �޼��带 �����ϼ���.
//
//- init() �޼���� hp = 100, attack = 10���� �ʱ�ȭ
//- showInfo() �޼���� ���� ���
//- takeDamage(int damage) �޼���� hp ����


	class Monster
	{
	private:
		int hp;
		int attack;

	public:
		void init() {
			hp = 100;
			attack = 10;
		}

		void showInfo()
		{
			cout << "���� ����" << "HP: " << hp << ", ���ݷ�: " << attack << endl;

		}

		void takeDamage(int damage) {
			hp -= damage;
			if (hp < 0) hp = 0;
			cout << damage << "�� ���ظ� �Ծ����ϴ�! " << endl;
		}
	};
	int main()
	{
		Monster m;
		m.init();
		m.showInfo();

		m.takeDamage(20);
		m.showInfo();


}
