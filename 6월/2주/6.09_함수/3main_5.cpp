#include <stdio.h>  

//5.�Լ��� �ʿ伺 - �ڵ� �ߺ� ���� : ������ ���� �ߺ� �ڵ带 �Լ��� ����� �����ϼ���.HP�� �����ϰ� ���¸� ����ϴ� ����� takeDamage(int* currentHP, int damage) �Լ��� ���弼��.
int takeDamage(int* currentHP, int damage) {
    *currentHP -= damage;
    printf("�������� �޾ҽ��ϴ�! ���� HP: %d\n", *currentHP); 
    return *currentHP;
}

int main() {
    int HP = 100;

    takeDamage(&HP, 10);
    takeDamage(&HP, 15);
    takeDamage(&HP, 10);

}