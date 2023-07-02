//
//  game.cpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#include "game.h"
#include <iostream>
#include <string>

using namespace std;


    
Game:: Game(){
    current_turn = 0;
    num_of_characters = 0;
}
void Game:: RemoveCharacter(int index){
    if ((index != 0) and (index != 1)){
        cout << "Invalid Index!" << endl;
    }
    else{
        if (players[index] != nullptr){
            players[index] = nullptr;
            num_of_characters--;
        }
    }
}
void Game:: AddCharacter(Character * c){
    if (num_of_characters >= 2){
        cout <<"Character limit reached, please wait for the next game!"<<endl;
    }
    else{
        players[num_of_characters] = c;
        num_of_characters++;
    }
}
void Game:: NextTurn(){
    if (num_of_characters != 2){
        cout << "Need more players!" << endl;
    }
    else{
        players[0]->Attack(players[1]);
        if (players[1]->getHealth() < 0){
            cout <<players[0]->getName()<<" wins!"<<endl;
            return;
        }
        else{
            players[1]->Attack(players[0]);
            if (players[0]->getHealth() < 0){
                cout << players[1]->getName() <<" wins!"<<endl;
            }
            else{
                return;
            }
        }
    }
}
void Game:: Print(){
    players[0]->Print();
    players[1]->Print();
}
