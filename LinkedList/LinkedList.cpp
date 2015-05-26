//	Implementation for a singly-linked linked list.
//	Copyright © 2015 Eddie Kaiger
 

#include "LinkedList.h"
#include <iostream>

using namespace std;

namespace EDDIE_KAIGER {

	template <typename T>
	void LinkedList<T>::append(Node<T>* node) {

		if (tail_node != NULL || (head_node == tail_node && head_node != NULL)) {
			tail_node->set_next(node);
		}

		// Set new head
		if (head_node == NULL) {
			head_node = node;
		}

		// Determine new tail
		tail_node = node;
		while (tail_node->next() != NULL) {
			tail_node = tail_node->next();
		}
	}

	template <typename T>
	void LinkedList<T>::append(const T& item) {

		Node<T>* node = new Node<T>(item);
		append(node);
	}

	template <typename T>
	void LinkedList<T>::print() const {

		for (Node<T>* current = head_node; 
			current != NULL; 
			current = current->next()) {

			cout << current->data() << " ";
		}

		cout << endl;
	}

	template <typename T>
	LinkedList<T>::~LinkedList() {

		Node<T>* current = head_node;
		while (current != NULL) {
			Node<T>* next = current->next();
			delete current;
			current = next;
		}
		head_node = tail_node = NULL;
	}
}