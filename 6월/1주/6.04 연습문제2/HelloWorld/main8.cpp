#include <stdio.h>



int main()
{
	//8.���� �ϼ� ���� : 12������ �ϼ��� �迭�� �����ϰ�, ����ڰ� �Է��� ���� �ϼ��� ����ϴ� ���α׷��� �ۼ��ϼ���. (��� ����)
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int month;
	
	printf("���� �Է��ϼ���(1-12):");
	scanf("%d", &month);

	if (month >= 1 && month <= 12)
	{
		printf("%d���� %d���Դϴ�.\n", month, days[month - 1]);
	}
	printf("\n");
	return 0;
}

