#pragma once
#include "Enemy.h"
#include <iostream>
class Zombie :public Enemy
{
private:
    int* bullets;  // ���� �Ҵ� �ڿ� ����

public:
    Zombie(const std::string& name, int bcount)
        : Enemy(name), bullets(new int[bcount]) {
        std::cout << "���� ���� (�Ѿ�: " << bcount << "��)\n";
    }

    ~Zombie() {
        std::cout << "Zombie �Ҹ�: " << name << std::endl;
        delete[] bullets;
    }
   
};

