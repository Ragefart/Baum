#pragma once
#include "Tree.h"
#include <iostream>
#include <queue>


class BST :public Tree {
public:
	BST();
	virtual ~BST();
	void insert(Node* b, int a);
	//print Funktion kann korrekt aus Tree �bernommen werden
	void ebenen();
private:

};

