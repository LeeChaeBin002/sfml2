#pragma once
#include "GameObject.h"
#include <iostream>  
using namespace std;


class Enemy_ : public GameObject
{
public:
    void Update() override {
        cout << "�� AI ������Ʈ ��..." << endl;
    }
    void Render() override {
        cout << "�� ������" << endl;
    }
};

