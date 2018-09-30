#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *next;

};

class List {
	private:
		Node *head;


	public:
		List();
		List(int data);
		void add(int data);
		void print();


};

List::List() {
	head->data = 0;
	head->next = NULL;
}

List::List(int data) {
	Node *node = new Node();
	head->next = node;
	node->next = NULL;
	node->data = data;

}


void List::print() {
	Node *temp = new Node();
	temp = this->head;
	while(temp->next != NULL) {
		temp = temp->next;
		cout << temp->data;

	}
	//delete temp;
}

void List::add(int data) {
	Node *node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;


}


int main() {
	List *l = new List();
	l->add(8);
	 // l.add(8);
	 // l.add(2);
	 // l.add(0);
	// l.add(7);


	l->print();


}	