// Main tester for linked list.
// Copyright © 2015 Eddie Kaiger

#include "LinkedList.h"
#include "stdio.h"

using namespace EDDIE_KAIGER;

int main(int argc, char** argv) {

	Node<int> head;
	head.set_data(20);

	printf("%d\n", head.data());

}