#pragma once
#include <string>
#include <iostream>
class Enemy
{
protected:
    std::string name;

public:
    Enemy(const std::string& name) : name(name) {
        std::cout << "���� ���� (�Ѿ�: 10��)\n" << name << std::endl;
    }
    // �Ϲ� �Ҹ��� (virtual �ٿ����� ��/�� ��)
    ~Enemy() {
        std::cout << "Enemy �Ҹ�: " << name << std::endl;

        if (typeid(*this) != typeid(Enemy)) {
            std::cout << "���: ���� �Ҹ��ڰ� ���� Zombie �Ҹ��ڰ� ȣ����� ����!\n";
        }
    }

};

