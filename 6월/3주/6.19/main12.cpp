#include <iostream>
#include <cstdlib>
using namespace std;
//### 12. PlayerRef Ŭ����

//���� ����� ���� �÷��̾� Ŭ������ ���弼��.
//
//- int& scoreRef(���� ����)
//- string name
//- ��� �ʱ�ȭ ����Ʈ�� ���� �ʱ�ȭ
class Player {
private:
	string name;
	int& scoreRef;//���� ����

public:
	Player(string _name,int& _score)
		:name(_name),scoreRef(_score){ }
	void printStatus()const {
		cout << "�÷��̾�:" << name << ", ����:" << scoreRef << endl;
	}
	void addscore(int amount) {
		scoreRef += amount;
	}
};
int main()

{
	int score = 0;
	Player p("ȫ�浿", score);

	p.printStatus();               // ����: 0
	cout << "���� 100�� �߰�" << endl;
	p.addscore(100);              // ���� += 100
	p.printStatus();              // ����: 100

	cout << "���� ������ �����: " << score << endl; // �� 100
}
