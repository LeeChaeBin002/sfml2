#include <stdio.h>
#include <cmath>



int main()
{
	//1. �ִ밪�� �ּҰ� ã�� : ����ڷκ��� 10���� ������ �Է¹޾� �迭�� �����ϰ�, �ִ밪�� �ּҰ��� ã�� ����ϴ� ���α׷��� �ۼ��ϼ���.
	int arr[10];
	int i,max,min;
		printf("10���� ������ �Է��ϼ���:\n");
		for (i = 0; i < 10; ++i) 
		{
			scanf("%d",&arr[i]);
		}

		max = arr[0];
		min = arr[0];
		for (i = 1; i < 10; ++i) 
		{
			if (arr[i] > max) 
			{
				max = arr[i];
			}
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		printf("\n�ִ밪:%d\n", max);
		printf("�ּҰ�:%d\n", min);



}

// 6���� for������ �Է���