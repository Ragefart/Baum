#include "stdafx.h"
#include "Tree.h"

Tree::Tree() {
	root = nullptr;
}


Tree::~Tree() {
	//destroy(root);
}

Tree::Tree(const Tree &orig) {
	root = copyhelper(orig.root);
}

Node* Tree::copyhelper(Node* t) {
	if (t == nullptr) {
		return nullptr;
	}
	Node *l, *r, *n;
	l = copyhelper(t->getleftchild());
	r = copyhelper(t->getrightchild());
	n = new Node;
	n->setvalue(t->getvalue());
	n->setleftchild(t->getleftchild());
	n->setrightchild(t->getrightchild());
	return n;
}

void Tree::destroy(Node* p) {
	if (p->getleftchild() == nullptr && p->getrightchild() == nullptr) {
		delete p;
		return;
	}
	else if (p->getleftchild() != nullptr) {
		destroy(p->getleftchild());
	}
	else if (p->getrightchild() != nullptr) {
		destroy(p->getrightchild());
	}
}



bool Tree::empty() {
	cout << endl;
	if (root == nullptr) {
		return true;
	}
	else {
		return false;
	}
}

bool Tree::empty(Node* p) {
	cout << endl;
	if (p == nullptr) {
		return true;
	}
	else {
		return false;
	}
}

//LINKS - AUSGABE - RECHTS
//alphabetisch sortiert wenn korrekt eingefügt wurde
void Tree::inorder(Node* p) { // print inorder: LDR
	if (p == nullptr) {
		return;
	}
	inorder(p->getleftchild()); // left
	cout << p->getvalue() << " "; // info
	inorder(p->getrightchild()); // right
}

//LINKS - RECHTS - AUSGABE
void Tree::postorder(Node* p) {
	if (p == nullptr) {
		return;
	}
	postorder(p->getleftchild());
	postorder(p->getrightchild());
	cout << p->getvalue() << " "; //info

}

//AUSGABE - LINKS - RECHTS
void Tree::preorder(Node* p) {
	if (p == nullptr) {
		return;
	}
	cout << p->getvalue() << " "; //info
	preorder(p->getleftchild());
	preorder(p->getrightchild());
}

void Tree::print() {
	inorder(root);
	cout << endl;
	preorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
}

void Tree::newtree(Node* a, Node* w, Node* b) {
	root = w;
	root->setleftchild(a);
	root->setrightchild(b);
}


