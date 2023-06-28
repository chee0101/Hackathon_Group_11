#include "ClueBagList.h"
#include <iostream>
using namespace std;

//append the new node at the end of the list
void ClueBagList::appendNode(int num, string clueRoom, string clue, string clueInfo)
{
	//pointer pointing new node
	ClueBag* newNode;

	//pointer traverse the list
	ClueBag* nodePtr;

	//allocate a new node
	newNode = new ClueBag;

	newNode->numbering = num;
	newNode->foundClueRoom = clueRoom;
	newNode->foundClue = clue;
	newNode->foundClueInfo = clueInfo;
	//newNode->next = nullptr;

	//if it is an empty list
	//newNode is the first node
	if (head == nullptr)
	{
		head = newNode;
	}

	//else, append newNode at the end
	else
	{
		nodePtr = head;

		while (nodePtr->next != nullptr)
		{
			nodePtr = nodePtr->next;
		}

		//Found previous last node
		// Set newNode as the last node
		nodePtr->next = newNode;
	}
}

//to display whole ClueBagList 
void ClueBagList::displayNode()
{
	ClueBag* nodePtr;

	nodePtr = head;

	//If the ClueBagList is empty
	if (nodePtr == nullptr)
	{
		cout << "\nYou haven't found any clue! Keep searching them again.\n";
		return;
	}

	else
	{
		cout << "\n=================================================================================================================\n";
		cout << "|                                                                                                               |\n";
		cout << "|                                          What's In Your Clue Bag ?                                            |\n";
		cout << "|                                                                                                               |\n";
		cout << "=================================================== Have Fun ====================================================\n\n";

		//Continue looping if haven't reach the end of the list
		while (nodePtr != nullptr)
		{
			cout << "---------------CLUE #" << nodePtr->numbering << "---------------" << endl;
			cout << "Location\t: ";
			cout << nodePtr->foundClueRoom << endl;
			cout << "Evidence\t: ";
			cout << nodePtr->foundClue << endl;
			cout << "Detail  \t: ";
			cout << nodePtr->foundClueInfo << endl << endl;
			nodePtr = nodePtr->next;
		}

		cout << "Press \"Enter\" to continue...";
		cin.ignore();
		cin.get();

		return;
	}
}

//return the numbering to be store in output file when saving
int ClueBagList::getNumbering() const
{
	//static local variable to keep tracking the list
	static int countNum = 1;

	ClueBag* nodePtr;

	nodePtr = head;

	//while haven't reach the end of list
	//and the node with specific numbering is not found 
	while (nodePtr->next != nullptr && nodePtr->numbering != countNum)
		nodePtr = nodePtr->next;

	//update counter
	countNum++;

	return nodePtr->numbering;
}

//return the room string to be store in output file when saving
string ClueBagList::getFoundClueRoom() const
{
	static int countNum = 1;

	ClueBag* nodePtr;

	nodePtr = head;

	while (nodePtr->next != nullptr && nodePtr->numbering != countNum)
		nodePtr = nodePtr->next;

	countNum++;

	return nodePtr->foundClueRoom;
}

//return the clue string to be store in output file when saving
string ClueBagList::getFoundClue() const
{
	static int countNum = 1;

	ClueBag* nodePtr;

	nodePtr = head;

	while (nodePtr->next != nullptr && nodePtr->numbering != countNum)
		nodePtr = nodePtr->next;

	countNum++;

	return nodePtr->foundClue;
}

//return the clue information string to be store in output file when saving
string ClueBagList::getFoundClueInfo() const
{
	static int countNum = 1;

	ClueBag* nodePtr;

	nodePtr = head;

	while (nodePtr->next != nullptr && nodePtr->numbering != countNum)
		nodePtr = nodePtr->next;

	countNum++;

	return nodePtr->foundClueInfo;
}

//Destructor
ClueBagList::~ClueBagList()
{
	//pointer traverse the list
	ClueBag* nodePtr;

	//pointer points to next node
	ClueBag* nextNode;

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