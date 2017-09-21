//
//  main.cpp
//  oneNum
//  给定一个十进制整数N，求其对应2进制数中1的个数
//  Created by Xinrui Lu on 9/3/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int line;

    cin >> line;
    for (int i = 0; i < line; i++) {
        int number;
        int count = 0;
        cin >> number;
        while (number > 0) {
            count = count + number % 2;
            number = number / 2;
        }
        cout << count << endl;
    }
    return 0;
}
