//
//  wizard.hpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#ifndef wizard_hpp
#define wizard_hpp

#include <stdio.h>

#endif /* wizard_hpp */

#include <iostream>
#include <string>
#include "character.h"
using namespace std;

struct spell {
    string name;
    int damage;
    int mana_cost;
};

//Declare class Wizard
class Wizard: public Character{
private:
    int mana = 0;
    spell spells[10];
    int numOfSpells = 0;
public:
    Wizard(string n, string r, int l, int h, int m);
    
    void SetMana(int m);
    int getMana() const;
    
    int AddSpell(string n, int d, int m);
    
    void Attack(Character* target3);
    void Attack(int spellnum, Character* target3);
    void Print();
    
};

