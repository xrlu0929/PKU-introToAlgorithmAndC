//
//  main.cpp
//  absOddEven
//
//  Created by Xinrui Lu on 9/4/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[6];//存储6个数
    int maxJ = 0;
    int minO = 100;
    
    for (int i = 0; i < 6; i++){
        cin >> a[i];
    }
    
    for (int i = 0; i < 6; i++){
        if (a[i] % 2 == 0){//寻找最小的偶数
            int tempO = a[i];
            if (tempO < minO){
                minO = tempO;
            }
        }
        
        if (a[i] % 2 != 0){//寻找最大的奇数
            int tempJ = a[i];
            if (tempJ > maxJ){
                maxJ = tempJ;
            }
        }
    }
    
    cout << abs(maxJ - minO) << endl;
    return 0;
}
