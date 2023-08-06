#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    vector<double> number_list =  {65.9, 102.5, 94.76, 77.7};
    double sum = accumulate(number_list.begin(), number_list.end(), 0.0);
    int element_count = number_list.size();

    double average = sum / element_count;

    cout << "average is: " << average << endl;

    return 0;
}