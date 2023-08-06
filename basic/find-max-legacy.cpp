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

    // keep asking until it has 5 score
    while (student_score.size() < 5) {
        cout << "Enter an integer number: ";
        int input_number;
        cin >> input_number;

        student_score.push_back(input_number);
    }

    // show max score
    cout << "based on your last 5 inputted score, the max score is: " << find_max(student_score) << endl;

    return 0;

}