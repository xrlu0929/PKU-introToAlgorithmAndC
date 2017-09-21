//
//  main.cpp
//  BioLab
//  有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，A亚种繁殖能力非常强，B亚种的繁殖能力很弱。在一次为时一个小时的细菌繁殖实验中，实验员由于疏忽把细菌培养皿搞乱了，请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。

//  细菌繁殖能力（繁殖率）的量化标准为一个小时内细菌数量增长的比例（繁殖率 = 一小时后细菌数量 / 原本细菌数量）。

//  两个亚种繁殖能力差异很大，这意味着对于任意两个同种细菌培养皿的繁殖率的测量值之间的差异要小于任意两个异种细菌培养皿繁殖率的测量值之间的差异。
//  Created by Xinrui Lu on 9/3/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n; // n 为细菌皿数量
    // id记录细菌编号，rate记录细菌繁殖率
    int id[100];
    double rate[100];
    
    cin >> n;
    // calculate rate for each 细菌皿
    for (int i = 0; i < n; i++) {
        int initial, end;
        cin >> id[i] >> initial >> end;
        rate[i] = (double) end/initial;
    }
    
    // sort them according to rate
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (rate[j + 1] > rate[j]) {
                int tmpID = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tmpID;
                
                double tmpRate = rate[j];
                rate[j] = rate[j + 1];
                rate[j + 1] = tmpRate;
            }
        }
    }
    
    // accord the biggest diff
    double maxDiff = 0;
    // and its index
    int maxDiffIndex = 0;
    for (int i = 0; i < n - 1; i++) {
        double diff = rate[i] - rate[i+1];
        if (maxDiff < diff) {
            maxDiff = diff;
            maxDiffIndex = i;
        }
    }
    
    // higher rate group of bacteria
    cout << maxDiffIndex + 1 << endl;
    for (int i = maxDiffIndex; i >= 0; i--) {
        cout << id[i] << endl;
    }
    
    // lower rate group of bacteria
    cout << n - maxDiffIndex - 1 << endl;
    for (int i = n - 1; i >= maxDiffIndex + 1; i--) {
        cout << id[i] << endl;
    }
    
    return 0;
}
