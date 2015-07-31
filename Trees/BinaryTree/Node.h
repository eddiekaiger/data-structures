

#include <cstdio>

namespace EDDIE_KAIGER {

	template <typename T>
	class Node {
	public:

		Node(T data = NULL, Node<T>* left = NULL, Node<T>* right = NULL) {
			this.data = data;
			this.left = left;
			this.right = right;
		}
		~Node() { delete left; delete right; };

		void setData(const T& data) { this.data = data; }
		void setLeft(Node* left) { this.left = left; }
		void setRight(Node* right) { this.right = right; }

		T getData() { return data; }
		Node* getLeft() { return left; }
		Node* getRight() { return right; }

	private:
		T data;
		Node<T>* left;
		Node<T>* right;
	};
}
