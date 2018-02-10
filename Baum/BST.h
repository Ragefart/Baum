#pragma once
#include "Tree.h"
#include <iostream>
#include <queue>


class BST :public Tree {
public:
	BST();
	virtual ~BST();
	void insert(Node* b, int a);
	//print Funktion kann korrekt aus Tree übernommen werden
	void ebenen();
private:

};

