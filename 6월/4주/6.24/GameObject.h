#pragma once
#include <iostream>  
using namespace std;
class GameObject
{
private:

public:
    virtual void Update() = 0;  // ���� ���� �Լ�
    virtual void Render() = 0; 
    virtual ~GameObject() = default;  // ���� �Ҹ���
};

