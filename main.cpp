#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

string allVectorInString (vector<string> vector_of_string) {
    string vector_in_string = "";

    for(int i = 0; i < vector_of_string.size(); i++) {
        vector_in_string += vector_of_string[i] + "\n";
    }

    return vector_in_string;
}

void insertElement (char element, int x_pos, int y_pos, vector<string>& map) {
    map[x_pos][y_pos] = element;
}

int main() {
    bool game_running = true;
    char user_key_action = ' ';

    // samples // 
    vector<string> map_vector = {
        "#######",
        "#     #",
        "#     #",
        "#     #",
        "#######",
    };

    insertElement('@', 1, 1, map_vector);
    string map_string = allVectorInString(map_vector);

    // samples end // 

    while(game_running) {
        cout << "\033[2J\033[1:1H";

        // handle user input
        if(user_key_action == 'q') {
            game_running = false;
        }

        // update game logic 
        
        // render game objects 
        cout << map_string;

        // get user input 
        user_key_action = getchar();
    }

    return 0;
}

/* 
static constexpr const char* SAMPLE_MAP[] = {
    "##############################################",
    "#######################      #################",
    "#####################    #     ###############",
    "######################  ###        ###########",
    "##################      #####             ####",
    "################       ########    ###### ####",
    "###############      #################### ####",
    "################    ######                  ##",
    "########   #######  ######   #     #     #  ##",
    "########   ######      ###                  ##",
    "########                                    ##",
    "####       ######      ###   #     #     #  ##",
    "#### ###   ########## ####                  ##",
    "#### ###   ##########   ###########=##########",
    "#### ##################   #####          #####",
    "#### ###             #### #####          #####",
    "####           #     ####                #####",
    "########       #     #### #####          #####",
    "########       #####      ####################",
    "##############################################",
};

*/
