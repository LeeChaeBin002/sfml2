#include <stdio.h>



int main()
{
	//10.�迭 ���� �ʰ� ����: ũ�Ⱑ 5�� �迭�� �����ϰ�, �ǵ������� ������ �ʰ��Ͽ� ������ �� � ���� �߻��ϴ��� �����ϴ� ���α׷��� �ۼ��ϼ���.
	int arr[5] = { 10,20,30,40,50 };
	int i;
	printf("���� ���� �� ����:\n");

	for (i = 0; i < 5; i++)
	{
		
		printf("\narr[%d]=%d ", i, arr[i]);

	}
	printf("\n\n���� ���� �� ����:\n");
	for (i = 5; i < 10; i++)
	{

		printf("\narr[%d]=%d ", i, arr[i]);

	}

	printf("\n");
	return 0;
}

