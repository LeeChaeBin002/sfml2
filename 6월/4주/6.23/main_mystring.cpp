#include "MyString.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main() {
    // 1. �⺻ ������ �׽�Ʈ
    MyString s1;
    std::cout << "s1: " << s1 << "'', ����: " << s1.size() << std::endl;

    // 2. const char* ������ �׽�Ʈ
    MyString s2("Hello");
    std::cout << "s2: '" << s2 << "', ����: " << s2.size() << std::endl;

    // 3. ���� ������ �׽�Ʈ
    MyString s3(s2);
    std::cout << "s3: '" << s3 << "', ����: " << s3.size() << std::endl;
    
    // 4-0. �̵� ������ �׽�Ʈ
    MyString s4(std::move(MyString("World")));
    std::cout << "s4: '" << s4 << "', ����: " << s4.size() << std::endl;

    // 4. ���� ������ �׽�Ʈ
    s1 = s2;
    std::cout << "s1 = s2 ��: '" << s1 << "'" << std::endl;


    // 5. �ڱ� ���� �׽�Ʈ
    s1 = s1;
    std::cout << "�ڱ� ���� ��: '" << s1 << "'" << std::endl;

    // 6. �̵� ���� �׽�Ʈ
    s1 = std::move(MyString("move test"));
    std::cout << "�̵� ���� ��: '" << s1 << "'" << std::endl;

    // 7. �ε��� ���� �׽�Ʈ
    s2[0] = 'h';
    std::cout << "s2[0] = 'h' ��: '" << s2 << "'" << std::endl;

    // 8. ���ڿ� ���� �׽�Ʈ
    MyString s4_("World");
    MyString s5 = s2 + " " + s4_;
    std::cout << "s2 + \" \" + s4_: '" << s5 << "'" << std::endl;

    // 9. += ������ �׽�Ʈ
    s5 += "!";
    std::cout << "+= \"!\" ��: '" << s5 << "'" << std::endl;

    // 10. �� ������ �׽�Ʈ
    std::cout << "s2 == \"hello\": " << (s2 == "hello") << std::endl;
    std::cout << "s2 != s3: " << (s2 != s3) << std::endl;

    // 11. append �׽�Ʈ
    s1.clear();
    s1.append("First");//new data
    s1.append(" ");//length + addLen + 1
    s1.append(MyString("Second"));//
    std::cout << "append ��: '" << s1 << "'" << std::endl;

    // 12. c_str() �׽�Ʈ
    const char* cstr = s1.c_str();
    std::cout << "c_str(): " << cstr << std::endl;

    // 13. empty() �׽�Ʈ
    MyString s6;
    std::cout << "s6.empty(): " << s6.empty() << std::endl;
    s6 = "Not empty";
    std::cout << "���� �� s6.empty(): " << s6.empty() << std::endl;

    // 14. �뷮 ���ڿ� �׽�Ʈ
    MyString s7;
    for (int i = 0; i < 100; ++i) {
        s7 += "a";
    }
    std::cout << "100�� 'a' �߰� �� ����: " << s7.size() << std::endl;

    // 15. const ��ü �׽�Ʈ
    const MyString s8("Const String");
    std::cout << "const ��ü: '" << s8 << "'" << std::endl;
    std::cout << "const ��ü �ε��� ����: " << s8[0] << std::endl;

    // 16. �Է� ������ �׽�Ʈ
    std::cout << "\n=== �Է� ������ �׽�Ʈ ===" << std::endl;
    std::cout << "�� �ܾ �Է��ϼ���: ";
    MyString s9, s10, s11;
    std::cin >> s9 >> s10 >> s11;
    std::cout << "�Էµ� ���ڿ�: '" << s9 << "', '" << s10 << "', '" << s11 << "'" << std::endl;

    return 0;
}

