#include <stdio.h>  

//3. ��ȯ���� �ִ� �Լ� : �� ������ �Ű������� �޾� ���� ���� ��ȯ�ϴ� �Լ� addNumbers(int a, int b)�� �ۼ��ϰ�, main���� ȣ���Ͽ� ����� ����ϼ���.
int addNumbers(int a, int b) 
{ 
    return a + b; 
}

int main() {  
    int num1, num2;  
    scanf("%d%d", &num1, &num2);
    
    printf("ù ��° ��: %d\n", num1);  
    printf("�� ��° ��: %d\n", num2);  
    printf("�� ���� ��: %d\n", addNumbers(num1, num2));  

    return 0;  
}