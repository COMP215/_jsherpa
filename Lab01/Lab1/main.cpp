//
//  main.cpp
//  Lab1
//
//  Created by Jigme Sherpa on 9/12/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "ctime"
#include <istream>
#include <stdio.h>
using namespace std;



const string kletters ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";



int string_Length;
int number_of_words;

const int MAX_Number = 10000;
const int num_times = 3;
string letterlist[MAX_Number];
char genRandom()  // Random string generator function.
{
    return kletters[rand() % kletters.length()];
}
ofstream outfile("outfile.txt");
long PartOne(){
    
    cout<<"How Long do you want the string to be?"<<endl;
    cin>>string_Length;
    cout<<"How many numbers of words do you want?"<<endl;
    cin>>number_of_words;
    for(long j=0;j<number_of_words; j++)
    {
        string words_to_hold= "";
        for(long z=0; z < string_Length; z++)
        {
            words_to_hold= words_to_hold+genRandom();
            
        }
        cout<<words_to_hold<<endl;
        // letterlist[j]= word;
        outfile<<words_to_hold<<endl;
        
        
    }
    outfile.close();
    return number_of_words;
}
void PartTwo(){
    long numberofwords= PartOne();
    string file_name= "outfile.txt";
    fstream ifs(file_name.c_str());
    string* lines_to_get= new string[numberofwords];
    
    
    cout<<"----------------------------"<<endl;
    cout<<"Unsorted Strings"<<endl;
    for (long i=0; i<numberofwords; i++) {
        getline(ifs,lines_to_get[i]);
        cout<<lines_to_get[i]<<endl;
        cout<<i<<endl;
        
    }
    
    cout<<"----------------------------"<<endl;
    cout<<"Sorted strings"<<endl;
    sort(lines_to_get, lines_to_get+numberofwords);
    for (long i=0; i<numberofwords; i++) {
        cout<<lines_to_get[i]<<endl;
        //ifs<<lines[i]<<endl;
    }
    
    cout<<"---------------------------------"<<endl;
    /* for (short i=0; i <num_times; i++) {
     sort(lines, lines+numberofwords);
     cout<<lines[i]<<endl;
     }*/
    
}

int main()
{
    
    PartTwo();
    
    return 0;
    
}

