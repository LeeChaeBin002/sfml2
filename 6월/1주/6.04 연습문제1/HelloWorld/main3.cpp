#include <stdio.h>
#include <cmath>



int main()
{
	//3. ���� ��� : ����ڷκ��� 5���� ������ �Է¹޾� �迭�� ������ ��, �������� ����ϴ� ���α׷��� �ۼ��ϼ���.
	int arr[5];
	printf("5���� ������ �Է��ϼ���:\n");
	for (int i = 0; i < 5; i++) 
	{
		scanf("%d", &arr[i]);
	}
		printf("���� ���:");
	for (int i = 4; i>= 0;i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}