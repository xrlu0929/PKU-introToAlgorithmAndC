//
//  main.cpp
//  KthLargest
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n; // total number of int
    cin >> n;
    int k; // kth largest
    cin >> k;
    int *numbers = new int[n]; // input number
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    for (int i = 0; i < n; i++) {
        int Ngreater = 0;
        for (int j = 0; j < n; j++) {
            if (numbers[j] > numbers[i]) {
                Ngreater++;
            }
        }
        
        if (Ngreater == k-1) {
            cout << numbers[i] << endl;
            return 0;
        }
    }
    
    delete [] numbers;
    
    return 0;
}
