#include <iostream>
#include <string>
using namespace std;

void getItem(string name, int count = 1, int bonus = 0) 
{
	cout << "[ȹ��] " << name
		<<count << "���� ȹ���߽��ϴ�!"
		<< "(���ʽ�: " << bonus <<"��)" << endl;
}

int main() 
{
	getItem("���� ");          
	getItem("ȸ���� ", 5);          
	getItem("������ ", 3, 1000); 

}