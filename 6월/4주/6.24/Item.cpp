
#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(const std::string& name,int price)
	:name(name),price(price){ }

void Item::PrintInfo() const
{
	cout << "[Item]" << endl;
	cout << "�̸�: " << name << endl;
	cout << "����: " << price << "���\n";

}