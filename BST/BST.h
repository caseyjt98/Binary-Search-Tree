//
//  BST.hpp
//  BST
//
//  Created by Casey Taylor on 10/29/18.
//  Copyright © 2018 Casey Taylor. All rights reserved.
//

#ifndef BST_hpp
#define BST_hpp

#include <stdio.h>

struct Node {
    
    Node(const int& val) {
        m_value = val;
        left = NULL;
        right = NULL;
    }
    
    int m_value;
    Node* left;
    Node* right;
};


class BST {
    
public:
    BST () { m_root = NULL; }
    
    void insert(const int& val, Node* cur);
    void printInOrder(Node* root);
    
    Node* getRoot() { return this->m_root; }
    
private:
    Node* m_root;
};





















#endif /* BST_hpp */
