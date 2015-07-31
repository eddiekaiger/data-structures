
#include <cstdio>

namespace EDDIE_KAIGER {

	template <typename T>
	BTree<T>::BTree() {
		root = NULL;
	}

	template <typename T>
	void BTree<T>::insert(T item) {
		if (root == NULL) {
			root = Node(item);
		} else {
			root = new Node(item);
		}
	}

}