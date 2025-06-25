#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
//### 10. Item Ŭ����

//������ Ŭ������ �⺻���� �ִ� �����ڸ� ���弼��.
//
//- Item(string name = "������", int price = 100)
//- �پ��� ������� ��ü ����
class Item{
private:
	string name;
	int price;
public:
	//�⺻�� ������
	Item(string _name="������",int _price=100) 
	:name(_name),price(_price) {}//��� �̴ϼȶ�����

	string status() {
		return name + "(����: " + to_string(price) + "���)";
	}
};



int main()
{
	Item item1;                      // �⺻�� ���
	Item item2("����");              // �̸��� ����, ������ �⺻��
	Item item3("��", 500);           // �̸��� ���� ��� ����

	cout << "������1: " << item1.status() << endl;
	cout << "������2: " << item2.status() << endl;
	cout << "������3: " << item3.status() << endl;

}
