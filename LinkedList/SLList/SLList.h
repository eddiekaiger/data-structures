//	Header for a singly-linked list.
//	Copyright © 2015 Eddie Kaiger
 
#ifndef EDDIE_KAIGER_SLLIST
#define EDDIE_KAIGER_SLLIST

#include "Node.h"
#include <cstdlib>

namespace EDDIE_KAIGER {

	template <typename T>
 	class SLList {
 	public:

 		// Constructors
 		SLList();
 		SLList(const T& item);

 		// Destructor
 		~SLList();

 		// Getters
 		size_t size() const { return list_size; }
 		T front() const { return head->data(); }
 		T back() const { return tail->data(); }

 		// Other functions
 		void push_front(const T& item);
 		void push_back(const T& item);
 		void pop_front();
 		void pop_back();
 		void print() const;

 	private:
 		Node<T>* head;
 		Node<T>* tail;
 		size_t list_size;
 	};
}

#include "SLList.cpp"

#endif //EDDIE_KAIGER_SLLIST