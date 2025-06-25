#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    void Draw() const override {
        std::cout << "�簢���� �׸��ϴ�. (����: " << width << ", ����: " << height << ")\n";
    }
};

