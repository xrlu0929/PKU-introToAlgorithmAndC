//
//  oddAdd.cpp
//  week5
//
//  Created by Xinrui Lu on 8/10/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int m, n;
    int result;
    cin >> m >> n;
    if (m <= n && n <= 300) {
        if (m % 2 == 0) {
            m = m + 1;
        }
        if (n % 2 == 0) {
            n = n - 1;
        }
        int i = 0;
        if ((m - n) % 2 == 0){
            i = (m - n) / 2;
        } else {
            i = (m - n) / 2 + 1;
        }
        result = (m + n) * i /2;
    }
    cout << result << endl;
    return 0;
}
