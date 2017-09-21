//
//  main.cpp
//  longestWord
//
//  Created by Xinrui Lu on 9/21/17.
//  Copyright © 2017 AXL. All rights reserved.
/* 描述
 
 一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式
 
 输入
 一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式
 
 输出
 该句子中最长的单词。如果多于一个，则输出第一个
 
 样例输入
 第一组
 I am a student of Peking University.
 第二组
 Hello world.
 第一组
 University
 第二组
 Hello
*/

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    char sentence[500] = {0};
    char word[50] = {0};
    cin.getline(sentence, 500);
    int j = 0, sizeWord = 0;
    while (i < 500 && sentence[i] != '.') {
        if (sentence[i] == ' ') {
            if (j > sizeWord) {
                sizeWord = j;
                for (int k = 0; k < j; k++) {
                    word[k] = sentence[i - j + k];
                }
            }
            j = 0; // 清空
        } else {
            j++;
        }
        i++;
    }
    
    if (sentence[i] == '.') {
        if (j > sizeWord) {
            for (int k = 0; k < j; k++) {
                word[k] = sentence[i - j + k];
            }
        }
    }
    cout << word << endl;
    return 0;
}
