#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;

class Pokemon {
// can be accessed inside and outside class
public:
    Pokemon(string name, int hp);

    void throw_pokeball();
    void check_hp();

// can only be accessed inside class
private:
    string name;
    int hp;
    double hp_percentage;
};



#endif