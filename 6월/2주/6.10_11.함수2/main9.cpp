//### ** ���� 9: Ư�� ������ ���� ��� ���� ��� * *

//�����͸� �̿��Ͽ� �迭���� `value`���� ���� ����� ������ ��ȯ�ϴ� �Լ� `countLess`�� �ۼ��ϼ���.

#include <stdio.h>

int countGreater(int* arr, int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) < value) {
            count++;
        }
    }
    return count;
}

int main() {
    int source[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(source) / sizeof(source[0]);
    int value = 40;

    int result = countGreater(source, size, value);
    printf("%d���� ���� ����� ����: %d\n", value, result);

    return 0;
}