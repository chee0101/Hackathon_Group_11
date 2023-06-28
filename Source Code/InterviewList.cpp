#include "InterviewList.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//append new node at the end of list
void InterviewList::appendNode(int pers, int ques, string speech)
{
	//to create a new node to be appended
	InterviewNode* newNode;
	//traverse the list
	InterviewNode* nodePtr;

	newNode = new InterviewNode;
	//assign value to each variable
	newNode->person = pers;
	newNode->question = ques;
	newNode->dialog = speech;
	newNode->next = nullptr;

	
	if (!head) //head is nullptr
		//assign newNode as head
		head = newNode;
	else
	{
		nodePtr = head;
		//traverse list
		while (nodePtr->next)
		{
			nodePtr = nodePtr->next;
		}
		//assign newNode to last position of list
		nodePtr->next = newNode;
	}
}

//to display specific node
void InterviewList::searchAndDisplayNode(int pers, int ques)
{
	InterviewNode* nodePtr;
	nodePtr = head;
	
	//continue looping until the target node found
	while (nodePtr != nullptr && (nodePtr->person != pers || nodePtr->question != ques))
	{
		nodePtr = nodePtr->next;
	}

	if (nodePtr == nullptr)
	{
		cout << " There is no Interview Session done.\n";
	}
	else
	{
		//assign to string variable for animation display
		string text = nodePtr->dialog;
		for (size_t i = 0; i < text.size(); i++)
		{
			cout << text[i] << flush;
			for (int k = 0; k < 10000000; k++) {
				// Introduce some delay by performing trivial operations
			}
		}
	}
}

//display all detail of node (internal usage)
void InterviewList::displayNode()
{
	//traverse list
	InterviewNode* nodePtr;
	nodePtr = head;

	while (nodePtr)
	{
		//display node
		cout << nodePtr->dialog;
		nodePtr = nodePtr->next;
	}
}

//Destructor
InterviewList::~InterviewList()
{
	//pointer traverse the list
	InterviewNode* nodePtr;
	//pointer point to next node
	InterviewNode* nextNode;

	nodePtr = head;

	while (nodePtr != nullptr)
	{
		//track next node
		nextNode = nodePtr->next;

		//delect current node
		delete nodePtr;

		//assign nodePtr point to next node
		nodePtr = nextNode;
	}
}