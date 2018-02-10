// Baum.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Tree.h"
#include "BST.h"

using namespace std;

/*
*
*/
int main() {

	//Erstellung des Baumes
	Tree tree;
	tree.root = new Node(6);
	//tree.root->setvalue(6);
	tree.root->setleftchild(new Node(3));
	//tree.root->getleftchild()->setvalue(3);
	tree.root->getleftchild()->setleftchild(new Node(1));
	//tree.root->getleftchild()->getleftchild()->setvalue(1);
	tree.root->getleftchild()->setrightchild(new Node(4));
	//tree.root->getrightchild()->getrightchild()->setvalue(4);
	tree.root->setrightchild(new Node(7));
	//tree.root->getrightchild()->setvalue(7);
	tree.root->getrightchild()->setrightchild(new Node());
	tree.root->getrightchild()->getrightchild()->setvalue(9);

	cout << "Baum erstellt!" << endl;

	//Ausgabe von inorder
	tree.print();
	cout << tree.empty() << endl;


	cout << "Kopie erstellen" << endl;
	Tree copy = tree;
	cout << "Kopie ausgeben" << endl;
	copy.print();
	cout << endl;

	BST bst;
	bst.root = new Node(5);
	cout << "BST root erstellt!" << endl;
	bst.insert(bst.root, 3);
	bst.insert(bst.root, 1);
	bst.insert(bst.root, 2);
	bst.insert(bst.root, 10);
	bst.insert(bst.root, 7);

	cout << "BST erstellt!" << endl;

	bst.print();

	cout << endl;
	cout << "BST ausgegeben!" << endl;

	bst.ebenen();

	cout << "BST Ebenen ausgegeben" << endl;

	system("pause");

	return 0;
}

