#include <iostream>
#include <vector>

using namespace std;

// function to find max score. 
int find_max(vector<int> number_list){

    // declare max_number variable
    int max_number = 0;

    // loop to find the max
    for (int number: number_list){
        int current_number  = number;

        if (current_number>max_number){
            max_number = current_number;
        }
    }

    return max_number;
}

int main(){

    // create empty vector
    vector<int> student_score;

    int current_number = 1;



    // keep asking until last value is zero
    while (current_number > 0) {
        cout << "Enter an integer number: ";
        int input_number;
        cin >> input_number;

        student_score.push_back(input_number);

        current_number = input_number;
    }

    // show max score
    cout << "based on your last " 
         << student_score.size() 
         << " inputted score, the max score is: " 
         << find_max(student_score) << endl;

    return 0;

}