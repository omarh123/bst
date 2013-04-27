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
