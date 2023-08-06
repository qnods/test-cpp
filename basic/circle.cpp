#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Enter Radius: " <<endl;
    double radius;
    cin >> radius;
    double circle_area = 3.14 * pow(radius,2);
    cout << circle_area << endl;

    return 0;
}