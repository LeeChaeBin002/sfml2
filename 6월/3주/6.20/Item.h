#pragma once
#include <iostream>
using namespace std;

class Item
    {
        string name;
        int price;

    public:
        // ������
        Item(const string& name, int price)
            :name(name), price(price) {
        }
        int getPrice() const {
            return price;
        }

        void printInfo(int index) const {
            cout << "������ " << index + 1 << " �߰�: " << name << " " << price << endl;
        }
    };

    int size;
    cout << "�κ��丮 ũ��: ";
    cin >> size;

    // ���� �迭 ����
    Item** inventory = new Item * [size];

    // ������ �߰�
    for (int i = 0; i < size; ++i) {
        string name;
        int price;
        cout <<"������ " << i + 1 << " �߰�: ";
        cin >> name >> price;
        inventory[i] = new Item(name, price);
    }

    // �� ��ġ ���
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += inventory[i]->getPrice();
    }

    cout << "�� ��ġ: " << total << endl;

    // �޸� ����
    for (int i = 0; i < size; ++i) {
        delete inventory[i];
    }
    delete[] inventory;

    cout << "�κ��丮 ���� �Ϸ�" << endl;

};

