//
//  main.cpp
//  lab1
//
//  Created by Jigme Sherpa on 8/30/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string>
#include "ctime"
#include <istream>
#include <stdio.h>
using namespace std;



const string letters ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";



int stringLength;
int numberofwords;

const int MAX_Number = 10000;
const int num_times = 3;
string letterlist[MAX_Number];
char genRandom()  // Random string generator function.
{
    return letters[rand() % letters.length()];
}
ofstream outfile("outfile.txt");
long partOne(){
    
    cout<<"How Long do you want the string to be?"<<endl;
    cin>>stringLength;
    cout<<"How many numbers of words do you want?"<<endl;
    cin>>numberofwords;
    for(long j=0;j<numberofwords; j++)
    {
        string word= "";
        for(long z=0; z < stringLength; z++)
        {
            word=word+genRandom();
            
        }
        cout<<word<<endl;
       // letterlist[j]= word;
        outfile<<word<<endl;
        
        
    }
    outfile.close();
    return numberofwords;
}
void partTwo(){
    long numberofwords= partOne();
    string filename= "outfile.txt";
    fstream ifs(filename.c_str());
    string* lines= new string[numberofwords];
    
    
    cout<<"----------------------------"<<endl;
    cout<<"Unsorted Strings"<<endl;
    for (long i=0; i<numberofwords; i++) {
        getline(ifs,lines[i]);
        cout<<lines[i]<<endl;
        cout<<i<<endl;
    
    }
   
    cout<<"----------------------------"<<endl;
    cout<<"Sorted strings"<<endl;
    sort(lines, lines+numberofwords);
    for (long i=0; i<numberofwords; i++) {
        cout<<lines[i]<<endl;
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
        
        partTwo();
        
        return 0;
        
    }

   