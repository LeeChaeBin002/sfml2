#pragma once
#include "Skill.h"
#include <iostream>
using namespace std;
class Shield : public Skill
{
private:

public:
    void Use() override {
        cout << "�ǵ� ���! 10�ʰ� ������ ����մϴ�." << endl;
    }
    int GetManaCost() override { return 40; }
    int GetCooldown() override { return 15; }
    string GetName() override { return "�ǵ�"; }


};
