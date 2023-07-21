#include "map.hpp"
using namespace std;

Map::Map() {}

void Map::createNewLevel() {
    vector<string> map_template = {
        "##########",
        "#        #",
        "#        #",
        "#        #",
        "##########",
    };

    this->maps_vector.push_back(map_template);
}

void Map::changeElement(char element, int x_pos, int y_pos, int map_level){
    this->maps_vector[map_level - 1][y_pos - 1][x_pos - 1] = element;
}

char Map::getElement(int x_pos, int y_pos, int map_level){
    return this->maps_vector[map_level - 1][y_pos - 1][x_pos - 1];
}

string Map::mapStringRepresentation(int map_level){
    string map_representation = "";

    for(string rows : this->maps_vector[map_level - 1]){
        map_representation += rows + "\n";
    }

    return map_representation;
}
