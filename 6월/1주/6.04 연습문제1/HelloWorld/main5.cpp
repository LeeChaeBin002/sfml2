#include <stdio.h>



int main()
{
	//.5 �迭 ũ�� ��� : sizeof �����ڸ� ����Ͽ� �迭�� ��ü ũ��� ��� ������ �ڵ����� ����Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.
	int numbers[10];
	

	printf("int �迭�� ��üũ��:%lu ����Ʈ\n", sizeof(numbers));
	printf("�迭 ����� ũ��:%lu ����Ʈ\n", sizeof(numbers[0]));
	printf("�迭 ����� ����:%lu��\n", sizeof(numbers) / sizeof(numbers[0]));

	printf("\n");
	return 0;
}