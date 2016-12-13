//
//  CoinChange.cpp
//  CoinChange
//
//  Created by jigme Sherpa on 12/7/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include "CoinChange.hpp"
#include <iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------------//
//Greedy Algorithm

int* GreedyChangeMaking(int *Coins, int n, int amount_to_change){
    // allocated array nb
    int* nb;
    nb = new int[n];
    
    int left = amount_to_change;
    for (int i = n-1; i >= 0; i--)
    {
        nb[i] = left / Coins[i];
        left = left - nb[i] * Coins[i];
    }
    return nb;
}



//---------------------------------------------------------------------------------------------------------------//

//Dynamic Programming

int* DPChangeMaking(int* Coins, int n, int amount_to_change)
{
    changeCoin **F = new changeCoin*[amount_to_change + 1]; // instance of changeStruct
    F[0] = new changeCoin(n);
    for (int i = 1; i < amount_to_change + 1; i++) // from 1 to amount
    {
        changeCoin* minSoFar = new changeCoin(n);
        minSoFar -> total = i + 1;
        minSoFar -> each[0] = i + 1;
        int j = 0; // used to traverse array of Coins
        
        while (j < n && Coins[j] <= i)
        {
            if (F[i - Coins[j]] -> total + 1 < minSoFar -> total)
            {
                for (int k = 0; k < n; k++) // k to n-1
                {
                    minSoFar -> each[k] = F[i - Coins[j]] -> each[k];
                }
                minSoFar -> each[j]++;
                minSoFar -> total = F[i - Coins[j]] -> total + 1;
            }
            j++;
        }
        F[i] = minSoFar;
    }
    int* copy_Array;
    copy_Array = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        copy_Array[i] = F[amount_to_change] -> each[i];
    }
    
    return copy_Array;
}

//---------------------------------------------------------------------------------------------------------------//

int main()
{
    int size; // size of array is number of different types of coins to be used
    int coin; // used to enter value for type of coin
    int amount_to_change = 0; // amount is used by GreedyChangeMaking to calculate change given
    int* return_Array; // used to store array returned by GreedyChangeMaking
    char choice; // used for user to choose which algorithm to run
    
    cout << "Enter which algorithm you want to run (G for GreedyChangeMaking or D for DPChangeMaking:" << endl;
    cin >> choice;
    
    if (choice == 'G' or 'g') // user input the character 'G' to run GreedyChangeMaking
    {
        cout << "Enter the number of different types of coins to be used:" << endl;
        cin >> size; // user input size of array
        
        int *Coins;
        Coins = new int[size];
        
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the value for the type of coin (in increasing order):" << endl;
            cin >> coin;
            Coins[i] = coin;
        }
        
        while (amount_to_change >= 0) // stop when user enters negative integer
        {
            cout << "Enter an amount for change. Enter a negative number when you are done." << endl;
            cin >> amount_to_change;
            
            if (amount_to_change >= 0)
            {
                return_Array = GreedyChangeMaking(Coins, size, amount_to_change); // results from GreedyChangeMaking in array A
                
                for (int i = 0; i < size; i++)
                {
                    cout << "You need " << return_Array[i] << " coins of value " << Coins[i] << "." << endl;
                }
            }
        }
    }
    else if (choice == 'D' or 'd') // user input the character 'D' to run DPChangeMaking
    {
        cout << "Enter the number of different types of coins to be used:" << endl;
        cin >> size; // user input size of array
        
        int *Coins;
        Coins = new int[size];
        
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the value for the type of coin (in increasing order):" << endl;
            cin >> coin;
            Coins[i] = coin;
        }
        
        while (amount_to_change >= 0) // stop when user enters negative integer
        {
            cout << "Enter an amount for change. Enter a negative number when you are done." << endl;
            cin >> amount_to_change;
            
            if (amount_to_change >= 0)
            {
                return_Array = DPChangeMaking(Coins, size, amount_to_change); // results from DPChangeMaking in array A
                
                for (int i = 0; i < size; i++)
                {
                    cout << "You need " << return_Array[i] << " coins of value " << Coins[i] << "." << endl;
                }
            }
        }
    }
    
    return 0;
}

