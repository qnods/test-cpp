#include <iostream>
#include <vector>

using namespace std;

// declare before initialize function
int triple_number(int number);
void print_triple(int number);

int triple_number(int number){
    return number * 3;
}

void print_triple(int number){
    cout << triple_number(number) << endl;
}

int main(){
    print_triple(3);
    return 0;
}