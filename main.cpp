//
//  main.cpp
//  Ek-Zekil Analysis
//
//  Created by Zach Abdallah on 1/2/23.
//
#include <iostream>
using namespace std;

int main(){
    cout << "Are gloves of passage being used?" << endl;
    string user_input;
    cin >> user_input;
    bool gloves_of_passage;
    if (user_input != "y"){
        gloves_of_passage = 0;
    }
        else{
        gloves_of_passage = 1;
    }
    
    cout << "Is trimmed masterwork spear being used?" << endl;
    cin >> user_input;
    bool TMWS;
    if (user_input != "y"){
        TMWS = 0;
    }
        else{
        TMWS = 1;
    }

    double spec_dmg = 67.5;
    if (gloves_of_passage == 1){
        spec_dmg *= 1.25;
    }
    double initial_hit = 126.0;
    double total_damage_done = initial_hit;
    int total_hits; //assume 6 for default, 9 for tmws
    if (TMWS == 0){
        total_hits = 6;
    }
        else{
        total_hits = 9;
    }
    int bleed_amount = 0;
    cout << "how many bleeds are you using? (0-5): " << endl;
    cin >> bleed_amount;
    total_hits += bleed_amount;
    cout << "Initial Hit: " << initial_hit << "%" << endl;
    for (int i = 0; i < total_hits; ++i){
        cout << "Hit " << i+ 1 << ": " << spec_dmg << "%" << endl;
        total_damage_done += spec_dmg;
        spec_dmg *= 1.05;
    }
    cout << "Total damage done: " << total_damage_done << "%" << endl;
    return 0;
}
//with both, total damage output is 1779.63%
//with only enhanced gloves of passage it is 1324.7%
//with only spear it is 1448.91%
//with neither it is 1084.96%
