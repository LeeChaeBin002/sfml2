#include <iostream>
#include <string>
using namespace std;

void attack(int damage) 
{
	cout << "���� ����! ������:" << damage << endl;
}
void attack(int damage, int count)
{
	int total = damage * count;
	cout << "���� ����!" << damage << "��������"
		<< count << "�� ����! �� ������: " << total << endl;
}
void attack(int damage, double critical)
{
	int total = static_cast<int>(damage * critical);
	cout << "ũ��Ƽ�� ����! �⺻������: " << damage
		<< ", ũ��Ƽ�� ����: " << critical
		<< "��,�� ������: " << total << endl;
}

		

int main() 
{
	int d1, d2, c2,d3;
	double crit;

	cin >> d1;
	cin >> d2 >> c2;
	cin >> d3 >> crit; //ũ��Ƽ�� ����

	attack(d1);
	attack(d2, c2);
	attack(d3, crit);

	return 0;
}