#ifndef SHOP_H  
#define SHOP_H  
#pragma once

class Shop//Ŭ���� ���δ� �޼ҵ� ����
{
private:
	int gold;
public:
	Shop(int initialGold = 100);

	void buyitem(int cost);
	void sellItem(int price);
	void showGold() const;


};

#endif 