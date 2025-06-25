#include "Shop.h"  
#include <iostream>  
using namespace std;  

Shop::Shop(int initialGold):gold(initialGold) {}  

void Shop::buyitem(int cost)  
{  
    if (gold >= cost) {  
        gold -= cost;  
        cout << "������ ���� (-" << cost << "���)" << endl;  
    }  
    else {  
        cout << "��� ����! ���� ����" << endl;  
    }  
}  

void Shop::sellItem(int price)  
{  
    gold += price;  
    cout << "������ �Ǹ� (+" << price << "���)" << endl;  
}  

void Shop::showGold() const  
{  
    cout << "���� ���: " << gold << endl ;
}
