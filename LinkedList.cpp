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
}

// default destructor
LinkedList::~LinkedList()
{
}

// append element to LL with value n
void LinkedList::Insert(int n)
{
	// TODO - assessed [1]
}

// remove first instance of element with value n
void LinkedList::Remove(int n)
{
	// TODO - assessed [1]
}

// remove all instances of element with value n
void LinkedList::RemoveAll(int n)
{
	// TODO - assessed [1]
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
	return "";
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
//	
//}


