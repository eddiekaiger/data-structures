// Main tester for linked list.
// Copyright © 2015 Eddie Kaiger

#include "LinkedList.h"
#include "stdio.h"

using namespace EDDIE_KAIGER;

int main(int argc, char** argv) {

	Node<int>* head = new Node<int>(20);
	LinkedList<int> list;

	// Node<int>* second = new Node<int>(30);
	list.append(30);
	list.append(50);
	list.append(60);
	list.append(70);

	list.print();

}