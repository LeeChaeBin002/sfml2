#pragma once
#include "Shape.h"
class Circle :
    public Shape
{
private:
    int radius;

public:
    Circle(int r) : radius(r) {}

    void Draw() const override {
        std::cout << "���� �׸��ϴ�. (������: " << radius << ")\n";
    }
};

