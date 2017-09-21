//
//  main.cpp
//  strcmp
//
//  Created by Xinrui Lu on 9/21/17.
//  Copyright © 2017 AXL. All rights reserved.
//
/* 一般我们用strcmp可比较两个字符串的大小，比较方法为对两个字符串从前往后逐个字符相比较（按ASCII码值大小比较），直到出现不同的字符或遇到'\0'为止。如果全部字符都相同，则认为相同；如果出现不相同的字符，则以第一个不相同的字符的比较结果为准。但在有些时候，我们比较字符串的大小时，希望忽略字母的大小，例如"Hello"和"hello"在忽略字母大小写时是相等的。请写一个程序，实现对两个字符串进行忽略字母大小写的大小比较。
 
 输入
 输入为两行，每行一个字符串，共两个字符串。（请用cin.getline(s,80)录入每行字符串）（每个字符串长度都小于80）
 
 输出
 如果第一个字符串比第二个字符串小，输出一个字符"<"
 如果第一个字符串比第二个字符串大，输出一个字符">"
 如果两个字符串相等，输出一个字符"="
 
 样例输入
 第一组
 Hello
 hello
 第二组
 hello
 HI
 第三组
 hello
 HELL
 样例输出
 第一组
 =
 第二组
 <
 第三组
 >
 提示
 
 strcmp的实现如下，结果用result保存。
 int i = 0;
 char result;
 while (s1[i] != '\0' && (s1[i] == s2[i])){
 i++;
 }
 if (s1[i] > s2[i]) {
 result = '>';
 } else if (s1[i] < s2[i]) {
 result = '<';
 } else{
 result = '=';
 }
*/

#include <iostream>
using namespace std;

int main()
{
    char s1[80] = {0};
    char s2[80] = {0};
    cin.getline(s1, 80);
    cin.getline(s2, 80);
    int i = 0;
    while(i < 80 &&(s1[i] != 0 || s2[i] != 0))
    {
        // 统一为大写
        if (s1[i] >= 97 && s1[i] <=122)
        {
            s1[i] -= 32;
        }
        if (s2[i] >= 97&& s2[i] <=122)
        {
            s2[i] -= 32;
        }
        
        if (s1[i] == s2[i])
        {
            i++;
        }
        else if (s1[i] > s2[i])
        {
            cout << ">" << endl;
            return 0;
        }
        else if (s1[i] < s2[i])
        {
            cout << "<" << endl;
            return 0;
        }
    }
    cout << "=" << endl;
    return 0;
}
