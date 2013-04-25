//
//  BST.h
//  BST
//
//  Created by omar hashmi on 4/25/13.
//  Copyright (c) 2013 edu.stanford.cs193p.Omar. All rights reserved.
//

#ifndef __BST__BST__
#define __BST__BST__

#include <iostream>
#include "BinNode.h"
using namespace std;
class BST{
public:
    void insertNode(BinNode *anotherNode);
    string inorderWalk(int i);
    string  preOrderWalk(int i);
    BinNode getRoot();
private:
    BinNode* root;
    
};

#endif /* defined(__BST__BST__) */

