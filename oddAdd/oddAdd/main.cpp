
//  oddAdd.cpp
//  week5
//
//  Created by Xinrui Lu on 8/10/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;
bool isOdd(int);


int main() {
    int m, n, result = 0;

    cin >> m >> n;
    
    if (isOdd(m) && isOdd(n)) {
        result = (m + n) * ((n - m + 2)/2) / 2;
    } else if (isOdd(m) && !isOdd(n)){
        result = (m + n - 1) * ((n - m + 1)/2) / 2;
    } else if (!isOdd(m) && isOdd(n)) {
        result = (m + 1 + n) * ((n - m + 1)/2) / 2;
    } else if  (!isOdd(m) && !isOdd(n)) {
        result = (m + 1 + n - 1) * ((n - m + 1)/2) / 2;
    }
    cout << result << endl;
    return 0;
}

bool isOdd(int x) {
    bool res = true;
    if (x % 2 == 1) {
        res = true;
    } else {
        res = false;
    }
    return res;
}
