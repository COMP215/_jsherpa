//
//  linkedlist.hpp
//  Exam01
//
//  Created by Jigme Sherpa on 10/24/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#ifndef linkedlist_hpp
#define linkedlist_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;


class Node {
public:
    string data_;
    Node* next_;
    
public:
    Node(string);
};


class LinkedList {
    Node* head_;
    Node* tail_;
    
public:
    LinkedList();
    bool Insert(string);
    bool Search(string);
    void Print_list();
};


#endif /* linkedlist_hpp */
