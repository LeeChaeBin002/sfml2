#ifndef MYSTRING_H  
#define MYSTRING_H  
#pragma once
#include <cstring>  
#include <iostream>  

class MyString {  
private:  
    char* data;  
    size_t length;  

public:  
    // ������ / �Ҹ���
    MyString();                                // �⺻ ������
    MyString(const char* str);                 // const char* ������
    MyString(const MyString& other);           // ���� ������
    ~MyString();                               // �Ҹ���

    // ���� ������
    MyString& operator=(const MyString& other);     // ���� ���� ������
    MyString& operator=(const char* str);           // const char* ����

    //�̵� ���� ������
    MyString& operator=(MyString&& other);//r���,�ӽð� other

    // ��� �Լ�
    size_t size() const;
    bool empty() const;
    void clear();
    void append(const char* str);
    void append(const MyString& other);
    const char* c_str() const;

    // ������ �����ε�
    char& operator[](size_t index);
    const char& operator[](size_t index) const;

    MyString operator+(const MyString& other) const;
    MyString operator+(const char* str) const;
    MyString& operator+=(const MyString& other);
    MyString& operator+=(const char* str);

    bool operator==(const MyString& other) const;
    bool operator==(const char* str) const;
    bool operator!=(const MyString& other) const;
    bool operator!=(const char* str) const;

    // ����� ������
    friend std::ostream& operator<<(std::ostream& os, const MyString& str);
    friend std::istream& operator>>(std::istream& is, MyString& str);

};  

#endif