//
//  Linklist.h
//  LinkedListProgram
//
//  Created by Jigme Sherpa on 9/19/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#ifndef Linklist_h
#define Linklist_h
#include "node.h"

using namespace std;

class LinkList
{
    
    
public:
    LinkList();
    LinkList(int input);
    ~LinkList();
    void add_node(int new_data);
    void print_list();
    
    
    
    
    
private:
    node* head;
    node* tail;
    
    
};



#endif /* Linklist_h */