#include "stdafx.h"
#include "BST.h"

BST::BST() {
	root = nullptr;
}


BST::~BST() {
	destroy(root);
}

void BST::insert(Node* p, int a) {
	if (a >= p->getvalue()) {
		if (p->getrightchild() == nullptr) {
			p->setrightchild(new Node(a));
		}
		else {
			insert(p->getrightchild(), a);
		}
	}
	else {
		if (p->getleftchild() == nullptr) {
			p->setleftchild(new Node(a));
		}
		else {
			insert(p->getleftchild(), a);
		}
	}
}

void BST::ebenen() {
	if (root != nullptr) {
		queue<Node*> q;
		q.push(root);
		while (q.size()>0) {
			Node* p = q.front();
			cout << p->getvalue() << " ";
			q.pop();
			if (p->getleftchild() != nullptr) {
				q.push(p->getleftchild());
			}
			if (p->getrightchild() != nullptr) {
				q.push(p->getrightchild());
			}
		}

	}
	else {
		cout << "Der Baum ist leer" << endl;
	}
	cout << endl;
}