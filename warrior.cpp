//
//  warrior.cpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#include "warrior.h"
#include <iostream>
#include <string>

using namespace std;

Warrior:: Warrior(string n, string r, int l, int h, int s):Character(n, r, l, h){
    stamina = s;
}

void Warrior::SetStamina(int s){
    stamina = s;
}
int Warrior:: getStamina() const{
    return stamina; 
}

void Warrior::EquipWeapon(string n, int d, int sc){
    active_weapon.name = n;
    active_weapon.damage = d;
    active_weapon.stamina_cost = sc;
}
void Warrior:: Attack(Character* target2){
    if (active_weapon.name == ""){
        cout << "Warrior has no weapon!" << endl;
    }
    else{
        if (stamina < active_weapon.stamina_cost){
            cout << "Insufficient stamina points!"<<endl;
        }
        else{
            target2->SetHealth(target2->getHealth() - active_weapon.damage);
            stamina = stamina - active_weapon.stamina_cost;
            cout << getName() << " attacked " << target2->getName() << " with a " << active_weapon.name << ", dealing " << active_weapon.damage << " damage." << endl; 
        }
    }
}
void Warrior:: Print(){
    Character:: Print();
    cout << "Weapon: " << active_weapon.name << endl;
    cout << "---"<<endl;
}
