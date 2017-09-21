//
//  main.cpp
//  cellAbn
//
//  Created by Xinrui Lu on 9/21/17.
//  Copyright © 2017 AXL. All rights reserved.
//
/* 描述
 
 我们拍摄的一张CT照片用一个二维数组来存储，假设数组中的每个点代表一个细胞。每个细胞的颜色用0到255之间（包括0和255）的一个整数表示。我们定义一个细胞是异常细胞，如果这个细胞的颜色值比它上下左右4个细胞的颜色值都小50以上（包括50）。数组边缘上的细胞我们不检测。现在我们的任务是，给定一个存储CT照片的二维数组，写程序统计照片中异常细胞的数目。
 
 输入
 
 第一行包含一个整数N（100>=N>2）.
 
 下面有 N 行，每行有 N 个0~255之间的整数，整数之间用空格隔开。
 
 输出
 
 输出只有一行，包含一个整数，为异常细胞的数目。
 
 样例输入
 
4
70 70 70 70
70 10 70 70
70 70 20 70
70 70 70 70
 样例输出
 
 2
*/

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int x = 0;
    cin >> n;
    int arr[n][n];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i=1; i<n-1; i++) {
        for (int j=1; j<n-1; j++) {
            int tmp = arr[i][j] + 49;
            if ((tmp < arr[i-1][j]) &&
                (tmp < arr[i+1][j]) &&
                (tmp < arr[i][j-1]) &&
                (tmp < arr[i][j+1])) {
                x++;
            }
        }
    }
    
    cout << x << endl;
    
    return 0;
}
