//.5 ### 5. Dice Ŭ����

//�ֻ��� Ŭ������ ����� ĸ��ȭ�� �����ϼ���.
//
//- private: ���� ��(sides), ���� ��(value)
//- public: init(int s) - ���� �� ����, roll() - �ֻ��� ������, getValue() - ���� �� ��ȯ
//	- init �޼���� ���� �� ����(�⺻�� 6)

#include <iostream>
#include <cstdlib>  // rand()
#include <ctime>    // time()
using namespace std;

class Dice {

private:
	int sides;//�� ����
	int value;//��

public:
    void init(int s = 6) {
        if (s < 2) s = 6; // �ּ� 2�� �̻�
        sides = s;
        value = 1;
        srand((unsigned int)time(0));  // ���� �õ� ���� (�� ���� �ص� ��)
    }
    void roll() {
        value = rand() % sides + 1;
    }
    int getValue() {
        return value;
    }
};



int main()
{
    Dice d;
    d.init();  // �⺻ 6�� �ֻ���
    d.roll();
    cout << "6�� �ֻ����� ���Ƚ��ϴ�:" << d.getValue() << endl;
    Dice d10;
    d10.init(10);  // 10�� �ֻ���
    d10.roll();
    cout << "10�� �ֻ����� ���Ƚ��ϴ�:" << d10.getValue() << endl;
    Dice d20;
    d20.init(20);  // 12�� �ֻ���
    d20.roll();
    cout << "20�� �ֻ����� ���Ƚ��ϴ�:" << d20.getValue() << endl;
}