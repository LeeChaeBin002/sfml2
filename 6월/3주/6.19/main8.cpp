#include <iostream>
#include <cstdlib>
using namespace std;


//.### 8. Stage Ŭ����

//���� �������� Ŭ������ �����ڿ� �Ҹ��ڸ� �����ϼ���.
//
//- �����ڿ��� "�������� X ����!" ���
//- �Ҹ��ڿ��� "�������� X Ŭ����!" ���
//- �������� ��ȣ�� ������ �Ű������� ����

class Gamestage {
private:
	int stageNumber;

public:
	Gamestage(int number) :stageNumber(number)
	{
		cout << "�������� " << stageNumber << " ����!" << endl;

	}
	~Gamestage() {
		cout << "�������� " << stageNumber << " Ŭ����!" << endl;
	}

	void play() {
		cout << "�������� " << stageNumber << " ���� ��..." << endl;

	}

};
int main()

{
	cout << "==���� ����==" << endl;
	{
		Gamestage s1(1);
		s1.play();
	}
	{
		Gamestage s2(2);
		s2.play();
	}
	cout << "==���� ����==" << endl;

	system("pause");
	return 0;
}