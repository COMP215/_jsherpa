//
//  node.h
//  LinkedListProgram
//
//  Created by Jigme Sherpa on 9/19/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//



#ifndef node_h
#define node_h

class node
{
    
public:
    
    node();
    node(int new_data);
    ~node();
    void set_data(int new_data);
    void set_next_ptr(node* new_node);
    int get_data();
    node* get_next_ptr();
    node* next;
    
    
    
    
private:
    int data;
    
    
    
};









#endif /* node_h */