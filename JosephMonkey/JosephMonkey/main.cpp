//
//  main.cpp
//  JosephMonkey
//
//  Created by Xinrui Lu on 9/4/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

// maxium 300 monkeys
// to save next monkey's number
int succedent[300];
// save the monkey before this index
int precedent[300];

int main() {
    // int n : total monkey number
    // int m : count number
    int n, m;
    while (true) {
        cin >> n >> m;
        // n: amount of monkeys
        // m: to go out
        if (n == 0 && m == 0) {
            break;
        }
        // finish counting circle
        for (int i = 0; i < n - 1; i++) {
            succedent[i] = i + 1;
            // right of the equal sign is the monkey's number
            precedent[i + 1] = i;
        }
        succedent[n - 1] = 0;
        precedent[0] = n - 1;
        
        // current index of monkey
        int current = 0;
        while (true) {
            // succedent[m-1] is the monkey to go out
            for (int count = 0; count < m - 1; count++) {
                current = succedent[current];
            }
            
            int pre = precedent[current];
            int suc = succedent[current];
            // let current monkey to go out
            // 有点像linkedlist的做法
            succedent[pre] = suc;
            precedent[suc] = pre;
            if (pre == suc) {
                cout << pre + 1 << endl;
                break;
            }
            // going to next loop
            current = suc;
        }
    }
    
    return 0;
}
