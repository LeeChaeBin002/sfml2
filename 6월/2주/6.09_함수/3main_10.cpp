#include <stdio.h>  

// 10. ��Ƽ �Լ� Ȱ�� - ĳ���� ���� ��� : �÷��̾��� �̸�, ����, ü���� ���� ����ϴ� �Լ����� ����� ��� ȣ���ϴ� ���α׷��� �ۼ��ϼ���.

void printPlayerName(char name[]) {
    printf("�÷��̾� �̸�: %s\n", name);
}

void printPlayerLevel(int level) {
    printf("�÷��̾� ����: %d\n", level);
}

void printPlayerHP(int hp) {
    printf("�÷��̾� ü��: %d\n",hp);
}

int main() {
    char name[50];
    int level, hp;
    scanf("%s %d %d", name, &level, &hp);
    printf("=== ĳ���� ����===\n");
    printPlayerName(name);
    printPlayerLevel(level);
    printPlayerHP(hp);


 

}