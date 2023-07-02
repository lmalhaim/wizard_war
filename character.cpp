//
//  character.cpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#include "character.h"
#include <iostream>

using namespace std;

//Constructor
Character:: Character(string n,string r,int l,int h){
    name = n;
    race = r;
    level = l;
    health = h;
}

//Setter and Getter
void Character:: SetName(string n){
    name = n;
}
void Character:: SetRace(string r){
    race = r;
}
void Character:: SetLevel(int l){
    level = l;
}
void Character:: SetHealth(int h){
    health = h;
}
string Character:: getName() const{
    return name;
}
string Character:: getRace() const{
    return race;
}
int Character:: getLevel() const{
    return level;
}
int Character:: getHealth() const{
    return health;
}

//Functions
void Character:: Print(){
    cout << "Character Status: " << endl << "Name: " << name << endl <<"Race: "<< race <<endl<< "Level: " << level <<endl<< "Health: "<<health<< endl;
}
