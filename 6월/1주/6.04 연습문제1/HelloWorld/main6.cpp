#include <stdio.h>



int main()
{
	//6. ¦�� �ε��� ��� ��� : ũ�Ⱑ 10�� �迭�� 1���� 10������ ���� �����ϰ�, ¦�� �ε���(0, 2, 4, 6, 8)�� �ִ� ��Ҹ� ����ϴ� ���α׷��� �ۼ��ϼ���
	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	printf("��ü�迭:");
	for (i = 0; i < 10; i++) 
	{
	printf("%d ", numbers[i]);
	}
	printf("\n");
	printf("¦�� �ε��� ���:");
	for ( i = 0; i < 10; i+=2) 
	{
		printf("%d ",numbers[i]);

	}
	printf("\n");
	return 0;
}

// 2�ɼ� ����5�� ã�Ƽ� Ǯ��\