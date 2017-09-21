//
//  main.cpp
//  reverse
// 将一个数组中的值按逆序重新存放。例如，原来的顺序为8,6,5,4,1。要求改为1,4,5,6,8。
//  Created by Xinrui Lu on 9/3/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;
int a[100];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
        cin >> a[i];
    while (n--) { //常用的倒序计数循环，等价于while(n-->0)
        cout << a[n];
        if (n > 0) cout << " "; //如果不是最后一个数那么就要用空格分隔开
    }
    return 0;
}
