#include <iostream>  
#include "Character.h"  
#include "Warrior.h"
#include "Wizard.h"
#include "SuperWeapon.h"
#include "Weapon.h"
#include "EnhancedWeapon.h"
#include "Armor.h"
#include "Item.h"
#include "Unit.h"
#include "Infantry.h"
#include "Vehicle.h"
using namespace std;

int main() {
    Warrior w("�Ƽ�", 100, 50);
    w.Attack();
    Wizard m("�ָ�", 70, 120);
    m.Attack();

    cout << "== ���۹��� ���� ==" << endl;
   
    SuperWeapon* sw = new SuperWeapon();

    cout << "== ���۹��� �Ҹ� ==" << endl;
 
    delete sw;

    Armor armor("��ö ����", 1500, 80, 35);
    armor.PrintInfo();

    Infantry soldier(0, 0);
    Vehicle tank(10, 10);


 
    return 0;
}