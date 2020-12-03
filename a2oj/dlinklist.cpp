#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

/*
 *  class of node
 */ 
 
typedef struct node {
	int number;
	struct node *next;
	struct node *prev;
}node;

/* 
 * double link list class
 */ 
 
class DLinkList {
	
	node* head = (node*) malloc(sizeof(node));
	node* tail = (node*) malloc(sizeof(node));
	
	int __size = 0;
	
	public:
	/* 
	 * constructor
	 */ 
	 
	DLinkList() {
		head -> prev = nullptr;
		tail -> prev = head;
		head -> next = tail;
		tail -> next = nullptr;
	}
	
	/* 
	 * add value into list
	 */ 
	 
	void add (int num) {
		if(__size == 0) {
			head -> number = num;
		}
		else {
			node* n = (node*) malloc(sizeof(node));
			if(n == nullptr) return;
			n -> number = num;
			tail -> prev -> next = n;
			n -> prev = tail -> prev;
			tail -> prev = n;
			n -> next = tail;
			
		}	
		__size++;
	}
	
	/*
	 *  add a value in sorted position
	 */ 

	void addWithSort(int num) {
		if(__size == 0)  {	
			head -> number = num;
		}
		else {
			node* n = (node*) malloc(sizeof(node));
			n -> number = num;
			node *current = head;
			while(true) {
				if(current -> next == nullptr) {
					add(num);
					return;
				}
				else if(current -> number >= num) {
					if(current == head) {
						swap(head -> number , n -> number);
						head ->next ->prev = n;
						n -> next = head -> next;
						head -> next = n;
						n -> prev = head;
						break;
					}
					n -> next = current;
					n -> prev = current -> prev;
					n -> prev -> next = n;
					current -> prev = n;
					break;
				}
				current = current -> next;
			}
		}
		__size++;
	}
	
	/*
	 *  remove last value
	 */ 
	 
	int pop() {
		if(__size == 1) __size--;
		else if(__size == 0) return -420;
		else {
			node *tmp = tail -> prev;
			tail -> prev -> prev -> next = tail;
			tail -> prev = tail -> prev -> prev;
			int num = tmp -> number;
			free(tmp);
			__size--;
			return num;
		}
		return head -> number;
	}
	
	
	/*
	 * print the list from begging
	 */
	 
	void printF() {
		if(__size == 0) {cout << "Empty\n" ;return;}
		node *n = (node*) malloc(sizeof(node));
		if(n == nullptr) return;
		n = head;
		while(n->next != nullptr) {
			cout << n->number << " ";
			n = n->next;
		}
		cout << endl;
	}
	
	/*
	 *print the list from back
	 */ 
	 
	void printB() {
		if(__size == 0) {cout << "Empty\n"; return ;}
		node *n = (node*) malloc(sizeof(node));
		if(n == nullptr) return;
		n = tail -> prev;
		while(1) {
			cout << n -> number << " ";
			if(n-> prev == nullptr) break;
			n = n -> prev;
		}
		cout << endl;
	}
	
	/*
	 *  return the size of list
	 */
	 
	int size() {
		return __size;
	}
	
	/*
	 *  return a Boolean (is the list empty?)
	 */ 
	 
	bool empty() {
		return __size == 0 ;
	}
	
	/*
	 *  add a value after a value
	 */ 
	 
	void addAfter(int afterThis , int num){
		node *current = head;
		node *n = (node*) malloc(sizeof(node));
		if(n==nullptr) return;
		n -> number = num;
		while(current != nullptr) {
			if(current -> number == afterThis) {
				n -> next = current -> next;
				n -> prev = current;
				current -> next -> prev = n;
				current -> next = n;
				break;
			}
			current = current -> next;
		}
	}
	
};

int main() {

	DLinkList *list;
	list = new DLinkList;
	
	int n; cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		list -> addWithSort(rand() % 10);
	}
	
	list-> printF();
	
}
