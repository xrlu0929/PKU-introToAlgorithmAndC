//
//  main.cpp
//  intNum
//  给定k（1<k<100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
//  Created by Xinrui Lu on 9/3/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    int n1 = 0, n5 = 0, n10 = 0;
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        if (n == 1) {
            n1++;
        } else if (n == 5) {
            n5++;
        } else if (n == 10) {
            n10++;
        }
    }
    
    cout << n1 << endl;
    cout << n5 << endl;
    cout << n10 << endl;
    return 0;
}
