#include <stdio.h>
#include <cmath>



int main()
{
	//2.�迭 ��� ��ȯ: �� ���� �ε����� �Է¹޾� �ش� ��ġ�� �迭 ��Ҹ� ���� ��ȯ�ϴ� ���α׷��� �ۼ��ϼ���
	int arr[5] = { 10, 20, 30, 40, 50 };
	int ix1,ix2;
	int temp;

	printf("���� �迭: ");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n��ȯ�� �ε��� �� ���� �Է��ϼ���:\n");
	scanf("%d%d",ix1,ix2);

	//��ȯ
	temp = arr[ix1];
	arr[ix1] = arr[ix2];
	arr[ix2] = temp;

	printf("��ȯ �� �迭:\n");
		for(int i=0; i<10;i++){
			printf("%d", arr[i]);
	
	}
	printf("\n");

}
