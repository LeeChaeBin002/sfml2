
#include <iostream>
#include <string>
using namespace std;

void swapStats(int& atk, int& def, int& atk2, int& def2)
{
	int swap = atk;
	atk = atk2;
	atk2 = swap;
	int swap2 = def;
	def = def2;
	def2 = swap2;
}

int main() {
//4.## ���� 4. �پ��� �ʱ�ȭ ��� ����

	/*���� �������� ������ �پ��� C++ �ʱ�ȭ ������� �����ϰ� ����ϼ���.

	- ���� �ʱ�ȭ, ���� �ʱ�ȭ, ������ �ʱ�ȭ�� ���� ����մϴ�
	 ������ �̸�(string), ����(int), ���ݷ�(int)�� �����մϴ�*/
	/*string item = "ö��";
	string Item("������");
	string ITEM{ "������" };

	int price = 1000;//����
	int Price(3000);//����
	int PRICE{10000};//������

	int attak=25;
	int Attak(25);
	int ATTAK{ 100 };

	cout << "������ 1(���� �ʱ�ȭ)" << endl;
	cout << "�̸�: " << item << endl;
	cout << "����: " << price << endl;
	cout << "���ݷ�: " << attak << endl << endl;

	cout << "������ 2(���� �ʱ�ȭ)" << endl;
	cout << "�̸�: " << Item << endl;
	cout << "����: " << Price << endl;
	cout << "���ݷ�: " << attak << endl << endl;

	cout << "������ 2(������ �ʱ�ȭ)" << endl;
	cout << "�̸�: " << ITEM << endl;
	cout << "����: " << PRICE << endl;
	cout << "���ݷ�: " << ATTAK << endl << endl;

//.5## ���� 5. ���� ��ȯ �ý���

	/*�� ĳ������ ���ݷ°� ������ ��ȯ�ϴ� �Լ��� ���۷����� ����Ͽ� �����ϼ���.

	- swapStats �Լ��� ����� �� ĳ������ ���ݷ°� ������ ��ȯ�մϴ�
	- ���۷��� �Ű������� ����մϴ�*/

	int attack1,defense1;
	int attack2, defense2;
	//�Է°�
	
	cin >> attack1;
	cin >> defense1;
	cin >> attack2;
	cin >> defense2;

	// ���: ��ȯ ��
	cout << "\n=== ��ȯ �� ===" << endl;
	cout << "ĳ����1 - ���ݷ�: " << attack1 << ", ����: " << defense1 << endl;
	cout << "ĳ����2 - ���ݷ�: " << attack2 << ", ����: " << defense2 << endl;

	//���ȱ�ȯ
	swapStats(attack1, defense1, attack2, defense2);
	cout << "=== ��ȯ �� ===" << endl;
	cout << "ĳ����1" << " - " << "���ݷ�: "<< attack1<< ", ����: "<< defense1<< endl;
	cout << "ĳ����2" << " - " << "���ݷ�: " << attack2 << ", ����: " << defense2 << endl;


}
