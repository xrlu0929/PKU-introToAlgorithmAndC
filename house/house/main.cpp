//
//  main.cpp
//  house
//
//  Created by Xinrui Lu on 9/20/17.
//  Copyright © 2017 Xinrui Lu. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double n;
    double k;
    while(cin>>n>>k)
    {
        double y = 1;
        
        double M = 200; // apt price
        
        double All = n; // all fund
        
        while(true)
        {
            All += n;
            M *= (1 + k/100);
            
            if(All >= M)
            {
                cout << y+1 << endl;
                break; 
            }
            
            if(y > 19)
            {
                cout << "Impossible" << endl;
                break;
            }
            
            y++;
        }
    }
    return 0;
}
