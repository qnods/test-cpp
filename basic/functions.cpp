#include <iostream>

// create custom namespace
namespace multiplier {
        int triple_number(int number) 
            {
                return number * 3;
            }

        int double_number(int number) 
            {
                return number * 3;
            }

}
/*
Lorem ipsum dolor sit amet, consectetur adipiscing elit. 
Mauris ante nunc, pretium vel tristique non, varius ac enim. 
Nulla ut ipsum lorem. Quisque eleifend diam nunc, at sodales purus tincidunt id. 
Cras et rhoncus risus. 
Integer rutrum neque non nunc viverra, sit amet molestie lorem tincidunt. 
Etiam eget dapibus lacus. Integer eu egestas lectus. Curabitur pharetra ipsum tincidunt elementum dapibus.
*/
// using std namespace
using namespace std;

// sample function
void say_hello(string user_name, int user_age) {
    cout << "Hello " << user_name
         << ", your age is " << user_age << " years old" << endl;
}


void print_triple_number (int number) {
    cout << multiplier::triple_number(number) << endl;
}


// main function
int main(){

    say_hello("Herbert", 40);
    say_hello("Jane", 30);
    say_hello("John", 36);

    print_triple_number(200);

    return 0;
}