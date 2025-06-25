#include "Infantry.h"
#include "Unit.h"
#include <iostream>  
#include "Tank.h"
#include "Vehicle.h"
#include "Shape.h"
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Enemy.h"
#include "Zombie.h"
using namespace std;


int main() {
    Infantry infantry(0, 0);
    Vehicle vehicle(0, 0);

    infantry.Move(5, 3);  // ������ �ɾ �̵�
    vehicle.Move(10, 6);  // ������ �޷��� �̵�

    Shape* shapes[2]{};
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(10, 20);

    std::cout << "���� �׸���:\n";
    for (int i = 0; i < 2; ++i) {
        shapes[i]->Draw();  // ���� �Լ��� �ùٸ� �Ļ� Ŭ���� �Լ� ȣ��
    }

    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }
    Enemy* enemy = new Zombie("����1", 10);

    std::cout << "Enemy �����ͷ� ���� �õ�...\n";
    delete enemy;  // Zombie �Ҹ��� ȣ�� �� ��, ��� �޽��� ��µ�

  
    return 0;
}
