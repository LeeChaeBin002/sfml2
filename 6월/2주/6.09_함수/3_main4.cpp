#include <stdio.h>  

//4. ���� ���� ��� �Լ� : �⺻ ������ ���ʽ� ������ �Ű������� �޾� �� ������ ����ϴ� �Լ� calculateScore(int baseScore, int bonusScore)�� �ۼ��ϼ���.

int calculateScore(int baseScore, int bonusScore) {
    return baseScore + bonusScore; // ����: �� ������ ��ȯ�ϵ��� ����
}

int main() {
    int num1 = 0, num2 = 0; // ����: �ʱ�ȭ���� ���� ���� ���� �ذ��� ���� �ʱⰪ ����
    printf("�⺻ ����: ");
    scanf("%d", &num1); // ����: ����� �Է��� ���� �޾ƾ� ��� ����
    printf("���ʽ� ����: ");
    scanf("%d", &num2); // ����: ����� �Է��� ���� �޾ƾ� ��� ����

    printf("�� ����: %d\n", calculateScore(num1, num2));

    return 0;
}