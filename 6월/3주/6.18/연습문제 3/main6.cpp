#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
//.6Player Ŭ�������� this �����͸� ����Ͽ� �Ű������� ��������� �����ϼ���.

//-setName(string name), setLevel(int level)
//- �� setter���� "this->��� = �Ű�����" ���� ���

class Player {
private:
    string name;
    int level;

public:
    void setName(string name) {
        this->name = name;  // this ������ ���
    }

    void setLevel(int level) {
        this->level = level;  // this ������ ���
    }

    void showInfo() {
        cout << "�÷��̾� �̸�: " << name << endl;
        cout << "�÷��̾� ����: " << level << endl;
    }
};

int main() 
{
    Player p;
    p.setName("���");
    p.setLevel(10);
    p.showInfo();

    return 0;


}
