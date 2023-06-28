#include "ClueList.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int TOTAL_CLUES = 20;

//append the new node at the end of the list
void ClueList::appendNode(string loc, string point, int num, string content, string info)
{
	//pointer pointing new node
	ClueNode* newNode;

	//pointer traverse the list
	ClueNode* nodePtr;

	//allocate a new node
	newNode = new ClueNode;

	newNode->location = loc;
	newNode->spot = point;
	newNode->clueNumber = num;
	newNode->clue = content;
	newNode->information = info;
	newNode->next = nullptr;
	newNode->back = nullptr;

	//if it is an empty list
	//newNode is the first and last node
	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}

	//else, append newNode at the end
	else
	{
		nodePtr = tail;
		nodePtr->next = newNode;
		newNode->back = nodePtr;
		tail = newNode;
	}
}

//to display specific node (found clue)
void ClueList::searchAndDisplayNode(string loc, string point)
{
	//pointer traverse the list
	ClueNode* nodePtr;
	nodePtr = head;

	//cout << loc << endl;
	//cout << num << endl;

	string text =  "\n========= Congrats!!! You have found the following clue:=========\n\n";
	for (size_t i = 0; i < text.size(); i++)
	{
		cout << text[i] << flush;
		for (int k = 0; k < 5000000; k++) {
			// Introduce some delay by performing trivial operations
		}
	}

	for (int i = 0; i < 500000000; )
	{
		i++;
	}

	while (nodePtr != nullptr && (nodePtr->location != loc || nodePtr->spot != point))
	{
		nodePtr = nodePtr->next;
	}



	if (nodePtr == nullptr)
	{
		cout << "Error finding clues in this location\n";
	}
	else
	{
		cout << "----------------In " << nodePtr->location << "----------------" << endl;
		cout << "You have found: " << nodePtr->clue << endl;
		cout << "\nInformation gained from this clue:" << endl;
		cout << nodePtr->information << endl;
	}

	cout << "\nPress \"Enter\" to continue...";
	cin.ignore();
	cin.get();

	return;
}

//return the room string
string ClueList::getFoundClueRoom(string loc, string point) const
{
	ClueNode* nodePtr = head;

	//Continue looping until node with specific location and spot is found
	while (nodePtr != nullptr && (nodePtr->location != loc || nodePtr->spot != point))
	{
		nodePtr = nodePtr->next;
	}

	if (nodePtr == nullptr)
	{
		cout << "The list is empty or target clue not found\n";
	}
	else
		return nodePtr->location;
}

//return the clue string
string ClueList::getFoundClue(string loc, string point) const
{
	ClueNode* nodePtr = head;

	//Continue looping until node with specific location and spot is found
	while (nodePtr != nullptr && (nodePtr->location != loc || nodePtr->spot != point))
	{
		nodePtr = nodePtr->next;
	}

	if (nodePtr == nullptr)
	{
		cout << "The list is empty or target clue not found\n";
	}
	else
		return nodePtr->clue;
}

//return the clue information string
string ClueList::getFoundClueInfo(string loc, string point) const
{
	ClueNode* nodePtr = head;

	//Continue looping until node with specific location and spot is found
	while (nodePtr != nullptr && (nodePtr->location != loc || nodePtr->spot != point))
	{
		nodePtr = nodePtr->next;
	}

	if (nodePtr == nullptr)
	{
		cout << "The list is empty or target clue not found\n";
	}
	else
		return nodePtr->information;
}

//display the whole clueList (internal usage)
void ClueList::displayNode()
{
	ClueNode* nodePtr;
	nodePtr = head;

	//Continue looping until reaching the end of the list
	while (nodePtr)
	{
		cout << nodePtr->location << endl;
		cout << nodePtr->spot << endl;
		cout << nodePtr->clueNumber << endl;
		cout << nodePtr->clue << endl;
		cout << nodePtr->information << endl;

		nodePtr = nodePtr->next;
	}
}

//Destructor
ClueList::~ClueList()
{
	//pointer traverse the list
	ClueNode* nodePtr;

	//pointer points to next node
	ClueNode* nextNode;

	nodePtr = head;

	while (nodePtr != nullptr)
	{
		// traking next node
		nextNode = nodePtr->next;

		//delete current node
		delete nodePtr;

		//update the nodePtr to point to next node
		nodePtr = nextNode;
	}
}