//
//  CoinChange.hpp
//  CoinChange
//
//  Created by jigme Sherpa on 12/7/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#ifndef CoinChange_hpp
#define CoinChange_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class changeCoin
{
public:
    int total; // total number of coins
    int *each; // each coin
    changeCoin(int n) // constructor
    {
        total = 0;
        each = new int[n]; // allocate array each
        for (int i = 0; i < n-1; i++)
        {
            each[i] = 0; // set all locations to 0
        }
    }
};
#endif /* CoinChange_hpp */

