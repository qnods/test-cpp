#include <iostream>

using namespace std;

double temp_conversion(double c_degree){
    double f_degree =  c_degree * 1.8 + 32;

    return f_degree;
}

int main(){
    cout << "Enter temperature in celcius: " << endl;
    double celcius;
    cin >> celcius;

    double fahrenheit = temp_conversion(celcius);

    cout << "That's equivalent to " << fahrenheit << " degree fahrenheit" <<endl;
}