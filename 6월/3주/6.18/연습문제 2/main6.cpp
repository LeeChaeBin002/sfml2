#include <iostream>
#include <string>
using namespace std;

int& findMaxLevel(int& level1, int& level2, int& level3)
{
    if (level1 >= level2 && level1 >= level3) {

        return level1;
    }
    else if (level2 >= level1 && level2 >= level3)
    {
        return level2;
    }
    else 
    {
        return level3;

    }
}

//6.## ���� 6. �ְ� ĳ���� ã��

//���۷����� ��ȯ�ϴ� �Լ��� ����Ͽ� ���� ���� ������ ĳ���͸� ã�� ������ �����ϼ���.
//
//- 3���� ĳ���� ������ �Է¹޽��ϴ�
//- ���� ���� ������ ���� ĳ������ ���۷����� ��ȯ�ϴ� �Լ��� �ۼ��մϴ�
//- ��ȯ�� ���۷����� ���� �ش� ĳ������ ������ 10 ������ŵ�ϴ�
int main() 
{
    int level1, level2, level3;
    //�Է°�

    cin >> level1>> level2>> level3;
    cout << "ĳ���� ����: " << level1 <<" "<< level2 <<" " << level3<<endl;
    int& maxLevel = findMaxLevel(level1, level2, level3);
    cout << "�ְ� ���� ĳ����: " << maxLevel<<endl;
    maxLevel += 10;
    cout << "���ʽ� ���� ��: " <<level1 << " " << level2 << " " << level3 << endl;

 

}