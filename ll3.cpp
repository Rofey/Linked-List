#include <iostream>
using namespace std;

class Node {
	public:
	int data;
	Node *next;

	Node(int data) { this->data = data; }
	Node() : data(0), next(NULL) {}

};


class LinkedList {
private:
	Node *head;
	int length;

public:
	LinkedList() : head(0), length(0) {}
	LinkedList(const LinkedList &original);
	~LinkedList() { deleteList(); }
	void insertAtFirst(int data);
	void deleteFromFront();
	void front();
	void back();
	void center();
	void deleteList();
	inline void lengthOfList() { cout << length << endl; }
	void print();

};

LinkedList::LinkedList(const LinkedList &original) : head(NULL) {
	cout << endl << original.length;
	this->head = NULL;
	Node *ptr = original.head;
	Node *newPtr, *lastPtr;
	cout << this->length;
	//node->head = original.head;
	while(ptr != NULL) {
		newPtr = new Node(ptr->data);
		if(head == 0 )
			head = newPtr;
		else {
			lastPtr->next = newPtr;
			lastPtr = newPtr;
			ptr = ptr->next;

		}
	}


}


void LinkedList::deleteList() {
	Node *currentptr = this->head;
	Node *temp = new Node();
	while(currentptr != 0) {
		temp = currentptr;
		currentptr = currentptr->next;
		delete temp;
	}
}




void LinkedList::insertAtFirst(int data) {
	Node *node = new Node();
	length++;
	if(head == NULL) {
		head = node;
		node->data = data;
		node->next = NULL;
	} else {
		Node *temp;
		//Node *node = new Node();
		temp = head;
		head = node;
		node->data = data;
		node->next = temp;


	}

}

void LinkedList::deleteFromFront() {
	if(head == NULL)
		cout << "The list is already Empty";
	else {
		Node *temp = head;
		head = temp->next;
		length--;
	}
}

void LinkedList::front() {
	Node *temp = head;
	cout << temp->data;
}

void LinkedList::back() {
	Node *temp, *temp2;
	temp = head;
	temp2 = head->next;

	while(temp2 != NULL) {
		temp = temp->next;
		temp2 = temp2->next;
	}

	cout << temp->data;
}

void LinkedList::center() {
	Node *ptr = head;
	Node *ptr2 = ptr->next;
	while(ptr2 != NULL) {
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
	}
	cout << ptr->data << endl;
}

void LinkedList::print() {
	Node *temp;
	temp = head;
	cout << "Printing";
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;

	}
	delete temp;
}

int main() {
	LinkedList *list = new LinkedList();
	list->insertAtFirst(1);
	list->insertAtFirst(2);
	list->insertAtFirst(3);
	list->insertAtFirst(4);
	list->insertAtFirst(5);
	list->insertAtFirst(6);
	list->insertAtFirst(7);
	list->insertAtFirst(8);
	list->insertAtFirst(9);
	list->deleteFromFront();
	LinkedList *l2(list); //= new LinkedList();	
	//list->front();
	//list->back();
	//list->center();
	list->print();
	cout << "\n\n\n\n";
	l2->print();
	list->lengthOfList();

	delete list;

}