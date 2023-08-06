#include <iostream>

using namespace std;

int main(){
    // if this part omitted true/false will be printed 1/0 instead
    cout << boolalpha; 

    // code start here
    int user_age = 15;

    if (user_age >= 18) {
        cout << "adult" << endl;
    } else if (user_age >=12) {
        cout << "teens" << endl;
    } else {
        cout << "kids" << endl;
    }

    return 0;
}