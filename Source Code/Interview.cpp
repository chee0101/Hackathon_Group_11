#include "Interview.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//constructor
Interview::Interview()
{
	pers = 0;
	ques = 0;
	interview = "";
}

//read the interview text and save to InterviewList
void Interview::readFile()
{
	//read file
	inputFile.open("Interview Input.txt");

	if (!inputFile)
	{
		cout << "Failed to open Interview Input.txt.";
	}
	else
	{
		//store the interview question and answer to a node
		while (!inputFile.eof())
		{
			inputFile >> pers;
			inputFile >> ques;
			inputFile.ignore();
			getline(inputFile, interview, '*');
			interviewList.appendNode(pers, ques, interview);
		}
	}
	inputFile.close();
}

//to choose specific node and display
void Interview::displayInterview()
{
	
	cout << "\n========== This is Interview Session, you are now interviewing the suspects to get more information. ============\n";
	cout << "|                                                                                                               |\n";
	cout << "|       Press appropriate number to select one of the suspect to ask the question or quit interview session.    |\n";
	cout << "|                                                                                                               |\n";
	cout << "=================================================== Have Fun ====================================================\n";
	int choice1, choice2;

	do
	{
		cout << "\nPress \"Enter\" to continue...\n";
		cin.ignore();
		cin.get();

		//the list of suspect for player to choose
		cout << "----List of suspects----\n";
		cout << "1. Alex\n";
		cout << "2. Sarah\n";
		cout << "3. Mark\n";
		cout << "4. Lily\n";
		cout << "***Press 9 to end the interview session\n\n";
		cout << "Your choice: ";
		cin >> choice1;

		//input validation
		while (choice1 < 1 || choice1 > 4 && choice1 != 9)
		{
			cout << "Invalid choice. Please try again.\n";
			cin >> choice1;
		}

		//to exit
		if (choice1 == 9)
			break;
		else
		{
			cout << endl;

			//display the greeting to suspects
			interviewList.searchAndDisplayNode(choice1, 0);
			cout << endl;

			do
			{
				cout << "\nPress \"Enter\" to continue...\n";
				cin.ignore();
				cin.get();

				//list of questions for player
				cout << "----List of Questions----\n";
				cout << "1. Relationship with Emily\n";
				cout << "2. Time and Location last meet with Emily\n";
				cout << "3. Activity throughout the day of incident\n";
				cout << "4. Suspicious signs if any\n";
				cout << "***Press 9 to end the interview session\n\n";
				cout << "Your choice: ";
				cin >> choice2;

				//input validation
				while (choice2 < 1 || choice2 > 4 && choice2 != 9)
				{
					cout << "Invalid choice. Please try again.\n";
					cin >> choice2;
				}

				//to exit
				if (choice2 == 9)
					break;
				else
				{
					cout << endl;

					//display specific question and answer based on label
					interviewList.searchAndDisplayNode(choice1, choice2);
					cout << endl;
				}


			} 
			while (choice2 != 9);
			cout << endl;

			//display ending of the interview for certain suspect
			interviewList.searchAndDisplayNode(choice1, 5);
			cout << endl;
		}
	} 
	while (choice1 != 9);
}