//	Header for a singly-linked linked list.
//	Copyright © 2015 Eddie Kaiger
 

#include "Node.h"

namespace EDDIE_KAIGER {

	template <class T>
 	class LinkedList {
 	public:

 		// Constructor
 		LinkedList(Node<T>* head) { head_node = head; }

 		// Setters
 		void setHead(const Node<T>* new_head) { head_node = new_head; }

 		// Getters
 		Node<T>* head() { return head_node; }

 	private:
 		Node<T>* head_node;
 	};
}