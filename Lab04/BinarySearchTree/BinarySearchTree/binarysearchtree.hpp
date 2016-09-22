//
//  binarysearchtree.hpp
//  BinarySearchTree
//
//  Created by Jigme Sherpa on 9/21/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#ifndef binarysearchtree_hpp
#define binarysearchtree_hpp

#include <stdio.h>
#include <string>

class Node {
public:
    std::string data_;
    Node* left_;
    Node* right_;
    
public:
    Node(std::string);
};


class BinarySearchTree {
    Node* root_;
    
public:
    BinarySearchTree();
    bool Insert(std::string);
    void InOrder();
    void InOrder(Node*);
    bool Search(std::string);
    
};


#endif /* binarysearchtree_hpp */
