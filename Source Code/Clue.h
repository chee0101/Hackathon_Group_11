#ifndef CLUE_H
#define CLUE_H
#include "ClueList.h"
#include "ClueBagList.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Global constant variables
const int TOTAL_CLUES = 20;
const int EMILY_CLUES = 6;
const int ALEX_CLUES = 3;
const int SARAH_CLUES = 3;
const int MARK_CLUES = 3;
const int LILY_CLUES = 3;
const int GARDEN_CLUES = 1;
const int TOILET_CLUES = 1;


class Clue
{
private:
	//Object of class ClueList
	ClueList clueList;

	//Variable of setClue()
	string location, spot, clue, information;
	int clueNumber;

	//Variable of searchClue()
	string loc;
	string point = "POINT";
	int again;

	//Object of class ClueBagList
	ClueBagList clueBagList;
	//Variable to pass searched clue to appendNode() of class ClueBagList
	int foundClueNum = 1;
	string foundClueRoom;
	string foundClue;
	string foundClueInfo;
	
	//Variable of chooseLoc()
	int choiceLoc;

	// Varible of findClueSpot()
	int choiceSpot;

	int chanceEmily = EMILY_CLUES + 2;
	int chanceAlex = ALEX_CLUES + 2;
	int chanceSarah = SARAH_CLUES + 2;
	int chanceMark = MARK_CLUES + 2;
	int chanceLily = LILY_CLUES + 2;
	int chanceGarden = GARDEN_CLUES + 1;
	int chanceToilet = TOILET_CLUES + 1;

	int clueEmily = EMILY_CLUES;
	int clueAlex = ALEX_CLUES;
	int clueSarah = SARAH_CLUES;
	int clueMark = MARK_CLUES;
	int clueLily = LILY_CLUES;
	int clueGarden = GARDEN_CLUES;
	int clueToilet = TOILET_CLUES;

	int indexEmily = 0;
	int indexAlex = 0;
	int indexSarah = 0;
	int indexMark = 0;
	int indexLily = 0;
	int indexGarden = 0;
	int indexToilet = 0;

	int arrEmily[10] = { 0 };
	int arrAlex[7] = { 0 };
	int arrSarah[7] = { 0 };
	int arrMark[7] = { 0 };
	int arrLily[7] = { 0 };
	int arrGarden[3] = { 0 };
	int arrToilet[3] = {0};

public:
	//Constructor
	Clue()
	{};

	//Destructor
	~Clue()
	{};

	//Passing clue input data into linked list ClueList 
	void setClue();
	
	//Clue saerching
	void searchClue();

	//call by serachClue()
	string chooseLoc();
	//call by searchClue()
	string findClueSpot(string, bool&);

	//Save user input -- write file
	void saveProgress();
	//Restore historical data
	void setPrevious();

	//Display clue store in clue bag
	void displayNode();
};
#endif