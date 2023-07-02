//
//  main.cpp
//  real hw6
//
//  Created by Lynn on 11/3/19.
//  Copyright © 2019 1540446. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>


#include "warrior.h"
#include "wizard.h"
#include "game.h"

using namespace std;


int main()
{
    string filename;
    cin >> filename;
    ifstream input(filename);

    Game game;
    if (!input.is_open()) {
        cout << "file not found!" << endl;
        exit(0);
    }
    string character,name,race, temp;
    int nofspells, stamana, health, level;
    weapon w;
    spell s;
    //TODO: read the file, make characters and call game.AddCharacter. Do not modify other portions of main
    
    getline(input, character);
    if (character == "Warrior"){
            getline(input, name);
            getline(input, race);
            input >> level >> health >> stamana;
            getline(input, temp);
        //input.ignore(250, '\n');
            getline(input, w.name);
            input >> w.damage >> w.stamina_cost;
            Warrior* wr = new Warrior(name,race,level ,health,stamana); //Create new warrior class
            
            wr->EquipWeapon(w.name, w.damage, w.stamina_cost);
            
            game.AddCharacter(wr);
            getline(input, temp);
            getline(input, temp);
            

    }

    getline(input, character);
    if(character == "Wizard"){
            getline(input,name);
            getline(input, race);
            input >> level>> health>> stamana >> nofspells;

            Wizard* wz = new Wizard(name, race, level, health, stamana);
            for(int i = 0; i < nofspells; i++){
                getline(input, temp);
                getline(input, s.name);
                input  >>s.damage >> s.mana_cost;
                wz->AddSpell(s.name,s.damage,s.mana_cost);
            }
            game.AddCharacter(wz);
            input.get();

    }
    
    
    
    int option = -1;
    do {
        cout << "Please choose an option: " << endl
            << "1 - Next Turn" << endl
            << "2 - Print All Characters" << endl
            << "3 - Exit" << endl;

        cin >> option;
        cout << endl;

        switch (option) {
            case 1: game.NextTurn(); break;
            case 2: game.Print(); break;
            case 3: exit(0);
            default:
                cout << "Invalid Option!" << endl;
        }
        cout << endl;
    }while (option != 3);

    return 0;
}
