//
//  main.cpp
//  wormApple
//  你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
//  Created by Xinrui Lu on 9/4/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int apple, worm, hour;
    cin >> apple >> worm >> hour;
    if (hour % worm ==0){
        cout<<apple - hour/ worm<<endl;
    }else{
        if (apple - hour/ worm < 0){
            cout << 0 << endl;
        } else {
            cout<<apple - hour/ worm - 1<<endl;
        }
        
    }
    return 0;
}
