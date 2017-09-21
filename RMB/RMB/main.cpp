//
//  main.cpp
//  RMB
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //將原數字輸入
    //拆解數字除以
    //100 hundred = a/100
    // 50 fifty = ( a%100 )/ 50
    // 20 twenty = (( a%100 )% 50)/20
    // 10 ten = ((( a%100 )% 50)%20)/10
    // 5 five = (((( a%100 )% 50)%20)%10)/5
    // 1 one = ((((( a%100 )% 50)%20)%10)%5)/1
    
    int n;
    cin >> n;
    int hundred, fifty, twenty, ten, five, one;
    hundred = n / 100;
    fifty = ( n % 100 )/ 50;
    twenty = (( n % 100 ) % 50)/20;
    ten = ((( n % 100 ) % 50) % 20)/10;
    five = (((( n % 100 ) % 50) % 20) % 10)/5;
    one= ((((( n % 100 ) % 50) % 20) % 10) % 5)/1;
    cout << hundred << endl;
    cout << fifty << endl;
    cout << twenty << endl;
    cout << ten << endl;
    cout << five << endl;
    cout << one << endl;
    return 0;
}
