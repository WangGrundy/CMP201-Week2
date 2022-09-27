// Author William Kavanagh, Abertay.
// w.kavanagh@abertay.ac.uk
// CMP201 Practical 2 -- Partial Solution.

#include <iostream>				// You may want this for testing with a main()
#include <string>				// for std::string required for ToString()
#include "LinkedList.h"	
using namespace std;			// This can stay for now. We will stop using it soon.

// No args constructor, make empty ADT
LinkedList::LinkedList() {
	head = nullptr;
}

// Single element constructor, head with node of value given
LinkedList::LinkedList(int n)
{
	// TODO - assessed [1]
	head = new Node(n); //auto new head
}

// default destructor
LinkedList::~LinkedList()
{
}

// append element to LL with value n
void LinkedList::Insert(int n)
{
	// TODO - assessed [1]
	if (!head) {
		head = new Node(n);
		return;
	}
	Node* temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = new Node(n);


}

// remove first instance of element with value n
void LinkedList::Remove(int n)
{
	// TODO - assessed [1]
	if (head == nullptr) { //sanity check
		return;
	}

	//if head value is equal to n, link the head to the 2nd node
	if (head->data == n) {
		head = head->next;
		return;
	}

	Node* temp = head;

	while (temp->next != nullptr) { //loop through every item in list if next node is not null

		if (temp->next->data == n) { //check if the next node is equal to n

			temp->next = temp->next->next;
			return;
		}
		temp = temp->next;
	}
}

// remove all instances of element with value n
void LinkedList::RemoveAll(int n)
{
	// TODO - assessed [1]
	if (head == nullptr) { //sanity check
		return;
	}

	while (head->data == n) { //finds actual head where its not the target number
		head = head->next;
	}

	Node* temp = head; //makes a temp pointer (traversing pointer)

	//loop through every item in list
	while (temp->next != nullptr) {
		
		if (temp->next->data == n) { //check if the next next node is equal to n
			temp->next = temp->next->next; //make the temp value.next point to the next next value
			continue; //go back to the top of while and do it again.
		}

		temp = temp->next;//next item
	}
	
}

// get size of linkedlist
int LinkedList::Size()
{
	int count = 0;
	Node* temp = head;
	while (temp->next)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

// get pointer to final element in linked list
Node* LinkedList::GetTail()
{
	Node* temp = head;
	if (!head)
	{
		return nullptr;
	}
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	return temp;
}

// print out all elements in order, but pretty.
string LinkedList::ToString()
{
	// TODO - assessed [1]
	string values = "";
	Node* temp = head;

	//whilst the temp head does not equal null, we keep going through the struct.
	while (temp != nullptr) {
		values = values + std::to_string(temp->data) + ",";

		temp = temp->next;
	}
	//remove the last comma //erases everything after size-1 //if its not empty
	if (!values.empty()) {
		values = values.erase(values.size() - 1, 1);
		values = "[" + values + "]"; //tack the square brackets
	}
	

	return values;
}

// Node constructor, set value to n.
Node::Node(int n)
{
	data = n;
	next = nullptr;
}

// Use for testing. Remove or comment out before submitted, or [-1]
//int main()
//{
//	LinkedList LL;
//	LL.Insert(5);
//	LL.Insert(7);
//	cout << (LL.ToString()) << endl;
//
//	LL.Remove(7);
//	cout << (LL.ToString()) << endl;
//
//	LL.RemoveAll(7);
//	cout << (LL.ToString()) << endl;
//}


