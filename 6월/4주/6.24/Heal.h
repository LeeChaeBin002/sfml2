#pragma once
#include "Skill.h"
#include <iostream>
using namespace std;
class Heal : public Skill
{
private:
public:
    void Use() override {
        cout << "�� ���! ü���� 40 ȸ���߽��ϴ�." << endl;
    }
    int GetManaCost() override { return 20; }
    int GetCooldown() override { return 10; }
    string GetName() override { return "��"; }


};
