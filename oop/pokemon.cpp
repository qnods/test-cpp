    #include "pokemon.hpp"

    Pokemon::Pokemon(string name, int hp):
       name(name), hp (hp), hp_percentage(0.25)
    {

    }

    void Pokemon::throw_pokeball(){
        cout << "I choose you,  "
             << name
             << " !!!"
             << endl;
    }

    void Pokemon:: check_hp(){
        double current_hp = hp_percentage * hp;

        cout << "Oh no, "
             << name
             << "'s HP is left at "
             << current_hp
             << "!!!"
             << endl;
    }
