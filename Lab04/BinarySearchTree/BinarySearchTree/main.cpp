//
//  main.cpp
//  BinarySearchTree
//
//  Created by Jigme Sherpa on 9/21/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include <iostream>
#include "binarysearchtree.hpp"
#include <fstream>
using namespace std;
int main() {
    
    BinarySearchTree* people_names = new BinarySearchTree();
    people_names->Insert("gousie");
    people_names->Insert("bloch");
    people_names->Insert("armstrong");
    people_names->Insert("decoste");
    ifstream fin;
    string the_word;
    string the_sorted_words;
    fin.open("foowords.txt");
    while (!fin.eof()) {
        getline(fin,the_word);
        people_names->Insert(the_word);
        
    }
    string name="bossed";
    if(people_names->Search(name)){
        cout<<name<<endl<<"String Found!"<<endl;
    }
    else{
        cout<<name<<endl<<"String not found"<<endl;
        
    }
    
    return 0;
}