//	Header for a singly-linked linked list.
//	Copyright © 2015 Eddie Kaiger
 
#ifndef EDDIE_KAIGER_LINKED_LIST
#define EDDIE_KAIGER_LINKED_LIST

#include "Node.h"

namespace EDDIE_KAIGER {

	template <typename T>
 	class LinkedList {
 	public:

 		// Constructor
 		LinkedList(Node<T>* head = NULL) { head_node = tail_node = head; }

 		// Destructor
 		~LinkedList();

 		// Setters
 		void set_head(const Node<T>* new_head) { head_node = new_head; }

 		// Getters
 		Node<T>* head() const { return head_node; }
 		Node<T>* tail() const { return tail_node; }

 		// Other functions
 		void append(Node<T>* node);
 		void append(const T& item);
 		void print() const;

 	private:
 		Node<T>* head_node;
 		Node<T>* tail_node;
 	};
}

#include "LinkedList.cpp"

#endif //EDDIE_KAIGER_LINKED_LIST