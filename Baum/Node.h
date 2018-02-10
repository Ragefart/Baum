#pragma once
#include <iostream>

using namespace std;

class Node {
public:
	Node();
	Node(int startvalue);
	Node(Node* a);
	//Node(const Node* orig);
	virtual ~Node();
	Node* getleftchild();
	Node* getrightchild();
	int getvalue();
	void setvalue(int newnumber);
	void setleftchild(Node* left);
	void setrightchild(Node* right);
private:
	Node* leftChild;
	Node* rightChild;
	int value;

};