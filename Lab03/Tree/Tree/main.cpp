//
//  main.cpp
//  Tree
//
//  Created by Jigme Sherpa on 9/19/16.
//  Copyright © 2016 Jigme Sherpa. All rights reserved.
//

#include <iostream>
#include <iostream>
#include "tree.h"
using namespace std;



TreeNode::TreeNode()
{
    data = NULL;
    left = NULL;
    right= NULL;
    
    
    
}

TreeNode::TreeNode(int input)
{
    data = input;
    left = NULL;
    right= NULL;
    
    
}

TreeNode::~TreeNode()
{
    
    
    
    
}

BinaryTree::BinaryTree()
{
    root = NULL;
    
    
}

BinaryTree::BinaryTree(int data)

{
    
    root = new TreeNode(data);
    
    
    
}

BinaryTree::~BinaryTree()
{
    
    
    
    
}

void BinaryTree::add(int data)
{
    TreeNode* current = root;
    
    if (current == NULL)
    {
        root = new TreeNode(data);
    }
    else
    {
        while (current != NULL)
        {
            if (data < current->data)    // data < node value (check left tree)
            {
                if (current->left == NULL)
                {
                    current->left = new TreeNode(data);
                    break;
                }
                else current = current->left;
            }
            else             // data >= node value (check right tree)
            {
                if (current->right == NULL)
                {
                    current->right = new TreeNode(data);
                    break;
                }
                else current = current->right;
            }
        }
    }
    
    
    
}

void BinaryTree::print_inorder(TreeNode* current)
{
    
    if ( current == NULL) return;
    print_inorder(current->left);
    cout << current->data << " ";
    print_inorder(current->right);
    
}



int main()
{
    
    BinaryTree* tree = new BinaryTree(4);
    //cout << "one node: ";
    // tree->print_inorder(tree->root);
    
    
    tree->add(16);
    cout << " 2 nodes: ";
    tree->print_inorder(tree->root);
    cout << endl;
    
    tree->add(10);
    tree->add(7);
    tree->add(2);
    
    cout << "5 nodes: ";
    tree->print_inorder(tree->root);
    cout << endl;
    
    
    
    
    
    return 0;
}
