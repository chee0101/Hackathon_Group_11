#ifndef GAME_H
#define GAME_H
#include "Clue.h"
#include "Interview.h"

#include <fstream>
#include <string>
using namespace std;

class Game
{
private:
	//create object of class Clue
	Clue clue;

	// Variables for story background & ending
	string text;
	ifstream inputFile;

	//create object of class Interview
	Interview interview;

public:
	Game()
	{ text = ""; }
	~Game() {}

	void storyBackground();
	void displayMenu2();
	void exitOrNot(string);
	void newGame();
	void exitWithoutSave();
	void exitPopUp();
	void displayMenu1();
	void play();
	void resumeGame();

	void guessMurderer();
	void ending();
};

#endif