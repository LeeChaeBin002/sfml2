#include <stdio.h>  

// 2. �Ű������� �ִ� �Լ�: �÷��̾� �̸��� �Ű������� �޾Ƽ� ȯ�� �޽����� ����ϴ� �Լ� welcomePlayer(char playerName[])�� �ۼ��ϼ���.

void welcomePlayer(char playerName[]) {
    printf("ȯ���մϴ�, %s��!\n", playerName); // %s�� ����Ͽ� ���ڿ� ���
}

int main() {
    char playerName[50]; // �÷��̾� �̸��� ������ �迭 ����

    printf("�÷��̾� �̸��� �Է��ϼ���: ");
    scanf_s("%49s", playerName); // scanf_s�� ����Ͽ� �����ϰ� ���ڿ� �Է�

    welcomePlayer(playerName); // �Է¹��� �̸��� �Լ��� ����
    return 0;
}