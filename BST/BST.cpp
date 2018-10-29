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

// clear the tree
void BST::FreeTree(Node* cur) {
    // if empty, DONE
    if (cur == NULL)
        return; // DONE
    
    FreeTree(cur->left);
    FreeTree(cur->right);
    delete cur;
}


BST::~BST() {
    FreeTree(m_root); // call FreeTree function, starting at the root
}


// check if empty
bool BST::isEmpty() {
    if (m_root == NULL)
        return true;
    // else
    return false;
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


// insert an item into the tree
void BST::insert(const int& val, Node* cur) {
    // if empty
    if (m_root == NULL) {
        // insert node as root and DONE
        m_root = new Node(val);
        m_numNodes++;                   // update size
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
            m_numNodes++;                   // update size
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
            m_numNodes++;                   // update size
            return; // DONE
        }
    }
   
}

// find value in BST
bool BST::findValue(const int& val, Node* root)
{
    
    // if empty, return false
    if (root == NULL)
        return false;
    
    // base case
    if (root->m_value == val)
        return true;
    
    else if (root->m_value > val) {
        // if you can go left, go left
        if (root->left != NULL)
            return (findValue(val, root->left));
    }
    
    else if (root->m_value < val) {
        // if you can go right, go right
        if (root->right != NULL)
            return (findValue(val, root->right));
    }
    
    return false;

}


/*
// delete an item by value from BST
void BST::deleteNode(const int& val, Node* cur) {
    // check if tree is empty
    if (m_root == NULL)
        return;             // DONE
    
    // traverse to find value to be deleted
    
    if (cur->m_value == val) {
        // delete node
        
        // case 1: node being deleted has no children
        
        
        // case 2: node being deleted has one child
        
        // case 3: node being deleted has two children
        
        
        m_numNodes--;           // decrement size
        return;                 // DONE
    }
    
    else if (cur->m_value > val) {
        // if you can go left, go left
        if (cur->left != NULL)
            deleteNode(val, cur->left);
        
    }
    
    else if (cur->m_value < val) {
        // if you can go right, go right
        if (cur->right != NULL)
            deleteNode(val, cur->right);
    }
    
    return; // no matching value found
    
}


*/

