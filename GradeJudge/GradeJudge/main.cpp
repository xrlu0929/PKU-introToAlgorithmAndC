//
//  main.cpp
//  GradeJudge
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int input;
    int grade;
    cin >> input;
    if (input < 60) {
        grade = 7;
    } else if (input < 70) {
        grade = 6;
    } else if (input < 80) {
        grade = 5;
    } else if (input < 85) {
        grade = 4;
    } else if (input < 90) {
        grade = 3;
    } else if (input < 95) {
        grade = 2;
    } else if (input <= 100) {
        grade = 1;
    } else {
        grade = 0;
    }
    cout << grade << endl;
    return 0;
}
