#include "Wizard.h"

Wizard::Wizard(std::string name, int hp,int mana)
	:Character(name,hp),mana(mana)
{ 
	cout <<"������ ����: "<< name << "(Hp: " << hp << ", ����: " << mana << ")" << endl;

}


void Wizard::Attack() 
{
	
	cout << name << "�� �������� �����մϴ�!" << endl;
}
