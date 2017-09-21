//
//  main.cpp
//  elephantDrink
//  一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。
//  Created by Xinrui Lu on 9/4/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
double ceil(double arg);

int main() {
    int target = 20 * 1000;
    int h, r;
    double const pi = 3.14159;
    cin >> h >> r;
    double bucket = r * r *pi * h;
    int res = ceil(target / bucket);
    
    cout << res << endl;
    return 0;
}
