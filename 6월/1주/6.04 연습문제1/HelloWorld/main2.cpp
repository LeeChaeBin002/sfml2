#include <stdio.h>
#include <cmath>



int main() 
{
	//2. �迭 ��� �հ� : ũ�Ⱑ 10�� ���� �迭�� �����ϰ� ����ڷκ��� 10���� ������ �Է¹޾� ������ ��, ��� ����� ���� ���ϴ� ���α׷��� �ۼ��ϼ���.
	int arr[10];
	int sum = 0;
	printf("10���� ������ �Է��ϼ���:\n");
		for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		

	}
		printf("�迭 ����� ��: %d\n", sum);
			return 0;
}