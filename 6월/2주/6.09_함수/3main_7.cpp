#include <stdio.h>  

//7.������ ���� ��� �Լ�: ������ ������ �ܰ��� �Ű������� �޾� �� ������ ����ϴ� �Լ� calculateItemPrice(int quantity, int unitPrice)�� �ۼ��ϼ���.
int calculateItemPrice(int quantity, int unitPrice) {

    return quantity*unitPrice;
}

int main() {
    int item;
    int unit_price;

    printf("������ ����:");
    scanf("%d", &item);
    printf("�ܰ�:");
    scanf("%d", &unit_price);
 
    printf("�� ����: %d��\n",calculateItemPrice(item,unit_price));

}