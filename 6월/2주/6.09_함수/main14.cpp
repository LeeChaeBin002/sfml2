#include <stdio.h>  


/*## ���� 14: ������ �迭�� ���ڿ�

**�䱸����:**`"C"`, `"Java"`, `"Python"` �� ���� ���ڿ��� �����ϴ� ������ `char` �迭 `subjects`�� �����ϼ���.
ũ�Ⱑ 3�� `char` ������ �迭 `p_sub`�� �����ϼ���.
�ݺ����� ����Ͽ� `p_sub`�� �� ��Ұ� `subjects`�� �� ���ڿ��� ����Ű�� �ϼ���.
`p_sub` �迭�� ����Ͽ� ����� ��� ���ڿ��� ����ϼ���.*/

int main() {  
    char subjects[3][10] = {"C", "Java", "Python"};    
    char* p_sub[3];  

    for (int i = 0; i < 3; i++) {  
        p_sub[i] = subjects[i];  
    }  

    for (int i = 0; i < 3; i++) {  
        printf("%s\n", p_sub[i]);  
    }  

    return 0;  
}