//### ** ���� 3: �迭�� Ư�� ���� �� ��� * *
//�����͸� �̿��Ͽ� �迭���� start �ε������� 
// end �ε��������� ����� ���� ��ȯ�ϴ� �Լ� calculateRangeSum�� �ۼ��ϼ���.



#include <stdio.h>

int calculateRangeSum(int* arr, int start, int end) {

	int sum = 0;
	for (int i = 0; i <= end; ++i) {
		sum += *(arr + i);
		}
	return sum;
	}



int main()

{
	int numbers[] = { 1, 3, 2, 3, 5 };

	int result = calculateRangeSum(numbers, 0, 5);

	printf("�ε��� %d���� %d������ ��: %d \n", 0 ,5, result);
	return 0;

}