#include <stdio.h>  

//9.ü�� ȸ�� �Լ�: ���� ü��, �ִ� ü��, ȸ������ �Ű������� �޾� ȸ�� �� ü���� ����ϴ� �Լ� healPlayer(int currentHP, int maxHP, int healAmount)�� �ۼ��ϼ���. �ִ� ü���� �ʰ��� �� �����ϴ�.

int healPlayer(int currentHP, int maxHP, int healAmount) {

    currentHP += healAmount;

    if (currentHP > maxHP) {
        currentHP = maxHP;
    }
    return currentHP;

}

int main() {
    int currentHP, maxHP, healAmount;
    printf("���� ü��:");
    scanf("%d", &currentHP);
    printf("�ִ� ü��:");
    scanf("%d", &maxHP);
    printf("ȸ����: ");
    scanf("%d", &healAmount);
    int newHP = healPlayer(currentHP, maxHP, healAmount);
    printf("ȸ�� �� ü��: %d\n", newHP);

}