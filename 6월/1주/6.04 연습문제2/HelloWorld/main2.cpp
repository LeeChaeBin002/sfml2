#include <stdio.h>
#include <cmath>



int main()
{
	//1.Ư�� �� �˻�: ũ�Ⱑ 10�� �迭�� ������ ���� �����ϰ�, ����ڰ� �Է��� ���� �迭�� �ִ��� �˻��ϴ� ���α׷��� �ۼ��ϼ���.
	int arr[10] = { 10, 25, 30, 45, 50, 65, 70, 85, 90, 100 };
	int i;
	int target;
	int found = 0;

	printf("�迭: ");
	for (i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\nã�� ���� �Է��ϼ���:\n");
	
	scanf("%d",&target);
	for(i = 0; i < 10 ; ++i)
	{
		if (arr[i] == target) 
		{
			printf("%d�� �迭�� %d��° ��ġ(�ε���%d)�� �ֽ��ϴ�.",target,i+1,i);
			
			found = 1;
			break;
		}
	}

}
