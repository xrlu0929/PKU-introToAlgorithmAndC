//
//  main.cpp
//  highestScore
//
//  Created by Xinrui Lu on 9/4/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int k;
    int score;
    int high = 0;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> score;
        if (high < score) {
            high = score;
        }
    }
    cout << high << endl;
    return 0;
}
