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

///////////////////////////////////////////// NODE STRUCT //////////////////////////////////////////////
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


/////////////////////////////////////////////// BST CLASS //////////////////////////////////////////////
class BST {
    
public:
    BST () { m_root = NULL;
            m_numNodes = 0; }
    ~BST();
    void FreeTree(Node* cur);
    void insert(const int& val, Node* cur);
    void deleteNode(const int& val);
    bool findValue(const int& val, Node* root);
    void printInOrder(Node* root);
    bool isEmpty(); 
    int size() { return this->m_numNodes; }
    
    // implement these
    int findMin();
    int findMax(Node* cur);
    int getHeight();
    
    Node* getRoot() { return this->m_root; }
    
    
private:
    Node* m_root;
    int m_numNodes;
};









#endif /* BST_hpp */
