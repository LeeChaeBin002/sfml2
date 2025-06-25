#include "MyString.h"

// �⺻ ������
MyString::MyString() : data(new char[1] {'\0'}), length(0) {}

// const char* ������
MyString::MyString(const char* str)
{
	if (str)
	{
		length = std::strlen(str);
		data = new char[length + 1];
		strcpy_s(data, length + 1, str); // ������ strcpy_s ���
	}
	else
	{
		data = new char[1] {'\0'};
		length = 0;
	}
}
// ���� ������
MyString::MyString(const MyString& other) : length(other.length) {
	data = new char[length + 1];
	strcpy_s(data, length + 1, other.data);
}
// �Ҹ���
MyString::~MyString() {
    delete[] data;
}

// ���� ���� ������
MyString& MyString::operator=(const MyString& other) {
    if (this != &other) {
        delete[] data;
        length = other.length;
        data = new char[length + 1];
        strcpy_s(data, length + 1, other.data);
    }
    return *this;
}
//�̵� ���� ������
MyString& MyString::operator=(MyString&& other) {
    if (this != &other) {
        delete[] data;
        data = other.data;// �����͸� ���� (����!)
        length = other.length; // ���� ����

        other.data = nullptr;// �ڿ� ���� ���� (�ߺ� ���� ����)
        other.length = 0;// ���� �ʱ�ȭ
    }
    return *this;
}

// const char* ����
MyString& MyString::operator=(const char* str) {
    if (data != str) { // �ڱ� �ڽſ� ���� ���� ����
        delete[] data; // ���� �޸� ����

        length = std::strlen(str); // ���ο� ���ڿ� ���� ���
        data = new char[length + 1]; // ���ο� �޸� �Ҵ�

        // ������ ���ڿ� ���� ���
        strcpy_s(data, length + 1, str);
    }
    return *this;
}

// size() �Լ�
size_t MyString::size() const {
    return length;
}

// empty()
bool MyString::empty() const {
    return length == 0;
}

// clear()
void MyString::clear() {
    delete[] data;
    data = new char[1] {'\0'};
    length = 0;
}

// append
void MyString::append(const char* str) {
    if (!str) return;
    size_t addLen = std::strlen(str);
    char* newData = new char[length + addLen + 1];
    strcpy_s(newData, length + addLen + 1, data);//���� ���ڿ� (data)�� newData�� ����
    strcat_s(newData, length + addLen + 1, str);//�̾ str�� newData ���� ���� (��, �̾���̱�)
    delete[] data;
    data = newData;
    length += addLen;
}

void MyString::append(const MyString& other) {
    append(other.data);
}

// c_str
const char* MyString::c_str() const {
    return data;
}

// �ε��� ����
char& MyString::operator[](size_t index) {
    return data[index];
}
const char& MyString::operator[](size_t index) const {
    return data[index];
}

// + ������
MyString MyString::operator+(const MyString& other) const {//s4_
    MyString temp(*this);
    temp.append(other.data);
    return temp;
}
MyString MyString::operator+(const char* str) const { // s2+" "
    MyString temp(*this);
    temp.append(str);
    return temp;
}

// += ������
MyString& MyString::operator+=(const MyString& other) {
    append(other.data);
    return *this;
}
MyString& MyString::operator+=(const char* str) {
    append(str);
    return *this;
}

// �� ������
bool MyString::operator==(const MyString& other) const {
    return std::strcmp(data, other.data) == 0;
}
bool MyString::operator==(const char* str) const {
    return std::strcmp(data, str) == 0;
}
bool MyString::operator!=(const MyString& other) const {
    return !(*this == other);
}
bool MyString::operator!=(const char* str) const {
    return !(*this == str);
}

// ��� ������
std::ostream& operator<<(std::ostream& os, const MyString& str) {
    if (str.data) {
        os << str.data; // Accessing private member 'data' of MyString
    }
    return os;
}

// �Է� ������
std::istream& operator>>(std::istream& is, MyString& str) {
    char buffer[1000];
    is >> buffer;
    str = buffer;
    return is;
}