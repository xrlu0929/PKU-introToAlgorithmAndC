//
//  main.cpp
//  bikeAndWalk
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//  在北大校园里,没有自行车,上课办事会很不方便.但实际上,并非去办任何事情都是骑车快,
//  因为骑车总要找车、开锁、停车、锁车等,这要耽误一些时间.假设找到自行车,开锁并车上自行车的时间为27秒;停车锁车的时间为23秒;
//  步行每秒行走1.2米,骑车每秒行走3.0米.
//  请判断走不同的距离去办事,是骑车快还是走路快.


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double Vwalk = 1.2;
    double Vbike = 3.0;
    double Obike = 27 + 23;
    
    for (int i = 0; i < n; i++) {
        int distance;
        cin >> distance;
        double bike = distance / Vbike + Obike;
        double walk = distance / Vwalk;
        if (bike > walk) {
            cout << "Walk" << endl;
        } else if (bike < walk) {
            cout << "Bike" << endl;
        } else {
            cout << "All" << endl;
        }
        
    }
    
    return 0;
    
}
