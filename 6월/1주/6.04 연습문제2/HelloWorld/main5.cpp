#include <stdio.h>



int main()
{
	//4. �迭 ���� (���� ����): 5���� ������ �Է¹޾� ������������ �����ϴ� ���α׷��� �ۼ��ϼ���.

	int arr[5];
	int i,j;
	int temp;


	printf("5���� ������ �Է��ϼ���:\n");
	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &arr[i]);

	}

	printf("���� ��:");
	for (i = 0; i < 5; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++)//�������� ����
	{
		for (j = 0; j < 4-i; j++) {//4-i�� ������ �ѹ��� �������� ���� ū���� �ǵڷ� ����
			if (arr[j] > arr[j + 1])//��>�̿��� �� ���� �� ũ��
			{
				temp = arr[j];//���󰪿� ���� ����
				arr[j] = arr[j + 1];; //��<->�̿��� ü����
				arr[j + 1] = temp;//�̿���
			}
		}

	}

	printf("���� ��:");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}




