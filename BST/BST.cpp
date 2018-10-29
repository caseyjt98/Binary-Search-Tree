//
//  BST.cpp
//  BST
//
//  Created by Casey Taylor on 10/29/18.
//  Copyright © 2018 Casey Taylor. All rights reserved.
//

#include "BST.h"
#include <iostream>
using namespace std;

// check if empty
bool BST::isEmpty() {
    if (m_root == NULL)
        return true;
    // else
    return false;
}


// insert new value into tree
void BST::insert(const int& val, Node* cur) {
    // if empty
    if (m_root == NULL) {
        // insert node as root and DONE
        m_root = new Node(val);
        return;
    }
    
    // else, tree not empty
    
    // no duplicates
    if (cur->m_value == val) {
        return;
    }
    
    else if (cur->m_value > val) {
        // if you can go left, go left
        
        if (cur->left != NULL)
            insert(val, cur->left);
        
        // else, you've found you're point of insertion
        else {
            Node* newGuy = new Node(val);
            cur->left = newGuy;
            return; // DONE
        }

    }
    
    else if (cur->m_value < val) {
        // if you can go right, go right
        if (cur->right != NULL)
           insert(val, cur->right);
        
        
        // else, you've found your point of insertion
        else {
            Node* newGuy = new Node(val);
            cur->right = newGuy;
            return; // DONE
        }
    }
   
}

// traverse from root and print each node's value using in order traversal (ascending order)
void BST::printInOrder(Node* root) {
    
    // if empty, DONE
    if (root == NULL)
        return; // DONE
    
    printInOrder(root->left);
    cout << root->m_value;
    cout << "-";
    printInOrder(root->right);
    
}
