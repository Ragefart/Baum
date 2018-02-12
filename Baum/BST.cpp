#include "stdafx.h"
#include "BST.h"

BST::BST() {
	root = nullptr;
}


BST::~BST() {
	destroy(root);
}



//Gibt einen neuen Knoten mit Wert a in den Baum ein.
//Gestartet wird von p, meist der root
//Der neue Knoten wird an der korrekten position eingefügt sodass 
//der Baum ein BST ist
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

//Gibt die einzelnen Ebenen eines Baumes aus
//Von der Wurzel nach unten (der Höhe nach gerichtet)
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
