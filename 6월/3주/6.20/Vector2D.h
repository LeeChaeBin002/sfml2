#pragma once
#ifndef VECTOR2D_H  
#define VECTOR2D_H 
#include <iostream>

class Vector2D
{
private:
	int x;
	int y;

public:
	Vector2D(int x = 0, int y = 0);
	//������ �����ε�
	Vector2D operator+(const Vector2D& other) const;
	Vector2D operator-(const Vector2D& other) const;
	bool operator==(const Vector2D& other) const;
	//��� �����ε�
	friend std::ostream& operator<<(std::ostream& os, const Vector2D& vec);

};

#endif