//## ���� 7. �κ��丮 ������ ���� ���
//
//���� ��� for���� ����Ͽ� �κ��丮�� �� ������ ����ϼ���.
//
//- 5�� �������� ������ �迭�� �����մϴ�
//- ���� ��� for������ ��ȸ�ϸ� �հ踦 ���մϴ�
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int prices[5] = { 1500, 3200, 800, 5000, 2300 };
	int total = 0;
	int maxPrice = 0;
	cout << "������ ���� ���:";

	for (int price : prices) 
	{
		cout << price << " ";
		total += price;
		if (price > maxPrice)
			maxPrice = price;
	}

	cout << endl<<"�κ��丮 �� ����:" << total << "���" << endl;
	cout << "���� ��� ������:" << maxPrice << "���" << endl;

	return 0;
}
