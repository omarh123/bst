#ifndef __BST__BST__
#define __BST__BST__

#include <iostream>
#include "BinNode.h"

using namespace std;

class BST{

	public:
		BST();
		BST(BinNode* rootIn);
		void insertNode(string dataIn);
		void insertAUX(BinNode *newNode, BinNode *subTreeRoot);
		string inorderWalk(int i);
		string  preOrderWalk(int i);
		BinNode* getRoot();
		
		~BST();
	private:
		BinNode* root;
    
};

#endif /* defined(__BST__BST__) */

