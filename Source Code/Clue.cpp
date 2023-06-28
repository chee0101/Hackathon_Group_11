#include "Clue.h"
#include <iostream>
using namespace std;

//Read the clue from "Clue Input.txt" and create linked list ClueList
void Clue::setClue()
{
	ifstream inputFile;
	inputFile.open("Clue Input.txt");

	if (!inputFile)
	{
		cout << "Failed to open Clue Input.txt" << endl;
	}
	else
	{
		// Get information of each node of ClueList
		for (int i = 1; i <= TOTAL_CLUES; i++)
		{
			getline(inputFile, location);
			getline(inputFile, spot);
			inputFile >> clueNumber;
			inputFile.ignore();
			getline(inputFile, clue);
			getline(inputFile, information);

			//append the ClueList
			clueList.appendNode(location, spot, clueNumber, clue, information);
		}
	}
	inputFile.close();
}

//Series of operations in clue searcching session
void Clue::searchClue()
{
	cout << "\n====== This is Clue Searching Session, you are granted permission to investigate each area of the cottage. ======\n";
	cout << "|                                                                                                               |\n";
	cout << "|                                 Press \"Enter\" if you want to continue.                                        |\n";
	cout << "|                                                                                                               |\n";
	cout << "=================================================== Have Fun ====================================================\n";
	cout << "Press \"Enter\" to continue...\n";
	cin.ignore();
	cin.get();
	do
	{
		//Get the string of chosen location
		loc = chooseLoc();

		//bool value to check for remaining chances and unfound clues
		bool canSearch = true;

		string text = "\nEntering......\n";
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

		cout << "-----------------------------------------------------\n";
		cout << "You're now in " << loc << endl;

		for (int i = 0; i < 500000000; )
		{
			i++;
		}

		do
		{
			//if the chosen spot has no clue
			if (point == "")
			{
				string text2 = "\nThere is no clue in this spot. Try again...\n";
				for (size_t i = 0; i < text2.size(); i++)
				{
					cout << text2[i] << flush;
					for (int k = 0; k < 5000000; k++) {
						// Introduce some delay by performing trivial operations
					}
				}

				for (int i = 0; i < 500000000; )
				{
					i++;
				}
			}

			//if the chosen spot is repeated
			else if (point == "REPEATED")
			{
				string text3 = "\nYou've explored this spot. Choose again...\n";
				for (size_t i = 0; i < text3.size(); i++)
				{
					cout << text3[i] << flush;
					for (int k = 0; k < 5000000; k++) {
						// Introduce some delay by performing trivial operations
					}
				}

				for (int i = 0; i < 500000000; )
				{
					i++;
				}
			}

			//Get the string of chosen spot
			point = findClueSpot(loc, canSearch);
		} 
		//Repeat the loop if chosen spots have no clue or repeated
		while (point == "" || point == "REPEATED" && canSearch);


		//if want to exit that area
		//or all the clues are searched in that area
		//or no more chance to search that area
		//---leave the area
		if (point == "EXIT" || point == "FINISH" || point == "NO")
		{
			string text4 = "\nLeaving......\n";
			for (size_t i = 0; i < text4.size(); i++)
			{
				cout << text4[i] << flush;
				for (int k = 0; k < 5000000; k++) {
					// Introduce some delay by performing trivial operations
				}
			}

			for (int i = 0; i < 500000000; )
			{
				i++;
			}

			cout << "-----------------------------------------------------\n";
			cout << "You've left " << loc << endl;
			
			for (int i = 0; i < 500000000; )
			{
				i++;
			}
		}

		//clues are found
		else
		{
			//find the found clue in ClueList to display
			clueList.searchAndDisplayNode(loc, point);

			//foundClueNum is used to track the numbering of found clue
			if (foundClueNum <= TOTAL_CLUES)
			{
				//get string of room
				foundClueRoom = clueList.getFoundClueRoom(loc, point);
				//get string of clue
				foundClue = clueList.getFoundClue(loc, point);
				//get string of clue information
				foundClueInfo = clueList.getFoundClueInfo(loc, point);

				//pass the info of found clue to ClueBagList
				clueBagList.appendNode(foundClueNum, foundClueRoom, foundClue, foundClueInfo);
				foundClueNum++;
			}
		}

		cout << "\nPress 1 to continue searching clues.\n";
		cout << "Press 0 to stop searching clues.\n";
		cin >> again;

		//Input validation
		while (again != 1 && again != 0)
		{
			cout << "Invalid input, try again.\n";
			cout << "Press 1 to continue searching clues.\n";
			cout << "Press 0 to stop searching clues.\n";
			cin >> again;
		}
	}
	// loop again to continue searching clues
	while (again == 1);
}

//choose the area to search
string Clue::chooseLoc()
{
	cout << "\nEnter the corresponding number to choose the location for investigation: " << endl;
	cout << "-----------------Where you want to go?-----------------" << endl;
	cout << "1. Emily's Room\n";
	cout << "2. Alex's Room\n";
	cout << "3. Sarah's Room\n";
	cout << "4. Mark's Room\n";
	cout << "5. Lily's Room\n";
	cout << "6. Garden\n";
	cout << "7. Toilet\n";
	cin >> choiceLoc;

	//Input validation
	while (choiceLoc < 1 || choiceLoc > 7)
	{
		cout << "Invalid choice. Please try again.\n";
		cin >> choiceLoc;
	}

	switch (choiceLoc)
	{
	case 1:
		return "Emily's Room";
	case 2:
		return "Alex's Room";
	case 3:
		return "Sarah's Room";
	case 4:
		return "Mark's Room";
	case 5:
		return "Lily's Room";
	case 6:
		return "Garden";
	case 7:
		return "Toilet";
	}
}

//choose the spot in that area to search
string Clue::findClueSpot(string loc, bool & canSearch)
{
	if (loc == "Emily's Room")
	{
		if (chanceEmily == 0)
		{
			cout << "\nNo more chance to search this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "NO";
		}

		if (clueEmily == 0)
		{
			cout << "\nYou've found all clues in this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "FINISH";
		}

		cout << "\nThere are " << clueEmily << " unfound clues here.\n";
		cout << "You have " << chanceEmily << " chances to choose spots containing clues.\n\n";
		cout << "Press \"Enter\" to continue...";

		chanceEmily--;

		cin.ignore();
		cin.get();

		//10 choices of spots
		cout << "----List of spots----\n";
		cout << "1. Phone\n";
		cout << "2. Window\n";
		cout << "3. Table\n";
		cout << "4. Wastebasket\n";
		cout << "5. Bookshelf\n";
		cout << "6. Bed\n";
		cout << "7. Floor\n";
		cout << "8. Beg\n";
		cout << "9. Drawer\n";
		cout << "10. Closet\n";
		cout << "***Press 0 to exit this area\n\n";

		cin >> choiceSpot;
		//Input validation
		while (choiceSpot < 0 || choiceSpot > 10)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choiceSpot;
		}

		//avoid repeated choice of spot
		if (choiceSpot != 0)
		{
			for (int i = 0; i < 10; i++)
			{
				if (choiceSpot == arrEmily[i])
				{
					chanceEmily++;
					return "REPEATED";
				}
			}
			arrEmily[indexEmily] = choiceSpot;
			indexEmily++;
		}

		switch (choiceSpot)
		{
		case 0:
			chanceEmily++;
			return "EXIT";
		case 1:
			clueEmily--;
			return "Phone";
		case 3:
			clueEmily--;
			return "Table";
		case 6:
			clueEmily--;
			return "Bed";
		case 7:
			clueEmily--;
			return "Floor";
		case 9:
			clueEmily--;
			return "Drawer";
		case 10:
			clueEmily--;
			return "Closet";

			//Spot with no clue		
		case 2:
		case 4:
		case 5:
		case 8:
			return "";
		}

	}
	else if (loc == "Alex's Room")
	{
		if (chanceAlex == 0)
		{
			cout << "\nNo more chance to search this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "NO";
		}

		if (clueAlex == 0)
		{
			cout << "\nYou've found all clues in this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "FINISH";
		}

		cout << "\nThere are " << clueAlex << " clues here.\n";
		cout << "You have " << chanceAlex << " chances to choose spots containing clues.\n\n";
		cout << "Press \"Enter\" to continue...";

		chanceAlex--;

		cin.ignore();
		cin.get();

		//7 choices of spots
		cout << "----List of spots----\n";
		cout << "1. Phone\n";
		cout << "2. Drawer\n";
		cout << "3. Table\n";
		cout << "4. Shoes\n";
		cout << "5. Document file\n";
		cout << "6. Bed\n";
		cout << "7. Laundry basket\n";
		cout << "***Press 0 to exit this area\n\n";

		cin >> choiceSpot;
		//Input validation
		while (choiceSpot < 0 || choiceSpot > 7)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choiceSpot;
		}

		//avoid repeated choice of spot
		if (choiceSpot != 0)
		{
			for (int i = 0; i < 7; i++)
			{
				if (choiceSpot == arrAlex[i])
				{
					chanceAlex++;
					return "REPEATED";
				}
			}
			arrAlex[indexAlex] = choiceSpot;
			indexAlex++;
		}

		switch (choiceSpot)
		{
		case 0:
			chanceAlex++;
			return "EXIT";
		case 1:
			clueAlex--;
			return "Phone";
		case 2:
			clueAlex--;
			return "Drawer";
		case 5:
			clueAlex--;
			return "Document file";

			//Spot with no clue
		case 3:
		case 4:
		case 6:
		case 7:
			return "";
		}
	}
	else if (loc == "Sarah's Room")
	{
		if (chanceSarah == 0)
		{
			cout << "\nNo more chance to search this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "NO";
		}

		if (clueSarah == 0)
		{
			cout << "\nYou've found all clues in this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "FINISH";
		}

		cout << "\nThere are " << clueSarah << " clues here.\n";
		cout << "You have " << chanceSarah << " chances to choose spots containing clues.\n\n";
		cout << "Press \"Enter\" to continue...";

		chanceSarah--;

		cin.ignore();
		cin.get();

		//7 choices of spots
		cout << "----List of spots----\n";
		cout << "1. Window\n";
		cout << "2. Drawer\n";
		cout << "3. Table\n";
		cout << "4. Cabinet\n";
		cout << "5. Purse\n";
		cout << "6. Wastebasket\n";
		cout << "7. Laundry basket\n";
		cout << "***Press 0 to exit this area\n\n";

		cin >> choiceSpot;
		//Input validation
		while (choiceSpot < 0 || choiceSpot > 7)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choiceSpot;
		}

		//avoid repeated choice of spot
		if (choiceSpot != 0)
		{
			for (int i = 0; i < 7; i++)
			{
				if (choiceSpot == arrSarah[i])
				{
					chanceSarah++;
					return "REPEATED";
				}
			}
			arrSarah[indexSarah] = choiceSpot;
			indexSarah++;
		}

		switch (choiceSpot)
		{
		case 0:
			chanceSarah++;
			return "EXIT";
		case 2:
			clueSarah--;
			return "Drawer";
		case 3:
			clueSarah--;
			return "Table";
		case 6:
			clueSarah--;
			return "Wastebasket";

			// Spot with no clue
		case 1:
		case 4:
		case 5:
		case 7:
			return "";
		}

	}
	else if (loc == "Mark's Room")
	{
		if (chanceMark == 0)
		{
			cout << "\nNo more chance to search this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "NO";
		}

		if (clueMark == 0)
		{
			cout << "\nYou've found all clues in this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "FINISH";
		}

		cout << "\nThere are " << clueMark << " clues here.\n";
		cout << "You have " << chanceMark << " chances to choose spots containing clues.\n\n";
		cout << "Press \"Enter\" to continue...";

		chanceMark--;

		cin.ignore();
		cin.get();

		// 7 choices of spots
		cout << "----List of spots----\n";
		cout << "1. Bag\n";
		cout << "2. Drawer\n";
		cout << "3. Table\n";
		cout << "4. Metal box\n";
		cout << "5. Bed\n";
		cout << "6. Document file\n";
		cout << "7. Jacket\n";
		cout << "***Press 0 to exit this area\n\n";

		cin >> choiceSpot;
		//Input validation
		while (choiceSpot < 0 || choiceSpot > 7)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choiceSpot;
		}

		//avoid repeated choice of spot
		if (choiceSpot != 0)
		{
			for (int i = 0; i < 7; i++)
			{
				if (choiceSpot == arrMark[i])
				{
					chanceMark++;
					return "REPEATED";
				}
			}
			arrMark[indexMark] = choiceSpot;
			indexMark++;
		}

		switch (choiceSpot)
		{
		case 0:
			chanceMark++;
			return "EXIT";
		case 2:
			clueMark--;
			return "Drawer";
		case 4:
			clueMark--;
			return "Metal box";
		case 5:
			clueMark--;
			return "Bed";

			//Spot with no clue
		case 1:
		case 3:
		case 6:
		case 7:
			return "";
		}
	}
	else if (loc == "Lily's Room")
	{
		if (chanceLily == 0)
		{
			cout << "\nNo more chance to search this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "NO";
		}

		if (clueLily == 0)
		{
			cout << "\nYou've found all clues in this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "FINISH";
		}

		cout << "\nThere are " << clueLily << " clues here.\n";
		cout << "You have " << chanceLily << " chances to choose spots containing clues.\n\n";
		cout << "Press \"Enter\" to continue...";

		chanceLily--;

		cin.ignore();
		cin.get();

		//7 choices of spots
		cout << "----List of spots----\n";
		cout << "1. Bag\n";
		cout << "2. Drawer\n";
		cout << "3. Table\n";
		cout << "4. Bookshelf\n";
		cout << "5. Bed\n";
		cout << "6. Wastebasket\n";
		cout << "7. Phone\n";
		cout << "***Press 0 to exit this area\n\n";

		cin >> choiceSpot;
		//Input validation
		while (choiceSpot < 0 || choiceSpot > 7)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choiceSpot;
		}

		//avoid repeated choice of spot
		if (choiceSpot != 0)
		{
			for (int i = 0; i < 7; i++)
			{
				if (choiceSpot == arrLily[i])
				{
					chanceLily++;
					return "REPEATED";
				}
			}
			arrLily[indexLily] = choiceSpot;
			indexLily++;
		}

		switch (choiceSpot)
		{
		case 0:
			chanceLily++;
			return "EXIT";
		case 1:
			clueLily--;
			return "Bag";
		case 6:
			clueLily--;
			return "Wastebasket";
		case 7:
			clueLily--;
			return "Phone";

			//Spot with no clue
		case 2:
		case 3:
		case 4:
		case 5:
			return "";
		}

	}
	else if (loc == "Garden")
	{
		if (chanceGarden == 0)
		{
			cout << "\nNo more chance to search this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "NO";
		}

		if (clueGarden == 0)
		{
			cout << "\nYou've found all clues in this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "FINISH";
		}

		cout << "\nThere are " << clueGarden << " clues here.\n";
		cout << "You have " << chanceGarden << " chances to choose spots containing clues.\n\n";
		cout << "Press \"Enter\" to continue...";

		chanceGarden--;

		cin.ignore();
		cin.get();

		//3 choices of spots
		cout << "----List of spots----\n";
		cout << "1. Flower pot\n";
		cout << "2. Swing\n";
		cout << "3. Flower bed\n";
		cout << "***Press 0 to exit this area\n\n";

		cin >> choiceSpot;
		//Input validation
		while (choiceSpot < 0 || choiceSpot > 3)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choiceSpot;
		}

		//avoid repeated choice of spot
		if (choiceSpot != 0)
		{
			for (int i = 0; i < 3; i++)
			{
				if (choiceSpot == arrGarden[i])
				{
					chanceGarden++;
					return "REPEATED";
				}
			}
			arrGarden[indexGarden] = choiceSpot;
			indexGarden++;
		}

		switch (choiceSpot)
		{
		case 0:
			chanceGarden++;
			return "EXIT";
		case 3:
			clueGarden--;
			return "Flower bed";

			//Spot with no clue
		case 1:
		case 2:
			return "";
		}
	}
	else if (loc == "Toilet")
	{
		if (chanceToilet == 0)
		{
			cout << "\nNo more chance to search this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "NO";
		}

		if (clueToilet == 0)
		{
			cout << "\nYou've found all clues in this area.\n";

			for (int i = 0; i < 300000000; )
			{
				i++;
			}

			canSearch = false;
			return "FINISH";
		}

		cout << "\nThere are " << clueToilet << " clues here.\n";
		cout << "You have " << chanceToilet << " chances to choose spots containing clues.\n\n";
		cout << "Press \"Enter\" to continue...";

		chanceToilet--;

		cin.ignore();
		cin.get();

		//3 choices of spots
		cout << "----List of spots----\n";
		cout << "1. Towel\n";
		cout << "2. Sink\n";
		cout << "3. Bathtub\n";
		cout << "***Press 0 to exit this area\n\n";

		cin >> choiceSpot;
		//Input validation
		while (choiceSpot < 0 || choiceSpot > 3)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choiceSpot;
		}

		//avoid repeated choice of spot
		if (choiceSpot != 0)
		{
			for (int i = 0; i < 3; i++)
			{
				if (choiceSpot == arrToilet[i])
				{
					chanceToilet++;
					return "REPEATED";
				}
			}
			arrToilet[indexToilet] = choiceSpot;
			indexToilet++;
		}

		switch (choiceSpot)
		{
		case 0:
			chanceToilet++;
			return "EXIT";
		case 2:
			clueToilet--;
			return "Sink";

			//Spot with no clue 
		case 1:
		case 3:
			return "";
		}
	}
}

//save the progess of player
void Clue::saveProgress()
{
	string text = "\nSaving your progress...\n";
	for (size_t i = 0; i < text.size(); i++)
	{
		cout << text[i] << flush;
		for (int k = 0; k < 5000000; k++) {
			// Introduce some delay by performing trivial operations
		}
	}

	ofstream outputFile;

	//Open an output file -- Progress.txt to store historical data
	outputFile.open("Progress.txt");

	//Indicator: There is a previous version saved in Progress.txt
	outputFile << "O" << endl;

	//Writing historical data
	outputFile << chanceEmily << endl;
	outputFile << chanceAlex << endl;
	outputFile << chanceSarah << endl;
	outputFile << chanceMark << endl;
	outputFile << chanceLily << endl;
	outputFile << chanceGarden << endl;
	outputFile << chanceToilet << endl;

	outputFile << clueEmily << endl;
	outputFile << clueAlex << endl;
	outputFile << clueSarah << endl;
	outputFile << clueMark << endl;
	outputFile << clueLily << endl;
	outputFile << clueGarden << endl;
	outputFile << clueToilet << endl;

	outputFile << indexEmily << endl;
	outputFile << indexAlex << endl;
	outputFile << indexSarah << endl;
	outputFile << indexMark << endl;
	outputFile << indexLily << endl;
	outputFile << indexGarden << endl;
	outputFile << indexToilet << endl;


	//Chosen choices in Emily's room
	for (int i = 0; arrEmily[i] != 0 && i < 10; i++)
	{
		outputFile << arrEmily[i] << endl;
	}

	//Chosen choices in Alex's room
	for (int i = 0; arrAlex[i] != 0 && i < 7; i++)
	{
		outputFile << arrAlex[i] << endl;
	}

	//Chosen choices in Sarah's room
	for (int i = 0; arrSarah[i] != 0 && i < 7; i++)
	{
		outputFile << arrSarah[i] << endl;
	}
	
	//Chosen choices in Mark's room
	for (int i = 0; arrMark[i] != 0 && i < 7; i++)
	{
		outputFile << arrMark[i] << endl;
	}

	//Chosen choices in Lily's room
	for (int i = 0; arrLily[i] != 0 && i < 7; i++)
	{
		outputFile << arrLily[i] << endl;
	}

	//Chosen choices in Garden
	for (int i = 0; arrGarden[i] != 0 && i < 3; i++)
	{
		outputFile << arrGarden[i] << endl;
	}

	//Chosen choices in Toilet
	for (int i = 0; arrToilet[i] != 0 && i < 3; i++)
	{
		outputFile << arrToilet[i] << endl;
	}

	//Clue Bag
	while (foundClueNum>1)
	{
		outputFile << clueBagList.getNumbering() << endl;
		outputFile << clueBagList.getFoundClueRoom() << endl;
		outputFile << clueBagList.getFoundClue() << endl;
		outputFile << clueBagList.getFoundClueInfo() << endl;
		foundClueNum--;
	}

	//Let -1 as the indicator of end of file
	outputFile << -1;

	outputFile.close();

	string text2 = "Progress saved.\n";
	for (size_t i = 0; i < text2.size(); i++)
	{
		cout << text2[i] << flush;
		for (int k = 0; k < 5000000; k++) {
			// Introduce some delay by performing trivial operations
		}
	}
	
}

//restore the historical data
void Clue::setPrevious()
{
	string text = "\nRestoring your previous progress... \n";
	for (size_t i = 0; i < text.size(); i++)
	{
		cout << text[i] << flush;
		for (int k = 0; k < 5000000; k++) {
			// Introduce some delay by performing trivial operations
		}
	}

	ifstream inputFile;
	char indicatorO;

	//Read historical data from Progress.txt 
	inputFile.open("Progress.txt");


	if (!inputFile)
	{
		cout << "Error opening Progress. txt\n";
		cout << "Returning to the main menu...\n\n";
		return;
	}
	else
	{
		//Check indicator
		inputFile >> indicatorO;

		if (indicatorO != 'O')
		{
			cout << "Error reading historical data...\n";
			cout << "Returning to main menu...\n\n";
			return;
		}

		//Reading historical data
		inputFile >> chanceEmily;
		inputFile >> chanceAlex;
		inputFile >> chanceSarah;
		inputFile >> chanceMark;
		inputFile >> chanceLily;
		inputFile >> chanceGarden;
		inputFile >> chanceToilet;

		inputFile >> clueEmily;
		inputFile >> clueAlex;
		inputFile >> clueSarah;
		inputFile >> clueMark;
		inputFile >> clueLily;
		inputFile >> clueGarden;
		inputFile >> clueToilet;

		inputFile >> indexEmily;
		inputFile >> indexAlex;
		inputFile >> indexSarah;
		inputFile >> indexMark;
		inputFile >> indexLily;
		inputFile >> indexGarden;
		inputFile >> indexToilet;

		//Chosen choices in Emily's room
		for (int i = 0; i < indexEmily; i++)
		{
			inputFile >> arrEmily[i];
		}

		//Chosen choices in Alex's room
		for (int i = 0; i < indexAlex; i++)
		{
			inputFile >> arrAlex[i];
		}

		//Chosen choices in Sarah's room
		for (int i = 0; i < indexSarah; i++)
		{
			inputFile >> arrSarah[i];
		}

		//Chosen choices in Mark's room
		for (int i = 0; i < indexMark; i++)
		{
			inputFile >> arrMark[i];
		}

		//Chosen choices in Lily's room
		for (int i = 0; i < indexLily; i++)
		{
			inputFile >> arrLily[i];
		}

		//Chosen choices in Garden
		for (int i = 0; i < indexGarden; i++)
		{
			inputFile >> arrGarden[i];
		}

		//Chosen choices in Toilet
		for (int i = 0; i < indexToilet; i++)
		{
			inputFile >> arrToilet[i];
		}

		inputFile.ignore();

		//temporary variable holding valid foundClueNum
		int temp;

		//Clue Bag
		while (!inputFile.eof())
		{
			inputFile >> foundClueNum;

			if (foundClueNum > 0)
				temp = foundClueNum;

			// To check indicator of end of file
			else if (foundClueNum < 0)
				break;

			inputFile.ignore();
			getline(inputFile, foundClueRoom);
			getline(inputFile, foundClue);
			getline(inputFile, foundClueInfo);


			clueBagList.appendNode(foundClueNum, foundClueRoom, foundClue, foundClueInfo);
		}
		//update the value of foundClueNum
		//it will continue the numbering in clue bag
		foundClueNum = temp + 1;

		inputFile.close();

		string text2 = "All done! Enjoy your game!\n-------------------------------------------------------------------------\n";
		for (size_t i = 0; i < text2.size(); i++)
		{
			cout << text2[i] << flush;
			for (int k = 0; k < 5000000; k++) {
				// Introduce some delay by performing trivial operations
			}
		}
	}
}

//to access the function of clueBagList object
//to display clue bag
void Clue::displayNode()
{
	clueBagList.displayNode();
}