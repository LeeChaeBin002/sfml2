#include <stdio.h>

void argument(int* ptr) 
{//3
    *ptr = *ptr * 2;
}

int main(){
    
    int num=10;//1
    int* pNum=nullptr;//2
    argument(&num);//4.�����͸� 2��� ����� �Լ��� ���ڷ� �־� ����
    pNum = &num;//5.�����Ͱ� ������ ����Ű�� �Ҵ�
    argument(pNum);//6.5��+2�� �����
    printf("%d", num);//7.1������ ������ ������ ��

    return 0;
}
