// Main tester for linked list.
// Copyright © 2015 Eddie Kaiger

#include "SLList.h"
#include "stdio.h"

using namespace EDDIE_KAIGER;

int main(int argc, char** argv) {

	SLList<int> list;

	// Node<int>* second = new Node<int>(30);
	list.push_back(100);
	list.push_front(20);
	list.push_front(30);
	list.push_front(25);
	list.push_back(50);
	list.push_back(60);
	list.pop_front();
	list.pop_front();
	list.push_front(200);
	list.pop_back();
	
	list.print();

	printf("Size: %lu\n", list.size());

	return 0;
}