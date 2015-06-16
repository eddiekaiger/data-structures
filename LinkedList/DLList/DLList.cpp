//	Implementation for a singly-linked list.
//	Copyright © 2015 Eddie Kaiger 

#include "DLList.h"
#include <iostream>

using namespace std;

namespace EDDIE_KAIGER {

	template <typename T>
	DLList<T>::DLList() {
		head = tail = NULL;
		list_size = 0;
	}

	template <typename T>
	DLList<T>::DLList(const T& item) {
		head = tail = new Node<T>(item);
		list_size = 1;
	}

	template <typename T>
	void DLList<T>::push_front(const T& item) {
		head = new Node<T>(item, head);
		head->next()->set_prev(head);
		if (tail == NULL) tail = head;
		list_size++;
	}


	template <typename T>
	void DLList<T>::push_back(const T& item) {
		
		Node<T>* node = new Node<T>(item);
		if (tail != NULL) {
			node->set_prev(tail);
			tail->set_next(node);
			tail = node;
		} else {
			head = tail = node;
		}

		list_size++;
	}

	template <typename T>
	void DLList<T>::pop_front() {

		if (head == NULL) return;

		Node<T>* new_head = head->next();
		new_head->set_prev(NULL);

		// Pop head
		delete head;
		head = new_head;

		list_size--;
	}

	template <typename T>
	void DLList<T>::pop_back() {

		if (tail == NULL || tail->previous() == NULL) return;

		// Find second-to-last node and replace tail
		Node<T>* previous = tail->previous();
		previous->set_next(NULL);
		delete tail;
		tail = previous;

		list_size--;
	}

	template <typename T>
	void DLList<T>::print() const {

		for (Node<T>* current = head; 
			current != NULL; 
			current = current->next()) {
			cout << current->data() << " ";
		}

		cout << endl;
	}

	template <typename T>
	DLList<T>::~DLList() {

		Node<T>* current = head;
		while (current != NULL) {
			current = head->next();
			delete head;
			head = current;
		}

		list_size = 0;
	}
}