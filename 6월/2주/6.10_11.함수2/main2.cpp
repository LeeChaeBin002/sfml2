#include <stdio.h>

//2.### **���� 2: �迭�� Ư�� �� ���� ���**

//�����͸� �̿��Ͽ� �迭���� Ư�� `element`�� ������ ��ȯ�ϴ� �Լ� `countElement`�� �ۼ��ϼ���.

int countElement(int* arr, int size, int element) {

	int count=0;
	for (int i = 0; i < size; ++i) {
		if (*(arr + i) == element) {
			count++;
		}
	}

		return count;

}
int main()

{
	int numbers[] = { 1, 3, 2, 3, 5 };
	int taget = 3;
	int result = countElement(numbers, 5, taget);

	printf("���� %d�� �迭�� %d�� ��Ÿ���ϴ�.\n", taget, result);
	return 0;

}