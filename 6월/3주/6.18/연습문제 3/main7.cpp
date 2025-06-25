//### 7. Position Ŭ���� (�޼��� ü�̴�)

//��ǥ�� �����ϴ� Ŭ�������� �޼��� ü�̴��� �����ϼ���.
//
//- private: x, y(ó���� 0, 0)
//- public: init() - 0, 0���� �ʱ�ȭ, moveX(int x), moveY(int y) �޼��尡* this�� ��ȯ
//	- ���� ȣ�� : pos.moveX(10).moveY(20).moveX(5)
#include <iostream>
using namespace std;


class Position {
private:
    int x;
    int y;

public:
    void init() {
        x = 0;
        y = 0;
    }

    Position& moveX(int dx) {
        this->x += dx;
        return *this;
    }

    Position& moveY(int dy) {
        this->y += dy;
        return *this;
    }

    void show() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Position pos;
    pos.init();
    cout << "�ʱ���ġ: ";
    pos.show();

    pos.moveX(10).moveY(20).moveX(5);

    cout << "�̵� �� ��ġ: ";
    pos.show();

    return 0;
}