// Header for a custom implementation of a stack.
// Copyright © 2015 Eddie Kaiger


#ifndef EDDIE_KAIGER_STACK
#define EDDIE_KAIGER_STACK

#include <cstdlib>

namespace EDDIE_KAIGER {

	template <typename T>
	class EKStack {
	public:
		EKStack(size_t init_capacity = 0);
		void push(const T& item);
		void pop() { if (!isEmpty()) size--; }
		T top() const { return data[size-1]; }
		bool isEmpty() const { return size == 0; }
	private:
		T* data;
		size_t size;
		size_t capacity;
	};
}

#include "EKStack.cpp"

#endif //EDDIE_KAIGER_STACK