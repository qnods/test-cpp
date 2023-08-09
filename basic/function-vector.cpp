#include <iostream>
#include <vector>

using namespace std;

// ampersand (&) is used to allow modifying the actual list.
// otherwise it will create a copy and just modiy the copy of the list
// create copy is inefficient on long list

void add_zeros_to_list(vector<int> &number_list, int zeros_number){
    for(int i =0; i < zeros_number; i++){
        number_list.push_back(0);
    }

    cout << "B.Size of number list: " << number_list.size() << endl;
}

// combination of ampersand and const is used to protect vector from accidentally being modified

void print_all_elements(const vector<int> &list){
    for(int number: list){
        cout << number <<endl;
    }
}

int main(){
    vector<int> list={5,5,4};
    cout << "A.Size of number list: " << list.size() << endl;
    add_zeros_to_list(list,4);
    cout << "C.Size of number list: " << list.size() << endl;

    print_all_elements(list);
    return 0;
}