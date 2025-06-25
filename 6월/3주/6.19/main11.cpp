#include <iostream>
#include <cstdlib>
using namespace std;
//### 11. GameSettings Ŭ����

//���� ���� Ŭ�������� const ����� �ʱ�ȭ�ϼ���.
//
//- const int maxPlayers(�ִ� �÷��̾� ��)
//- const string gameName(���� �̸�)
//- ��� �ʱ�ȭ ����Ʈ ��� �ʼ�
class GameSettings {
private:
	const int maxPlayers;
	const string gameName;

public:
	GameSettings(int max,string name)
		:maxPlayers(max),gameName(name){ }
	void printSettings() const {
		cout << "���� �̸�: " << gameName << endl;
		cout << "�ִ� �÷��̾�: " << maxPlayers << "��" << endl;
		cout << "������ ������ �� �����ϴ� (const)" << endl;
	}

};

int main()

{
	GameSettings settings(4, "���� Ž��");
	settings.printSettings();

	
}
