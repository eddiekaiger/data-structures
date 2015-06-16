//	Header for a node in a singly-linked list.
//	Copyright © 2015 Eddie Kaiger

#ifndef EDDIE_KAIGER_NODE
#define EDDIE_KAIGER_NODE

#include <cstdlib>

namespace EDDIE_KAIGER {

	template <typename T>
	class Node {
	public:

		// Constructor
		Node(const T& data = T(), Node* next = NULL) {
			data_field = data;
			next_node = next;
		}

		// Setters
		void set_data(const T& new_data) { data_field = new_data; }
		void set_next(Node* new_next) { next_node = new_next; }

		// Getters
		T data() { return data_field; }
		Node* next() const { return next_node; }

	private:
		T data_field;		// The data stored in this node
		Node* next_node;	// The next node
	};
}

#endif
