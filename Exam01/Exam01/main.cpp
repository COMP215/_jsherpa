//
//  main.cpp
//  Exam01
//
//  Created by Jigme Sherpa on 10/24/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int maitake_ = 10;
int shiitake_ = 6;
int oyster_ = 5;
int shaggyname_= 6;
int total;
int size_of_satchel_ = 10;

int main() {
    
    ifstream fin;
    string name_of_mush;
    fin.open("mushrooms_1.csv");
    while (!fin.eof()) {
        getline(fin,name_of_mush);
        if (name_of_mush==maitake_(name_of_mush.c_str()){
            total= 5* maitake_;
            else if(name_of_mush== shiitake_){
                total= 5*shiitake_;
            }
            else if(name_of_mush==oyster_){
                total = 5*shiitake_;
            }
            else{
                total=5*shaggyname_;
            }
            cout<<"Total amount ="<<total<<endl;
            
        }
        cout<<name_of_mush<<endl;
        
            
            
    }
    return 0;
}