//
//  main.cpp
//  357
//
//  Created by Xinrui Lu on 8/10/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
/* 描述
 
 输入一个整数，判断它能否被3，5，7整除，并输出以下信息：
 
 1、能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；
 
 2、能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者 3 7或者5 7,中间用空格分隔）
 
 3、能被其中一个数整除（输出这个除数）
 
 4、不能被任何数整除；（输出小写字符'n',不包括单引号)
 */

#include <iostream>
using namespace std;

int main()
{
    int num;
    while (cin >> num) {
        if (num % 3 == 0)
            cout << 3 << " ";
        if (num % 5 == 0)
            cout << 5 << " ";
        if (num % 7 == 0)
            cout << 7 << " ";
        if (num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
            cout << "n" << endl;
        cout << endl;
    }
}