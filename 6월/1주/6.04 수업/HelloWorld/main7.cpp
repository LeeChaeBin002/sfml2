#include <stdio.h>



int main()
{
	//7.�迭 �ʱ�ȭ �� : ���� �� ���� ������� �迭�� �ʱ�ȭ�ϰ� ����� ���ϴ� ���α׷��� �ۼ��ϼ���.	int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int numbers[5] = { 1,2,3,4,5 };
	int numbers2[5] = { 1,2,3 };
	int numbers3[5] = { };
	printf("��ü �ʱ�ȭ:");
	int i;
	
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n�κ� �ʱ�ȭ:");
	for(i=0;i<5;++i)
	{

	printf("%d ", numbers2[i]);
	}
	printf("\n0���� �ʱ�ȭ:");
	for (i = 0; i < 5; ++i) 
	{
		printf("%d ", numbers3[i]);
	}
	printf("\n");
	return 0;
}

