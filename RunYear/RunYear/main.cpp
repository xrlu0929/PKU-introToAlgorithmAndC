//
//  main.cpp
//  RunYear
//  %4
//  Created by Xinrui Lu on 8/9/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int a;
    cin >> a;
    if ( a % 4 == 0) {
        if ( a % 100 == 0 && a % 400 != 0) {
            cout << "N";
        } else {
            cout << "Y";
        }
    } else {
        cout << "N";
    }
    return 0;
}
