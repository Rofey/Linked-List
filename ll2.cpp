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
		~List();
		void add(int data);
		void print();


};

List::List()   {
	 head = 0;
	 //head->next = NULL;
}

List::List(int data) {
	Node *node = new Node();
	head = node;
	node->data = data;
	node->next = NULL;
}

List::~List() {
	cout << "Deleting head";
	delete head;
}


void List::print() {
	Node *temp;
	temp = head;
	while(temp->next != NULL) {
		cout << temp->data;
		temp = temp->next;

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
	l->add(3);
	l->add(2);
	l->add(4);
	// l.add(7);


	l->print();

}	