//### ** ���� 10: Ư�� ���� ������ ��ġ ã�� * *

//�����͸� �̿��Ͽ� �迭���� `value`�� ���� ������ ����� �ε����� ��ȯ�ϴ� �Լ� `findLast`�� �ۼ��ϼ���.���� `value`�� �迭�� ���� ���, -1�� ��ȯ�ؾ� �մϴ�.

#include <stdio.h>

int findLast(int* arr, int size, int value) 
{
    int index = -1;
    int* ptr = arr;

   
    for (int i = 0; i < size; i++,ptr++) {
        if (*ptr == value) 
        {
            index=i;
        }
    }
    return index;
}

int main() {
    int source[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(source) / sizeof(source[0]);
    int value = 20;

    int result = findLast(source, size, value);
    printf("������ �ε���: %d\n", result);

    return 0;
}