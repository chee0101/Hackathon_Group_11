#ifndef CLUEBAGLIST_H
#define CLUEBAGLIST_H
#include <iostream>
using namespace std;


class ClueBagList
{
private:
	//One node holds all the information of found clue
	struct ClueBag
	{
		int numbering;
		string foundClueRoom;
		string foundClue;
		string foundClueInfo;
		ClueBag* next = nullptr;
	};

	//head pointer of the list
	ClueBag* head;

public:
	ClueBagList()
	{
		head = nullptr;
	}
	~ClueBagList();
	void appendNode(int, string, string, string);
	void displayNode();
	int getNumbering() const;
	string getFoundClueRoom() const;
	string getFoundClue() const;
	string getFoundClueInfo() const;
};

#endif