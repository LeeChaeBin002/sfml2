//7.### **���� 7: �迭 ����**

//C�� ����Ͽ� ���� �迭(`source`)�� ��� ��Ҹ� ��� �迭(`target`)�� �����ϴ� �Լ� `copyArray`�� �ۼ��ϼ���.



#include <stdio.h>

void copyArray(int* source, int* target, int size) {
    for (int i = 0; i < size; ++i) {
        *(target + i) = *(source + i);//target[i]=source[i];
    }
}

int main() {
    int source[] = { 10, 20, 30, 40, 50 };
    int target[5];
    int size = sizeof(source) / sizeof(source[0]);

    copyArray(source, target, size); 
    printf("source���� taget���� ����� �迭: ");
    for(int i =0;i<size;++i)
    {
        printf("%d ", target[i]);
 
    }
    printf("\n");


    return 0;
}