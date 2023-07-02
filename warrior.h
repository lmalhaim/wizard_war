//
//  warrior.hpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//



#include <stdio.h>

#include <iostream>
#include <string>
#include "character.h"

using namespace std;

struct weapon {
    string name = "";
    int damage = 0;
    int stamina_cost = 0;
};

//Declare Warrior class
class Warrior: public Character{
private:
    int stamina;
    weapon active_weapon;
public:
    Warrior(string n, string r, int l, int h, int stamina);
    
    void SetStamina(int s);
    int getStamina() const;
    
    void EquipWeapon(string n, int damage, int staminacost);//creates new weapon
    void Attack(Character* target2);
    void Print();
    
};

