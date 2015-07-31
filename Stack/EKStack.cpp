// Implementation for the Stack class.
// Copyright © 2015 Eddie Kaiger

#include "EKStack.h"

namespace EDDIE_KAIGER {

	const size_t DEFAULT_SIZE_INCREASE = 10;

	template <typename T>
	EKStack<T>::EKStack(size_t init_capacity) {
		capacity = init_capacity;
		data = new T[init_capacity];
		size = 0;
	}

	template <typename T>
	void EKStack<T>::push(const T& item) {

		if (size < capacity) {	// We have space
			data[size-1] = item;
		} else {	// Increase capacity of stack

			// TODO: implement

			// capacity += DEFAULT_SIZE_INCREASE;
			// T* newStack = new T[capacity];

			// delete data;
			// data = newStack;
		}

		size++;
	}

}