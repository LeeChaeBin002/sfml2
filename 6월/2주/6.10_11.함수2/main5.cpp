

//.5### **���� 5: �迭 ��� ������**

//�����͸� �̿��Ͽ� �迭�� ��Ҹ� ������ �Լ� `reverseArray`�� �ۼ��ϼ���.

#include <stdio.h>
void reverseArray(int* arr, int size) {  
    int start = 0;              // �迭�� ���� �ּ�  
    int end = size - 1;     // �迭�� ������ �ּ�  

    while (start < end) {  
        int temp = start;  
        start = end;  
        end = temp;  

        start++;  
        end--;  
    }  
}


int main()

{

	int numbers[] = { 1, 3, 2, 3, 5 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	reverseArray(numbers, size);

	printf("������ �迭: ");
	for (int i = 0; i < size; ++i) {
		printf("%d ", numbers[i]);
	}
	printf("\n");

	return 0;

}