
#include <iostream>
#include <string>
using namespace std;

int main() {

	//1.## ���� 1. ���� ĳ���� ���� ���

	//���� ĳ������ ������ �Է¹޾� ���� ���� ����ϴ� ���α׷��� �ۼ��ϼ���.
	//- �÷��̾� �̸�(string), ����(int), HP(int), MP(int)�� �Է¹޽��ϴ�
	//- cout�� ����Ͽ� ĳ���� ������ ����ϰ� ����մϴ�.
	//string name;
	//int level;
	//int hp;
	//int mp;

	////�Է� �ޱ�
	//

	//getline(cin, name);//���� ��ü�� �Է¹޴� �Լ� 
	//cin >> level;
	//cin >> hp;
	//cin >> mp;

	//// ���

	//cout << "=== ĳ���� ���� ===" << endl;
	//cout << "�̸� :" << name << endl;
	//cout << "���� :" << level << endl;
	//cout << "HP :" << hp << endl;
	//cout << "MP :" << mp << endl;
	//cout << "===================" << endl;


	//2.## ���� 2. ���̵� ��ȿ�� �˻�

	/*���� ���̵� �Է¹޾� ��ȿ���� �˻��ϴ� ���α׷��� �ۼ��ϼ���.

		- ���̵�� 4�� �̻� 12�� ���Ͽ��� �մϴ�
		- ù ���ڴ� �����ڿ��� �մϴ�(���ĺ� �˻�)
		- string�� length()�� �ε��� ������ Ȱ���ϼ���*/

	/**/string  id;
	cout << "���̵�: ";
	cin >> id;

	int length = id.length();
	char firstChar = id[0];

	//���
	cout << "����: " << length << "��" << endl;
	cout << "ù ����: " << firstChar << endl;

	bool isValid = true;

	if (length < 4 || length>12) 
	{
		cout << "���̵�� 4�� �̻� 12�� ���Ͽ��� �մϴ�" << endl;
		isValid = false;
	}
    if (!((firstChar >= 'A' && firstChar <= 'Z') || (firstChar >= 'a' && firstChar <= 'z')))  
    {  
    cout << "����� �� ���� ���̵� �Դϴ�!(ù ���ڴ� �����ڿ��� �մϴ�)" << endl;  
    isValid = false;  
    }
	if (isValid)
	{
	cout << "��� ������ ���̵��Դϴ�! " << endl;
	}
	//3.
	//## ���� 3. �г��� ��ȯ��

	//	�Է¹��� �г����� ��Ÿ�ϸ����ϰ� ��ȯ�ϴ� ���α׷��� �ۼ��ϼ���.

	//	- �г��� �յڿ� "��"�� ���Դϴ�
	//	- �г����� �빮�ڷ� ��ȯ�� ������ ����մϴ�
	//	- string�� + �����ڿ� ���� ��ȯ�� Ȱ���ϼ���

	string nickname;
	cout << "�г����� �Է��ϼ���:";
	cin >> nickname;
	int length2 = nickname.length();
	string stylish = "��" + nickname + "��";
	
	//�빮�� ����
	string upperNickname = nickname;
	for (int i = 0; i < upperNickname.length(); ++i)
	{
		if (upperNickname[i] >= 'a' && upperNickname[i] <= 'z')
		{
			upperNickname[i] = upperNickname[i] - 'a' + 'A';
		}
	}
	cout << "���� �г���: " << nickname << endl;
	cout << "�ٹ� �г���: " << stylish << endl;
	cout << "�빮�� �г���: " << upperNickname << endl;
	cout << "����: " << length2 <<"��"<< endl;


	return 0;



}