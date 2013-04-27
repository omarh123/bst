#include "BST.h"
#include <iostream>

BST::BST(){
  root = NULL;
}

BST::BST(BinNode* rootIn){
	root = rootIn;
}

/*void BST::insertNode(string dataIn){
	BinNode newNode = BinNode(dataIn);
	if(root == NULL){
		root = newNode;
	}else{
		BinNode* current = root;
		BinNode* parent;
		while(true) {
			parent = current;
			if (id < current.iData){
				current = current.leftChild;
					if(current == null) { 
						parent.leftChild = newNode; return;
					}
			}else {
				current = current.rightChild;
					if(current == null){
						parent.rightChild = newNode; return;
					}
			}
		}
	}
}*/

void BST::insertNode(string dataIn){
	BinNode newNode = BinNode(dataIn);
	if(root == NULL){
		root = newNode;
	}else{
		insertAUX(newNode, root);
	}
}

void BST::insertAUX(BinNode *newNode, BinNode *subTreeRoot){
	if (subTreeRoot = NULL){
		subTreeRoot = item;
     	return;
    }else if (subTreeRoot->data  >  item->data) {
		Node *newRoot = subTreeRoot->left;
		insertAUX(newNode, newroot);
	}else{
        BinNode *newRoot = subTreeRoot->right;
		insertAUX(newNode, newRoot);
	}
}

string BST::inOrderWalk(int i){

}

string BST::preOrderWalk(int i, int count, BinNode *current){
	if(i == count){
		return current->data;
	}else{
		preOrderWalk(i, ++count, current->left);
		preOrderWalk(i, ++count, current->right);
	}
}

BinNode* BST::getRoot(){
	return root;
}

BST::~BST(){
	
}
