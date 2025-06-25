//### ** ���� 4: �迭�� �� ��� ��ȯ * *

//�����͸� �̿��Ͽ� �迭���� `index1` ��ġ�� `index2` ��ġ�� ��Ҹ� ��ȯ�ϴ� �Լ� `swapElements`�� �ۼ��ϼ���.��ȿ���� ���� �ε����� ��� �ƹ� �۾��� ���� �ʽ��ϴ�.



#include <stdio.h>

void swapElements(int* arr, int size, int index1, int index2) {

	if (index1 < 0 || index1 >= size || index2 < 0 || index2 >= size) {
		return;
	}
	int temp = *(arr + index1);//arr[index1]�� ����
	*(arr + index1) = *(arr + index2);
	*(arr + index2) = temp;
}


int main()

{
	
	int numbers[] = { 1, 3, 2, 3, 5 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	swapElements(numbers, size, 1, 4);

	printf("�迭 ��� ��ȯ ���: ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return 0;

}