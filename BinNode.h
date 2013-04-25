//
//  BinNode.h
//  BST
//
//  Created by omar hashmi on 4/25/13.
//  Copyright (c) 2013 edu.stanford.cs193p.Omar. All rights reserved.
//

#ifndef __BST__BinNode__
#define __BST__BinNode__

#include <iostream>
using namespace std;
class BinNode{

private:

BinNode *left;
BinNode *right;
string data;

public:
    BinNode();
    BinNode(string Data);
    BinNode* getLeft();
    BinNode* getRight();
    string getData();
    void setLeft(BinNode *LeftIn);
    void setRight(BinNode *RightIn);

    ~BinNode();



};
#endif /* defined(__BST__BinNode__) */
