//
//  main.cpp
//  BST
//
//  Created by Casey Taylor on 10/29/18.
//  Copyright © 2018 Casey Taylor. All rights reserved.
//

#include <iostream>
#include "BST.h"
#include <assert.h>

using namespace std;

int main() {
    
    BST myBST = BST();
    assert(myBST.isEmpty() == 1);               // should return true
    
    myBST.insert(5, myBST.getRoot());
    assert(myBST.isEmpty() == 0);               // should return false
    assert(myBST.findValue(6, myBST.getRoot()) == 0);
    myBST.insert(6, myBST.getRoot());
    assert(myBST.findValue(6, myBST.getRoot()) == 1);
    myBST.insert(11, myBST.getRoot());
    myBST.insert(2, myBST.getRoot());
    
  

    
    int max = myBST.findMax(myBST.getRoot());
    assert(max == 11);
    
    myBST.insert(14, myBST.getRoot());
 
    myBST.insert(1, myBST.getRoot());
    myBST.insert(17, myBST.getRoot());
    myBST.insert(12, myBST.getRoot());
    myBST.insert(10, myBST.getRoot());
    myBST.insert(16, myBST.getRoot());

    // print tree before deletion tests
    myBST.printInOrder(myBST.getRoot());
    cout << endl;
    
    // test case 1: delete node with no children
    myBST.deleteNode(1);
    myBST.printInOrder(myBST.getRoot());
    cout << endl;
    
    
    // test case 2: delete node with one child
    myBST.deleteNode(17);
    myBST.printInOrder(myBST.getRoot());
    cout << endl;
    
    // test case 3: delete node with two children
    myBST.deleteNode(14);
    myBST.printInOrder(myBST.getRoot());
    cout << endl;
    
    return 0;
}
