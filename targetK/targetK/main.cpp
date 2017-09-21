//
//  main.cpp
//  targetK
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n, k;
    // n: length
    // k: target
    cin >> n >> k;
    int * array = new int[n];
    bool found = false;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] + array[j] == k) {
                cout << "yes" << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        cout << "no" << endl;
    }
    return 0;
}
