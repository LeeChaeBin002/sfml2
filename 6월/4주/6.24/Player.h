#pragma once  
#include "GameObject.h"  
#include <iostream>  
using namespace std;  

class Player : public GameObject  
{  
public:  
    void Update() override {
        cout << "�÷��̾� �̵� ��..." << endl;
    }
    void Render() override {
        cout << "�÷��̾� ������" << endl;
    }
};