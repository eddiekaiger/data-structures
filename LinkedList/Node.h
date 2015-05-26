//	Header for a node in a linked list.
//	Copyright © 2015 Eddie Kaiger

#ifndef EDDIE_KAIGER_NODE
#define EDDIE_KAIGER_NODE

#include <cstdlib>

namespace EDDIE_KAIGER {

	template <class T>
	class Node {
	public:

		// Constructor
		Node(const T& data = T(), Node* link = NULL) {
			data_field = data;
			link_field = link;
		}

		// Setters
		void set_data(const T& new_data) { data_field = new_data; }
		void set_link(const Node* new_link) { link_field = new_link; }

		// Getters
		T data() { return data_field; }
		Node* link() { return link_field; }

	private:
		T data_field;		// The data stored in this node
		Node* link_field;	// The next node
	};
}

#endif
