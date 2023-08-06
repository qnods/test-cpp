#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// function to find max score. Max element is part of algorithm library
int find_max(vector<int> score_list){
    auto max_value = max_element(score_list.begin(), score_list.end());

    return *max_value;
}

int main(){

    // create empty vector
    vector<int> student_score = {23, 67, 56, 43, 88};

    int maxScore =  find_max(student_score);

    cout << maxScore << endl;

    return 0;

}