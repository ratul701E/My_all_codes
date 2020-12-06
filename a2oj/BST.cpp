#include <bits/stdc++.h>
using namespace std;

typedef struct node {
	int val;
	struct node *left;
	struct node *right;
}node;

class BinaryTree {
	node *parent = (node*) malloc(sizeof(node));
	int size ;
	
	public:
	BinaryTree(int value) {
		if(parent == nullptr) return;
		parent -> left = nullptr;
		parent -> right = nullptr;
		parent -> val = value;
	}
	void add(int value) {
		if(size == 0) {
			parent->val = value;
			size++;
			
		}
		else {
			node *n = (node*) malloc(sizeof(node));
			if(n == nullptr) return;
			node *current = parent;
			while(true) {
				if(value > current -> val) {
					if(current -> right == nullptr) {
						n -> val = value;
						current -> right = n;
						n -> left = nullptr;
						n -> right = nullptr;
						size++;
						break;
					}
					else current = current -> right;
				}
				else if (value < current -> val) {
					if(current -> left == nullptr) {
						n -> val = value;
						current -> left = n;
						n -> left = nullptr;
						n -> right = nullptr;
						size++;
						break;
					}
					else current = current -> left;
				}
				if(current -> left == nullptr and current -> right == nullptr) break;
			}
		}
		
	}
	
	bool isThere(node *bs , int vall) {
		cout << "There it is\n";
		if(bs == nullptr) return false;
		else if (bs -> val == vall) return true;
		else if(bs -> val > vall) {
			return isThere(bs -> left , vall);
		}
		else if(bs -> val < vall) {
			return isThere(bs -> right , vall);
		}
		return false;
	}
	
	node* getP() {
		return parent;
	}
	
};

int main() {
	BinaryTree *b;
	b = new BinaryTree(1);
	srand(time(0));
	for(int i = 0 ; i < 100; i++) {
		b -> add(rand()%100);
		cout << "i : " << i << endl;
	}
	
	int n;
	cout << "input : ";
	cin >> n;
	cout << b -> isThere(b -> getP() , n);
	
	
}
