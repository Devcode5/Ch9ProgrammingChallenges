//
//  TestScores1.cpp
//  Ch9ProgrammingChallenges
//
//  Created by Ahmad Farid Hamdard on 4/16/25.
//

#include "TestScores1.hpp"
#include <iostream>
using namespace std;

//dynamically allocates an array large enough to hold a user defined number of test scores
//once all the scores are entered, the array should be passed to a function that sorts them in ascending order.
//Another function should be called that calculates the average score.
//The program should display the sorted list of scores and average with appropriate headings.
//Use pointer notation rather than array notation whenever possible
//Input validation: do not accept negative numbers for test scores.

//int main(){
//    //const double SIZE=0;
//    int numScores;
//    double *scores = new double[numScores];
//    
//    
//    
//    void sortScores(double *scores, int size){
//        for(int i =0; i< size; ++i ){
//            
//        }
//        
//    }
//    sortScores(scores, numScores);
//    
//    
//    
//    
//}

int main() {
    int numScores;
    
    // Ask the user for the number of test scores
    cout << "Enter the number of test scores: ";
    cin >> numScores;
    
    while (numScores <= 0) {
        cout << "Please enter a positive number: ";
        cin >> numScores;
    }
    int* testScores = new int[numScores];
    
    // Get test scores from the user with input validation
    for (int i = 0; i < numScores; ++i) {
        cout << "Enter score #" << (i + 1) << ": ";
        cin >> *(testScores + i);
        
        while (*(testScores + i) < 0) {
            cout << "Score cannot be negative. Re-enter score #" << (i + 1) << ": ";
            cin >> *(testScores + i);
        }
    }
}
