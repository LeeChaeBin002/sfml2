#include <stdio.h>  

//6. �÷��̾� ������ �Լ� : ���� ����ġ�� �Ű������� �޾� ������ ����ϴ� �Լ� calculateLevel(int exp)�� �ۼ��ϼ���. (����ġ 100�� ���� 1)
int calculateLevel(int exp) {  
    int nextLevelExp = ((exp / 100) + 1) * 100;  
    return nextLevelExp - exp;  
}  

int main() {  
    int exp;  
    printf("���� ����ġ�� �Է��ϼ���:");  
    scanf("%d", &exp);  
    int level = exp / 100;  
    int needExp = calculateLevel(exp);  
    printf("���� ����:%d\n", level);  
    printf("���� �������� �ʿ��� ����ġ: %d\n", needExp);  
}