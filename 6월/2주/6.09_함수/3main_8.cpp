#include <stdio.h>  

//8. ���� �ð� ��ȯ �Լ� : �� ���� �ð��� �Է¹޾� �а� �ʷ� ��ȯ�ϴ� �Լ� convertTime(int seconds)�� �ۼ��ϼ���.

void convertTime(int seconds) {

    int minutes = seconds / 60;
    int remainingSeconds = seconds % 60;

    printf("��ȯ�� �ð�:%d�� %d��\n", minutes, remainingSeconds);
   
}

int main() {
    int seconds;
    printf("�� �ð�(��):");
    scanf("%d", &seconds);
  
    convertTime(seconds);
  

}