//4.### 4. Inventory Ŭ����

//���� �κ��丮�� �����ϴ� Ŭ������ ���弼��.
//
//- private: itemCount(ó���� 0, �ִ� 10��)
//- public: init(), addItem(), removeItem(), getItemCount()
#include <iostream>
#include <string>
using namespace std;

class Inventory
{
	private:
		int itemCount;
	public:
		void init() {
			itemCount = 0;
			cout << "�κ��丮 �ʱ�ȭ �Ϸ�" << endl;
		}
		bool addItem() {
			if (itemCount < 10) {
				itemCount++;
				return true;
			}
			
			else
			{
				cout << "�κ��丮�� ���� á���ϴ�! " << endl;

			}
			return false;
		}
		void removeItem() {
			if (itemCount > 0) {
				itemCount--;
			
			}
			else {
				cout << "�κ��丮�� �������� �����ϴ�!" << endl;
			}
		}
		int getItemCount() {
			return itemCount;
		}
};
		

int main()
{
	Inventory bag;
	bag.init();


	for (int i = 0; i < 3; i++)
	{
	bag.addItem();   // 3
	}
	cout << "������ 3�� �߰�" << endl;
	cout << "���� ������ ����: " << bag.getItemCount() << endl;

	// ������ 1�� ����
	bag.removeItem();
	cout << "������ 1�� ����" << endl;
	cout << "���� ������ ����: " << bag.getItemCount() << endl;//2

	cout << "������ 10�� �߰� �õ�" << endl;
	// ������ 10�� �߰� �õ�
	for (int i = 0; i < 10; ++i) {
		bag.addItem();
	}

	cout << "���� ������ ����: " << bag.getItemCount() << endl;

	return 0;
}
