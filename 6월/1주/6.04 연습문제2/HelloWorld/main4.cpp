#include <stdio.h>



int main()
{
	//3. Ȧ���� ¦�� ���� ���� : �迭�� ����� ������ �� Ȧ���� ¦���� ������ ���� ���� ���α׷��� �ۼ��ϼ���.

	int arr[10];
	int i;
	int evencount=0;
	int oddcount=0;

	printf("10���� ������ �Է��ϼ���: ");
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; ++i) 
	{
		if (arr[i] % 2 == 0) {
			evencount++;
		}
		else {
			oddcount++;
		}

	}
	printf("¦�� ����:%d��\n",evencount);
	printf("Ȧ�� ����:%d��",oddcount);

	return 0;
	}
	



