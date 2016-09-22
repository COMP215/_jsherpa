//
//  main.cpp
//  LinkedListProgram
//
//  Created by Jigme Sherpa on 9/19/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include <iostream>
#include "Linklist.h"
#include "node.h"


using namespace std;



node::node()
{
    data = 0;
    next = NULL;
    //tail = NULL;
}

node::node(int new_data)
{
    data = new_data;
    next = NULL;
    //tail = NULL;
}

void node::set_data(int new_data)
{
    data = new_data;
    next = NULL;
}
void node::set_next_ptr(node *new_node)
{
    if ( new_node == NULL)
    {
        next = NULL;
    }
    else
    {
        next = new_node;
    }
    
    
}

int node::get_data()
{
    return  data;
}
node::~node()
{
    
}
node* node::get_next_ptr()
{
    return next;
}
//--------------------------------------------------------------------------------------------------
LinkList::LinkList()
{
    head = NULL;
    tail = NULL;
    
    
}

LinkList::LinkList(int input)
{
    head = new node(input);
    tail   = head;
    
    
    
}

LinkList::~LinkList()
{
    // cout << "DEBUG: LIst before delete: ";
    // print_list();
    for (node* current = head; current != NULL; current = head)
    {
        head = current->get_next_ptr();
        delete current;
        //cout << "DEBUG: LIst after delete: ";
        //print_list();
    }
    
    
}

void LinkList::add_node(int new_data)
{
    tail->set_next_ptr(new node(new_data));
    tail = tail->get_next_ptr();
    
}

void LinkList::print_list()
{
    
    for (node* current = head; current != NULL; current = current->get_next_ptr())
    {
        
        cout << current->get_data() << " --> ";
    }
    cout << "NULL" << endl;
    
}






//void list::delete_data(int del_data){
//
//}



int main()
{
    
    int input; // get user input
    node* first;
    node* second;
    LinkList* list1;
    
    // get user input
    cout << "Enter input as an integer: ";
    cin >> input;
    first = new node(input);
    second = new node();
    
    
    //    first->set_link(new node());
    cout << "first node: " << first->get_data() << endl;
    second->set_data(3);
    cout << "second node:  "<< second->get_data() << endl;
    //    first->next->print_data();
    
    first->set_next_ptr(second);
    
    cout << "first node of list: " << first->get_data();
    cout << "second node of list: " << first->get_next_ptr()->get_data() <<endl;
    
    
    list1 = new LinkList(10);
    list1->add_node(20);
    list1->add_node(30);
    cout << "list 1: ";
    //destructor to delete nodes
    list1->print_list();
    delete first;
    delete second;
    delete list1;
    
    //set pointer
    
    
    
    
    
    
    
    
    
    return 0;
}