#pragma once
#include "GameObject.h"
#include <iostream>  
using namespace std;

class Item_ : public GameObject
{
public:
    void Update() override {
        cout << "������ ȸ�� ��..." << endl;
    }
    void Render() override {
        cout << "������ ������" << endl;
    }
};

