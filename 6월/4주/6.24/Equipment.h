#pragma once  
#include "Item.h" // Item Ŭ���� ���Ǹ� �����Ͽ� ������ �����մϴ�.


class Equipment : public Item
{
protected:
	int durability; // ������  

public:
	Equipment(const std::string& name, int price, int durability);	
	void PrintInfo() const override; // Corrected method name to match the base class  
};

