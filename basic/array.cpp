#include <iostream>
#include <vector>

using namespace std;

int main(){

    // normal list
    double temperature_list[4] = { 78.2, 35.8, 23.9, 99.2};
    cout << temperature_list[2] << endl;
    temperature_list[2] = 125.25;
    cout << temperature_list[2] << endl;

    //vector
    vector<double> temperature_vector = {25.8, 99.9, 55.8};
    cout << temperature_vector.at(0) << endl;
    temperature_vector.at(0) = 18.8;
    cout << temperature_vector.at(0) << endl;
    temperature_vector.push_back(88.7);
    cout << temperature_vector.size() << endl;

    return 0;
}