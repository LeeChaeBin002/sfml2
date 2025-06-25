#pragma once
#ifndef STUDENT_H  
#define STUDENT_H 
#include <iostream>
using namespace std;


class Student
{
    string name;
    int id;
    int number; // ���� ���� (1,2,3)

public:
    // ������
    Student(int id, const string& name, int number)
        : id(id), name(name), number(number) {
        cout << "�л� " << number << " ������" << endl;
    }

    // �Ҹ���
    ~Student() {
        cout << "�л� " << number << " �Ҹ��" << endl;
    }

    // ���� ��� �޼���
    void printInfo() const {
        cout << "�й�: " << id << ", �̸�: " << name << endl;
    }
};



#endif
