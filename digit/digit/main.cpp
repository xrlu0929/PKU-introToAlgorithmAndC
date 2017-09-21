//
//  main.cpp
//  digit
//  从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。
//  Created by Xinrui Lu on 9/4/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int input;
    int output[3];
    cin >> input;
    for (int i = 0; i < 4; i++) {
        output[i] = input % 10;
        input = input / 10;
    }
    
    for (int i = 2; i >= 0; i--) {
        cout << output[i] << endl;
    }
    return 0;
}
