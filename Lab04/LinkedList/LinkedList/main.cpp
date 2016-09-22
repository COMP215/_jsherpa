//
//  main.cpp
//  LinkedList
//
//  Created by Jigme Sherpa on 9/21/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//



#include <iostream>
#include "linkedlist.hpp"
using namespace std;

int main() {
    
    LinkedList* people_names = new LinkedList();
    people_names->Insert("gousie");
    people_names->Insert("bloch");
    people_names->Insert("armstrong");
    
    
    people_names->Print_list();
    cout <<"string found="<< people_names->Search("armstrong") << endl;
    

    return 0;
}