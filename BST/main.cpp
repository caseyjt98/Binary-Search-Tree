//
//  main.cpp
//  BST
//
//  Created by Casey Taylor on 10/29/18.
//  Copyright © 2018 Casey Taylor. All rights reserved.
//

#include <iostream>
#include "BST.h"

using namespace std;

int main() {
    
    BST myBST = BST();
    myBST.insert(5, myBST.getRoot());
    myBST.insert(6, myBST.getRoot());
    myBST.insert(11, myBST.getRoot());
    myBST.insert(2, myBST.getRoot());
    myBST.printInOrder(myBST.getRoot());
    
    
    
    return 0;
}
