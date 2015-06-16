//	Header for a node in a doubly-linked list.
//	Copyright © 2015 Eddie Kaiger

#ifndef EDDIE_KAIGER_NODE
#define EDDIE_KAIGER_NODE

#include <cstdlib>

namespace EDDIE_KAIGER {

	template <typename T>
	class Node {
	public:

		// Constructor
		Node(const T& data = T(), Node* next = NULL, Node* prev = NULL) {
			data_field = data;
			next_node = next;
			prev_node = prev;
		}

		// Setters
		void set_data(const T& new_data) { data_field = new_data; }
		void set_next(Node* new_next) { next_node = new_next; }
		void set_prev(Node* new_prev) { prev_node = new_prev; }

		// Getters
		T data() { return data_field; }
		Node* next() const { return next_node; }
		Node* previous() const { return prev_node; }

	private:
		T data_field;		// The data stored in this node
		Node* next_node;	// The next node
		Node* prev_node;	// The previous node
	};
}

#endif
