//
//  wizard.cpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#include <iostream>
#include <string>
#include "wizard.h"


using namespace std;

Wizard:: Wizard(string n, string r, int l, int h, int m): Character(n, r, l, h){
    mana = m;
}

void Wizard:: SetMana(int m){
    mana = m;
}
int Wizard:: getMana() const{
    return mana;
}

int Wizard:: AddSpell(string n, int d, int m){
    if (numOfSpells >= 10){
        cout << "Spell limits reached!" << endl;
    }
    else{
        spells[numOfSpells].name = n;
        spells[numOfSpells].damage = d;
        spells[numOfSpells].mana_cost = m;
        numOfSpells++;
    }
    return numOfSpells;
}

void Wizard:: Attack(Character* target3){
    if (numOfSpells == 0){
        cout << "The wizard has no spells!" << endl;
    }
    else{
        if (mana < spells[0].mana_cost){
            cout << "Insufficient mana points!"<< endl;
            
        }
        else{
            target3->SetHealth(target3->getHealth()-spells[0].damage);
            mana = mana - spells[0].mana_cost;
            cout << getName() << " attacked " << target3->getName() << " with spell: " << spells[0].name << ", dealing " << spells[0].damage << " damage." << endl;
        }
    }
}
void Wizard:: Attack(int spellnum, Character* target3){
    if ((spellnum < 0) or (spellnum >= numOfSpells)){
        cout << "Invalid spell number!"<<endl;
    }
    else{
        if (numOfSpells == 0){
            cout << "The wizard has no spells!" << endl;
        }
        else{
            if (mana < spells[spellnum].mana_cost){
                cout << "Insufficient mana points!"<< endl;
                
            }
            else{
                target3->SetHealth(target3->getHealth()-spells[spellnum].damage);
                mana = mana - spells[spellnum].mana_cost;
                cout << getName() << " attacked " << target3->getName() << " with spell: " << spells[spellnum].name << ", dealing " << spells[spellnum].damage << " damage." << endl;
            }
        }
    }
}

void Wizard:: Print(){
    Character:: Print();
    cout << "Spells: "<< endl;
        for(int i = 0; i < numOfSpells; i++){
            cout << spells[i].name << endl;
        }
    cout << "---"<<endl;
}
