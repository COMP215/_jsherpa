//
//  linkedlist.cpp
//  Exam01
//
//  Created by Jigme Sherpa on 10/24/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include "linkedlist.hpp"
using namespace std;

Node::Node(string data) {
    data_ = data;
    next_ = NULL;
}

LinkedList::LinkedList() {
    head_ = NULL;
    tail_ = head_;
}

bool LinkedList::Insert(string data) {
    Node* new_node = new Node(data);
    if (head_ == NULL) {
        head_ = new_node;
        tail_ = head_;
    } else {
        tail_->next_ = new_node;
        tail_ = new_node;
    }
    return true;
}

bool LinkedList::Search(string data) {
    if (head_ != NULL) {
        Node* curr = head_;
        while (curr) {
            if (curr->data_ == data) {
                curr = curr->next_;
                std::cout<<curr<<endl;
            }
            return true;
        }
    }
    return false;
}


void LinkedList::Print_list() {
    Node* curr = head_;
    while (curr) {
        cout << curr->data_<<endl;
        curr = curr->next_;
    }
    cout << endl;
}


