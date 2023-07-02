//
//  character.hpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#ifndef character_hpp
#define character_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    string name;
    string race;
    int level;
    int health;

public:
    //constructors
    Character(string name_, string race_, int level, int health);

    //getter functions
    string getName() const;
    string getRace() const;
    int getLevel() const;
    int getHealth() const;

    //setter functions
    void SetName(string name);
    void SetRace(string name);
    void SetLevel(int level);
    void SetHealth(int health);
    
    //other functions
    void virtual Print();
    void virtual Attack(Character * target) = 0;
};

#endif /* character_hpp */
