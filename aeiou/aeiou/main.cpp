//
//  main.cpp
//  aeiou
//
//  Created by Xinrui Lu on 9/21/17.
//  Copyright © 2017 AXL. All rights reserved.
/* 在一个字符串中找出元音字母a,e,i,o,u出现的次数。
 
 输入
 
 输入一行字符串（字符串中可能有空格，请用cin.getline(s,counts)方法把一行字符串输入到字符数组s中，其中counts是s的最大长度，这道题里面可以直接写80。），字符串长度小于80个字符。
 
 输出
 
 输出一行，依次输出a,e,i,o,u在输入字符串中出现的次数，整数之间用空格分隔。
 
 样例输入
 If so, you already have a Google Account. You can sign in on the right.
 样例输出
 5 4 3 7 3
 提示
 
 注意，只统计小写元音字母a,e,i,o,u出现的次数。
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[80];
    cin.getline(s, 80);
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for (int x=0; x < 80; x++) {
        switch (s[x]) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            default:
                break;
        }
    }
    
    cout << a << " " << e << " " << i << " " << o << " " << u << endl;
    return 0;
}
