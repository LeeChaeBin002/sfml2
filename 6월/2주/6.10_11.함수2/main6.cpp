//### ** ���� 6: �迭�� �ִ밪�� �ּҰ� ã�� * *

//�����͸� �̿��Ͽ� �迭�� �ִ밪�� �ּҰ��� ã�� ���� `max`�� `min` �����Ͱ� ����Ű�� ��ġ�� �����ϴ� �Լ� `findMaxMin`�� �ۼ��ϼ���.

#include <stdio.h>
void findMaxMin(int* arr, int size, int* max, int* min) {

	if (size <= 0) return;
	*max = *arr;
	*min = *arr;

	for (int i = 1; i < size; ++i) {
		if (*(arr + i) > *max) {
			*max = *(arr + i);
		}
		if (*(arr + i) < *min) {
			*min = *(arr + i);
		}

	}
}


int main()

{

	int numbers[] = { 2, 3, 2, 3, 5 };

	int max, min;
	findMaxMin(numbers,5,&max,&min);

	printf("�ִ밪: %d\n", max);
	printf("�ּҰ�: %d\n", min);

	return 0;

}