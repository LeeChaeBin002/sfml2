#include <stdio.h>

//**���� 1: �迭�� Ư�� �� ���� ���� Ȯ��**
//�����͸� �̿��Ͽ� �迭�� Ư�� `element`�� ������ 1��, ������ 0�� ��ȯ�ϴ� �Լ� `contains`�� �ۼ��ϼ���.

int contains(int* arr, int size, int element) {

	for (int i = 0; i < size; i++) {
	if (*(arr + i) == element) {
		return 1;
	}//element�� ã���� ���

	return 0;
}


}
int main() 
{
	int numbers[] = { 1, 2, 3, 4, 5 };
	int result = contains(numbers, 5, 3);  // 3�� �ִ��� Ȯ��
	printf("���: %d\n", result);  // ���: ���: 1

	result = contains(numbers, 5, 6);  // 6�� �ִ��� Ȯ��
	printf("���: %d\n", result);  // ���: ���: 0

}