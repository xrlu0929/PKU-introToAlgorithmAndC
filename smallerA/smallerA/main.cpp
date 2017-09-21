//
//  main.cpp
//  smallerA
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a;
    int result = 0;
    int *n = new int[5];
    cin >> a;
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
        if (n[i] < a) {
            result = result + n[i];
        }
    }
    cout << result << endl;
    return 0;
}
