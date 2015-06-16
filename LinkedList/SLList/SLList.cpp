//	Implementation for a singly-linked list.
//	Copyright © 2015 Eddie Kaiger
 

#include "SLList.h"
#include <iostream>

using namespace std;

namespace EDDIE_KAIGER {

	template <typename T>
	SLList<T>::SLList() {
		head = tail = NULL;
		list_size = 0;
	}

	template <typename T>
	SLList<T>::SLList(const T& item) {
		head = tail = new Node<T>(item);
		list_size = 1;
	}

	template <typename T>
	void SLList<T>::push_front(const T& item) {
		head = new Node<T>(item, head);
		if (tail == NULL) tail = head;
		list_size++;
	}


	template <typename T>
	void SLList<T>::push_back(const T& item) {
		
		Node<T>* node = new Node<T>(item);
		if (tail != NULL) {
			tail->set_next(node);
			tail = node;
		} else {
			head = tail = node;
		}

		list_size++;
	}

	template <typename T>
	void SLList<T>::pop_front() {

		if (head == NULL) return;

		Node<T>* new_head = head->next();
		if (head == tail) tail = new_head;

		// Pop head
		delete head;
		head = new_head;
		list_size--;
	}

	template <typename T>
	void SLList<T>::pop_back() {

		if (tail == NULL) return;

		// Find second-to-last node
		Node<T>* new_tail = head;
		while(new_tail->next() != tail) {
			new_tail = new_tail->next();
		}

		// Replace tail
		delete tail;
		tail = new_tail;
		tail->set_next(NULL);
		list_size--;
	}

	template <typename T>
	void SLList<T>::print() const {

		for (Node<T>* current = head; 
			current != NULL; 
			current = current->next()) {
			cout << current->data() << " ";
		}

		cout << endl;
	}

	template <typename T>
	SLList<T>::~SLList() {

		Node<T>* current = head;
		while (current != NULL) {
			current = head->next();
			delete head;
			head = current;
		}

		list_size = 0;
	}
}