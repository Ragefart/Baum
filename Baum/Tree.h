#pragma once
#include "Node.h"
#include <iostream>

using namespace std;


class Tree {
public:
	Tree();
	Tree(const Tree &orig);
	virtual ~Tree();
	Node* root;
	Node* copyhelper(Node* t);
	bool empty();
	bool empty(Node* p);
	void inorder(Node* p);
	void preorder(Node* p);
	void postorder(Node* p);
	void print();
	void newtree(Node* a, Node* w, Node* b);
	void destroy(Node* p);
	Tree operator=(const Tree &a);
private:

};

