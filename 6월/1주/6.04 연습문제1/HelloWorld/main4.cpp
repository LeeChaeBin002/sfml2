#include <stdio.h>
#include <cmath>



int main()
{
	//.4 �迭 ��� ���ϱ� : �Ǽ��� �迭�� ����Ͽ� �л� 5���� ������ �Է¹ް� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.����� �Ҽ��� ��° �ڸ����� ����ϼ���.	int arr[5];
	float arr[5];
	float sum=0.0;
	float average;
	printf("5���� ������ �Է��ϼ���:\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%f", &arr[i]);
		sum += arr[i];
	}
	average = sum / 5;
	printf("��� ����:%.2f��", average);
	printf("\n");
	return 0;
}