#pragma once  
#include <iostream>  
#include "EnhancedWeapon.h"

class SuperWeapon : public EnhancedWeapon
{  
public:  
    SuperWeapon() {  
        std::cout << "SuperWeapon ������" << std::endl;  
    }  

    ~SuperWeapon() {  
        std::cout << "SuperWeapon �Ҹ���" << std::endl;  
    }  
};
