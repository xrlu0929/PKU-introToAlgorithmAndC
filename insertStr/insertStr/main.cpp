//
//  main.cpp
//  insertStr
//
//  Created by Xinrui Lu on 9/21/17.
//  Copyright © 2017 AXL. All rights reserved.
/* 有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。
 输入
 输入包括若干行，每一行为一组测试数据，格式为
 
 str substr
 
 输出
 对于每一组测试数据，输出插入之后的字符串。
 样例输入
 
 
abcab eee
12343 555
 样例输出
abceeeab
12345553
 
 提示
 这题有多组输入，请参照第二题的提示依次读入和处理每一组数据。
 
 如果使用了字符串函数，比如strlen，请包含cstring头文件 #include <cstring>。
 */


#include <iostream>
using namespace std;

int main() {
    char str[14] = {0}, substr[4] = {0};
    // 涉及插入 用char array比较好 用string反而麻烦
    while (cin >> str >> substr)
    {
        int i = 0, posBiggest = 0;
        // use i to iterate through
        char strBiggest = 0;
        while (str[i])
        {
            if (str[i] > strBiggest)
            {
                posBiggest = i;
                strBiggest = str[i];
            }
            i++;
        }
        for (int j = 9; j > posBiggest; j--)
        {
            str[j+3] = str[j];
        }
        str[posBiggest+1] = substr[0];
        str[posBiggest+2] = substr[1];
        str[posBiggest+3] = substr[2];
        cout << str << endl;
    }
    return 0;
}
