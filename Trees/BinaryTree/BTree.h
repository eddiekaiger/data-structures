

#ifndef EDDIE_KAIGER_BTREE
#define EDDIE_KAIGER_BTREE

#include "Node.h"

namespace EDDIE_KAIGER {

	template <typename T>
	class BTree {
	public:
		BTree();
		~BTree();

		void insert(T item);
		Node<T>* search(T item);
		void destroyTree();

	private:
		Node<T>* root;
	};
}

#include "BTree.cpp"

#endif //EDDIE_KAIGER_BTREE
