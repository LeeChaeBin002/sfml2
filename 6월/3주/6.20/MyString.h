#ifndef MYSTRING_H  
#define MYSTRING_H  

#include <cstring>  
#include <iostream>  

class MyString {  
private:  
    char* str;  
    size_t length;  

public:  
    // �⺻ ������  
    MyString() : str(nullptr), length(0) {}  

    // const char* ������  
    MyString(const char* s) {  
        if (s) {  
            length = std::strlen(s);  
            str = new char[length + 1];  
            std::strcpy(str, s);  
        } else {  
            str = nullptr;  
            length = 0;  
        }  
    }  

    // ���� ������  
    MyString(const MyString& other) {  
        length = other.length;  
        str = new char[length + 1];  
        std::strcpy(str, other.str);  
    }  

    // ���� ������  
    MyString& operator=(const MyString& other) {  
        if (this != &other) {  
            delete[] str;  
            length = other.length;  
            str = new char[length + 1];  
            std::strcpy(str, other.str);  
        }  
        return *this;  
    }  

    // ���� ������ (const char*)  
    MyString& operator=(const char* s) {  
        delete[] str;  
        if (s) {  
            length = std::strlen(s);  
            str = new char[length + 1];  
            std::strcpy(str, s);  
        } else {  
            str = nullptr;  
            length = 0;  
        }  
        return *this;  
    }  

    // �Ҹ���  
    ~MyString() {  
        delete[] str;  
    }  

    // ũ�� ��ȯ  
    size_t size() const {  
        return length;  
    }  

    // �ε��� ����  
    char& operator[](size_t index) {  
        return str[index];  
    }  

    const char& operator[](size_t index) const {  
        return str[index];  
    }  

    // ���ڿ� ����  
    MyString operator+(const MyString& other) const {  
        MyString result;  
        result.length = length + other.length;  
        result.str = new char[result.length + 1];  
        std::strcpy(result.str, str);  
        std::strcat(result.str, other.str);  
        return result;  
    }  

    // += ������  
    MyString& operator+=(const MyString& other) {  
        char* newStr = new char[length + other.length + 1];  
        std::strcpy(newStr, str);  
        std::strcat(newStr, other.str);  
        delete[] str;  
        str = newStr;  
        length += other.length;  
        return *this;  
    }  

    // �� ������  
    bool operator==(const MyString& other) const {  
        return std::strcmp(str, other.str) == 0;  
    }  

    bool operator!=(const MyString& other) const {  
        return !(*this == other);  
    }  

    // append �޼���  
    void append(const MyString& other) {  
        *this += other;  
    }  

    // c_str() �޼���  
    const char* c_str() const {  
        return str;  
    }  

    // clear �޼���  
    void clear() {  
        delete[] str;  
        str = nullptr;  
        length = 0;  
    }  

    // empty �޼���  
    bool empty() const {  
        return length == 0;  
    }  

    // �Է� ������  
    friend std::istream& operator>>(std::istream& is, MyString& s) {  
        char buffer[1024];  
        is >> buffer;  
        s = buffer;  
        return is;  
    }  

    // ��� ������  
    friend std::ostream& operator<<(std::ostream& os, const MyString& s) {  
        os << s.str;  
        return os;  
    }  
};  

#endif
