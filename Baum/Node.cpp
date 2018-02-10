#include "stdafx.h"
#include "Node.h"

Node::Node() {
	leftChild = nullptr;
	rightChild = nullptr;
	value = 0;
}


Node::Node(int startvalue) {
	leftChild = nullptr;
	rightChild = nullptr;
	value = startvalue;
}

/*Node::Node(const Node& orig){
leftChild = orig.leftChild;
rightChild = orig.rightChild;
value = orig.value;
}*/

Node::Node(Node* a) {
	leftChild = a->getleftchild();
	rightChild = a->getrightchild();
	value = a->getvalue();
}

Node::~Node() {
}


Node* Node::getleftchild() {
	return leftChild;
}

Node* Node::getrightchild() {
	return rightChild;
}

int Node::getvalue() {
	return value;
}

void Node::setleftchild(Node* left) {
	leftChild = left;
}

void Node::setrightchild(Node* right) {
	rightChild = right;
}

void Node::setvalue(int newnumber) {
	value = newnumber;
}


