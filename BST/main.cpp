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
   
    myBST.printInOrder(myBST.getRoot());
    
    
    
    return 0;
}
