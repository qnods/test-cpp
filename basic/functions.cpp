#include <iostream>

using namespace std;

void say_hello(string user_name, int user_age) {
    cout << "Hello " << user_name
         << ", your age is " << user_age << " years old" << endl;
}

int triple_number(int number) {

    return number * 3;
}

void print_triple_number (int number) {
    cout << triple_number(number) << endl;
}



int main(){

    say_hello("Herbert", 40);
    say_hello("Jane", 30);
    say_hello("John", 36);

    print_triple_number(200);

    return 0;
}