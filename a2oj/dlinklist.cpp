#include <bits/stdc++.h>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

typedef struct node {
	int number;
	struct node *next;
	struct node *prev;
}node;

class DLinkList {
	node *head = (node*) malloc(sizeof(node));
	node *tail = (node*) malloc(sizeof(node));
	int size = 0;
	public:
	DLinkList() {
		head -> prev = nullptr;
		tail -> prev = head;
		head -> next = tail;
		tail -> next = nullptr;
	}
	void add (int num) {
		if(size == 0) {
			head -> number = num;
		}
		else {
			node *n = (node*) malloc(sizeof(node));
			n -> number = num;
			tail -> prev -> next = n;
			n -> prev = tail -> prev;
			tail -> prev = n;
			n -> next = tail;
			
		}	
		size++;
	}
	
	void pop() {
		if(size == 1) size--;
		else if(size == 0) return;
		else {
			node *tmp = tail -> prev;
			tail -> prev -> prev -> next = tail;
			tail -> prev = tail -> prev -> prev;
			free(tmp);
			size--;
		}
	}
	
	
	
	void printAll() {
		if(size == 0) {cout << "Empty\n" ;return;}
		node *n = head;
		while(n->next != nullptr) {
			cout << n->number << " ";
			n = n->next;
		}
		cout << endl;
	}
};

int main() {
	DLinkList list;
	list.add(100);
	list.add(200);
	list.add(300);
	list.add(100000);
	list.printAll();
	list.pop();
	list.printAll();
	list.pop();
	list.printAll();
	list.pop();
	list.printAll();
	list.pop();
	list.printAll();
}
