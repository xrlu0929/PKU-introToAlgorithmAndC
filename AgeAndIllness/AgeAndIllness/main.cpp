//
//  main.cpp
//  AgeAndIllness
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // patient number
    int n;
    cin >> n;
    // age
    int under18 = 0;
    int under35 = 0;
    int under60 = 0;
    int above60 = 0; //including 60
    for (int i = 0; i < n; i++) {
        int patient;
        cin >> patient;
        if (patient >= 1 && patient <= 18) {
            under18++;
        } else if (patient <= 35) {
            under35++;
        } else if (patient <= 60) {
            under60++;
        } else if (patient > 60){
            above60++;
        }
    }
    
    
    cout << fixed << setprecision(2);
    cout << "1-18: " << (double)under18 / n * 100.0<<"%" << endl;
    cout << "19-35: " << (double)under35 / n * 100.0 <<"%" << endl;
    cout << "36-60: " << (double)under60 / n * 100.0 <<"%" << endl;
    cout << "60-: " << (double)above60 / n * 100.0 <<"%" << endl;
    
    return 0;
}
