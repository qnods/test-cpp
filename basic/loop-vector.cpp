#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> fruits = {"apple", "banana", "cherry", "persimmon", "grape"};
    

    // for (int i = 0; i < fruits.size(); i++) {
    //     string fruit = fruits.at(i);

    //     if (fruit=="persimmon"){
    //         cout << "I don't like " << fruit <<endl;
    //     } else {
    //         cout << "I like " << fruit <<endl;
    //     }
        
    // }

    for (string fruit: fruits){
        cout << fruit <<endl;
    }

   return 0;
}