//
//  game.hpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>

#endif /* game_hpp */

#include <iostream>
#include <string>
#include "character.h"

using namespace std;

class Game {
private:
    Character * players[2];
    int current_turn;
    int num_of_characters;
public:
    Game();
    void RemoveCharacter(int index);
    void AddCharacter(Character * c);
    void NextTurn();
    void Print();
    int getCharacters() { return num_of_characters; };
    int getTurn() { return current_turn; };
};
