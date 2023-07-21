#ifndef MAP_H
#define MAP_H

#include <string>
#include <vector>
using namespace std;

class Map {
private:
    vector< vector<string> > maps_vector = {};

public:
    Map();
    void createNewLevel();
    void changeElement(char element, int x_pos, int y_pos, int map_level);
    char getElement(int x_pos, int y_pos, int map_level);
    string mapStringRepresentation(int map_level);
};

#endif
