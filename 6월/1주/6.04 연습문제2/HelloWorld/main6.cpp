#include <stdio.h>



int main()
{
	//5. �ߺ� ���� : �迭���� �ߺ��� ���� ã�� ǥ���ϴ� ���α׷��� �ۼ��ϼ���.
	int arr[10];
	int dup[10];
	int i, j, d = 0;
	bool isDuplicate[10] = { false };


	printf("10���� ������ �Է��ϼ���:\n");
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &arr[i]);

	}


	for (i = 0; i < 10; ++i) {
		if (isDuplicate[i]) continue;

		for (j = i + 1; j < 10; j++)//�������� ����
		{
			if (arr[i] == arr[j]) {
				dup[d++] = arr[i];
				isDuplicate[j] = true;  // �ߺ��� �ε��� ǥ��
				break;  // �ߺ��� ã������ �� �̻� ã�� �ʿ� ����



			}
		}
	}
	//��������
	//i:��ü���� ������ d:�ߺ��� �� ����
	//i�� 1 ������ ������ �� �ڿ� �ϳ��� ���� �Ϸ�
	//�׷��� j�� �� ������ n - 1 - i�� �ٿ���
    //���ĵ� ���� ������ ����

	for (i = 0; i < d - 1; i++) {
		for (j = 0; j < d - 1 - i; j++) {
			if (dup[j] > dup[j + 1]) {
				int temp = dup[j];
				dup[j] = dup[j + 1];
				dup[j + 1] = temp;
			}
		}
	}
	printf("�ߺ��� ��: ");
	for (i = 0; i < d; i++) {
		if (i == 0 || dup[i] != dup[i - 1]) {
			printf("%d ", dup[i]);
		}
	}
	printf("\n");

}





