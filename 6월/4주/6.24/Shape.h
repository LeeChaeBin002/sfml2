#pragma once
#include <iostream>
class Shape
{
private:

public:
    virtual ~Shape() = default;
    virtual void Draw() const {
        std::cout << "���� �׸���:\n";
    }
};

