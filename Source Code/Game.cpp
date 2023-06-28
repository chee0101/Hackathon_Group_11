#include "Game.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// Function to start the game by displaying welcoming screen
void Game::play()
{
    cout << "                                     -@#.   =*%*\n";
    cout << "                                     .%#@=+%%%#.\n";
    cout << "                                  .-+*#@@@@@@@#*+=:\n";
    cout << "                              -+#@@@@@@@@@@@@@@@@@@@#+.\n";
    cout << "                          .=#@@@@@@@@@@@@@@@@@@@@@@@@@@@+.\n";
    cout << "                        .*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*\n";
    cout << "                       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%:\n";
    cout << "                     =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*\n";
    cout << "                   .%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n";
    cout << "                  .%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*\n";
    cout << "                 :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-\n";
    cout << "                :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n";
    cout << "                %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%\n";
    cout << "               #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+\n";
    cout << "            .+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+\n";
    cout << "         .=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-\n";
    cout << "      :+#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%+.\n";
    cout << "   -*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#.\n";
    cout << ":*@@@@@@@@@@@@@%#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#-\n";
    cout << "                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@--=*#%@@@@@@*:\n";
    cout << "                =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "                 +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%\n";
    cout << "                 :#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*\n";
    cout << "                -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:\n";
    cout << "                #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*\n";
    cout << "               +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:\n";
    cout << "               @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%\n";
    cout << "              +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+   .=#@:\n";
    cout << "              #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@% -+%@@@@+\n";
    cout << "                     :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%\n";
    cout << "                    .#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-\n";
    cout << "                  =%@@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%\n";
    cout << "                =@@*.  +#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=\n";
    cout << "               =@@*      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:\n";
    cout << "   :=+#%@@@@@=.@@@      #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n";
    cout << " *@@@@@@@@@@@@#@@*     -@@@@@@@@@@@@@@%#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n";
    cout << " %@@@@@@@@@@@@@@@-      *@@@@@@@@@%+:  +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%\n";
    cout << " -@@@@@@@@@@@@@@%        .+###*+-.  :#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%:\n";
    cout << "  =@@@@@@@@@@@@@:                .+%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=\n";
    cout << "   +@@@@@@@@@@*.                +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+\n";
    cout << "    .=*#%%#*=.               :*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%:\n";
    cout << "                           .*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:\n";
    cout << "                         .*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:\n";
    cout << "                        +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-\n";
    cout << "                      :%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-\n";
    cout << "                      ---::.:%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.\n";
    cout << "                           +@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%\n";
    cout << "                          #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#\n";
    cout << "                        :%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@=\n";
    cout << "                       -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "                      -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "==================================================================================================\n";
	cout << "||    __      __  __     __   _______      __   ________     __________  __     __  ________    ||\n";
	cout << "||   |  |    |  ||  |   |  | /  ___  \\    |  | /  ______|   |___    ___||  |   |  ||   _____|   ||\n";
	cout << "||   |  |    |  ||  |   |  ||  /   \\  |   |  ||  /              |  |    |  |   |  ||  |         ||\n";
	cout << "||   |  |    |  ||  |___|  ||  |   |  |   |  ||  \\______        |  |    |  |___|  ||  |_____    ||\n";
	cout << "||   |   \\/\\/   ||   ___   ||  |   |  |   |  | \\______  \\       |  |    |   ___   ||   _____|   ||\n";
	cout << "||   |          ||  |   |  ||  |   |  |   |  |        \\  |      |  |    |  |   |  ||  |         ||\n";
	cout << "||    \\   /\\   / |  |   |  ||  \\___/  |   |  | _______/  |      |  |    |  |   |  ||  |_____    ||\n";
	cout << "||     \\_/  \\_/  |__|   |__| \\_______/    |__| |________/       |__|    |__|   |__||________|   ||\n";
	cout << "||                                                                                              ||\n";
	cout << "||      __      __  __     __  _______   ________   ________  _______   ________  _______       ||\n";
	cout << "||     |  \\    /  ||  |   |  ||   __  \\ |   ___  \\ |   _____||   __  \\ |   _____||   __  \\      ||\n";
	cout << "||     |   \\  /   ||  |   |  ||  |  |  ||  |   \\  ||  |      |  |  |  ||  |      |  |  |  |     ||\n";
	cout << "||     |    \\/    ||  |   |  ||  |__|  ||  |   |  ||  |_____ |  |__|  ||  |_____ |  |__|  |     ||\n";
	cout << "||     |  |\\  /|  ||  |   |  ||      _/ |  |   |  ||   _____||      _/ |   _____||      _/      ||\n";
	cout << "||     |  | \\/ |  ||  |   |  ||  |\\  \\  |  |   |  ||  |      |  |\\  \\  |  |      |  |\\  \\       ||\n";
	cout << "||     |  |    |  | \\  \\_/  / |  | \\  \\ |  |___/  ||  |_____ |  | \\  \\ |  |_____ |  | \\  \\      ||\n";
	cout << "||     |__|    |__|  \\_____/  |__|  \\__\\|________/ |________||__|  \\__\\|________||__|  \\__\\     ||\n";
	cout << "||                                                                                              ||\n";
	cout << "==================================================================================================\n";
	cout << "Press 'Enter' to continue...\n";
	cin.get();
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "|                                                                               |" << endl;
	cout << "|                       Welcome to 'WHO IS THE MURDERER?'                       |" << endl;
	cout << "|                                                                               |" << endl;
	cout << "|-------------------------------------------------------------------------------|" << endl;
	cout << "| Immerse yourself in this captivating text-based detective game as you unravel |" << endl;
	cout << "| the mystery surrounding a tragic death in a serene cottage. Your mission is   |" << endl;
	cout << "| to meticulously search for clues, skillfully interrogate suspects, and        |" << endl;
	cout << "| masterfully piece together the truth, bringing justice to the grieving family |" << endl;
	cout << "| and friends.                                                                  |" << endl;
	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "Press 'Enter' to start the game...\n";
	cin.get();
	// Display main menu
	displayMenu1();
}

// Main menu shown when the player start the game
void Game::displayMenu1()
{
	int choice;

	cout << "---------------------------------" << endl;
	cout << "|           Main Menu           |" << endl;
	cout << "|===============================|" << endl;
	cout << "| 1. Start a new game           |" << endl;
	cout << "|-------------------------------|" << endl;
	cout << "| 2. Resume previous game       |" << endl;
	cout << "|-------------------------------|" << endl;
	cout << "| 3. Exit game                  |" << endl;
	cout << "---------------------------------" << endl;
	cin >> choice;
	// Input validation
	while (choice < 1 || choice > 3)
	{
		cout << "Invalid choice. Please choose again.\n";
		cin >> choice;
	}
	switch (choice)
	{
	case 1:
		// Start a new game
		newGame();
		break;
	case 2:
		// Resume previous game
		resumeGame();
		break;
	case 3:
		// Exit game
        string text = "Exiting game......\n";
        for (size_t i = 0; i < text.size(); i++)
        {
            cout << text[i] << flush;
            for (int k = 0; k < 20000000; k++) {
                // Introduce some delay by performing trivial operations
            }
        }
		for (int i = 0; i < 500000000; i++) {}
		exit(0);
	}
}

// Secondary menu
void Game::displayMenu2()
{
	int choice;

	cout << "--------------------------------" << endl;
	cout << "|             Menu             |" << endl;
	cout << "|==============================|" << endl;
	cout << "| 1. Story background          |" << endl;
	cout << "|------------------------------|" << endl;
	cout << "| 2. Interview session         |" << endl;
	cout << "|------------------------------|" << endl;
	cout << "| 3. Search clues              |" << endl;
	cout << "|------------------------------|" << endl;
	cout << "| 4. Clue bag                  |" << endl;
	cout << "|------------------------------|" << endl;
	cout << "| 5. Guess the murderer        |" << endl;
	cout << "|------------------------------|" << endl;
	cout << "| 6. Exit game                 |" << endl;
	cout << "--------------------------------" << endl;
	cin >> choice;
	// Input validation
	while (choice < 1 || choice > 7)
	{
		cout << "Invalid choice. Please choose again.\n";
		cin >> choice;
	}
	switch (choice)
	{
	case 1:
		// Story background
		storyBackground();
		break;
	case 2:
		// Interview session
		interview.readFile();
		interview.displayInterview();
		break;
	case 3:
		// Search clues
		clue.searchClue();
		break;
	case 4:
		// Show what's in the clue bag
		clue.displayNode();
		break;
	case 5:
		// Guess the murderer
		guessMurderer();
		break;
	case 6:
		// Exit game
		exitPopUp();
	}
	cout << endl;
	// Display secondary menu
	displayMenu2();
}

// Start a new game
void Game::newGame()
{
	// Set all clues by reading the clues from input file into a linked list
	clue.setClue();
	// Story background
	storyBackground();
	// Player can choose whether or not to exit
	exitOrNot("interview session");
	// Interview session
	interview.readFile();
	interview.displayInterview();
	// Player can choose whether or not to exit
	exitOrNot("search clues");
	// Search clues
	clue.searchClue();
	// Display secondary menu after player stops to search clues
	displayMenu2();
}

// Resume previous game
void Game::resumeGame()
{
	char ch;
	bool savedGame = false;
	// Open Progress.txt and read the first character in the file
	ifstream progress("Progress.txt");
	progress.get(ch);
	progress.close();
	// Check if there's a previous saved version of the game
	if (ch == 'X')
	{
		// Previous saved game not found, return to main menu
		cout << "No previous saved version of the game.\n";
		cout << "Returning to the main menu...\n\n";
	}
	else if (ch == 'O')
	{
		// Previous saved game found, set clues and restore previous saved game
		savedGame = true;
		clue.setClue();
		clue.setPrevious();
	}
	if (savedGame)
		displayMenu2(); // Display secondary menu after restoring previous saved game
	else
		displayMenu1(); // If previous saved game not found, return the player to main menu
}

// Story background
void Game::storyBackground()
{
	char ch = 'c';
	cout << "\n====== This is Story Background, you are now watching the story background to understand the overall case. ======\n";
	cout << "|                                                                                                               |\n";
	cout << "|                 Press \"Q\" if you want to skip watching this session in the middle of time.                    |\n";
	cout << "|                        Press \"Enter\" if you want to continue watching the session.                            |\n";
	cout << "|                                                                                                               |\n";
	cout << "=================================================== Have Fun ====================================================\n\n";
	cout << "Press 'Enter' or 'Q' to continue...\n";
	cin.ignore();
	cin.get(ch);
	ch = toupper(ch);
	inputFile.open("Background Input.txt");
	if (!inputFile)
		cout << "Error opening Background Input.txt\n";
	else
	{
		// Output story background sentence by sentence
		while (!inputFile.eof() && ch!='q' && ch != 'Q')
		{
			getline(inputFile, text, '*');
			for (size_t i = 0; i < text.size(); i++)
			{
				cout << text[i] << flush;
				for (int k = 0; k < 10000000; k++) {
					// Introduce some delay by performing trivial operations
				}
			}
			// Let player press enter to continue or 'Q' to quit this session
			cin.get(ch);
		}
	}
	inputFile.close();
	cout << endl;
}

// Function to let player choose whether to exit game after background story or interview session
void Game::exitOrNot(string next)
{
	int choice;

	cout << "1. Proceed to " << next << endl; // Proceed to next session
	cout << "2. Exit game\n"; // Exit game
	cin >> choice;
	// Input validation
	while (choice < 1 || choice > 2)
	{
		cout << "Invalid choice. Please choose again.\n";
		cin >> choice;
	}
	if (choice == 2)
		exitWithoutSave(); // Exit game
}

// Function to ask player whether or not to save game before exiting
void Game::exitPopUp()
{
	int choice;

	cout << "-------------------------------------" << endl;
	cout << "|                                   |" << endl;
	cout << "|     Do you want to save game?     |" << endl;
	cout << "|                                   |" << endl;
	cout << "|-----------------------------------|" << endl;
	cout << "|                 |                 |" << endl;
	cout << "|      0. NO      |      1.YES      |" << endl;
	cout << "|                 |                 |" << endl;
	cout << "-------------------------------------" << endl;
	cin >> choice;
	// Input validation
	while (choice < 0 || choice > 1)
	{
		cout << "Invalid choice. Please choose again.\n";
		cin >> choice;
	}
	if (choice == 0)
	{
		// Don't save file
		exitWithoutSave();
	}
	else
	{
		// Save file and exit game
		clue.saveProgress();
        string text = "\nExiting game......\n";
        for (size_t i = 0; i < text.size(); i++)
        {
            cout << text[i] << flush;
            for (int k = 0; k < 20000000; k++) {
                // Introduce some delay by performing trivial operations
            }
        }
		for (int i = 0; i < 500000000; i++) {}
		exit(0);
	}
}

// Function to exit game without saving the game
void Game::exitWithoutSave()
{
	cout << endl;
	string text = "Exiting game......";
    for (size_t i = 0; i < text.size(); i++)
    {
        cout << text[i] << flush;
        for (int k = 0; k < 20000000; k++) {
            // Introduce some delay by performing trivial operations
        }
    }
	ofstream outputFile("Progress.txt");
	// Overwrite content of Progress.txt with 'X' to indicate that there's not saved game in it
	outputFile << "X" << endl;
	for (int i = 0; i < 500000000; i++) {}
	exit(0);
}

// Guess the murderer
void Game::guessMurderer()
{
	int choiceMurderer;
	int truthIfFail;
	cout << "-----------------------------------------------------------------------------\n";
	cout << "|                                                                           |\n";
	cout << "|                         Who Is The Murderer ? ? ?                         |\n";
	cout << "|                                                                           |\n";
	cout << "|===========================================================================|\n";
	cout << "|                                  1. Alex                                  |\n";
	cout << "|---------------------------------------------------------------------------|\n";
	cout << "|                                  2. Sarah                                 |\n";
	cout << "|---------------------------------------------------------------------------|\n";
	cout << "|                                  3. Mark                                  |\n";
	cout << "|---------------------------------------------------------------------------|\n";
	cout << "|                                  4. Lily                                  |\n";
	cout << "|---------------------------------------------------------------------------|\n";
	cout << "|                              5. Back to menu                              |\n";
	cout << "-----------------------------------------------------------------------------\n";

	cin >> choiceMurderer;
	// Input validation
	while (choiceMurderer < 1 || choiceMurderer>5)
	{
		cout << "Invalid choice. Please try again.\n";
		cin >> choiceMurderer;
	}
	if (choiceMurderer == 5)
	{
		displayMenu2();
	}
	else
	{
		//Check choiceMurderer
		if (choiceMurderer == 2)
		{
			string text = "\nYou've successfully found the murderer!\n\n"
				"Your dedication and detective skills had brought justice to the grieving family and friends\n"
				"while providing closure to the memory of the young woman who had tragically lost her life.\n\n"
				"Uncovering the details of the case......\n\n";

			for (size_t i = 0; i < text.size(); i++)
			{
				cout << text[i] << flush;
				for (int k = 0; k < 10000000; k++) {
					// Introduce some delay by performing trivial operations
				}
			}
			
			ending();
		}
		else
		{
			string text2 =  "Unfortunately, you failed to find the murderer.\n"
				"Do you want to know the truth?\n\n"
				"Press 1 if YES.\n"
				"Press 0 if NO\n";

			for (size_t i = 0; i < text2.size(); i++)
			{
				cout << text2[i] << flush;
				for (int k = 0; k < 10000000; k++) {
					// Introduce some delay by performing trivial operations
				}
			}

			cin >> truthIfFail;

			//Input Validation
			while (truthIfFail != 1 && truthIfFail != 0)
			{
				cout << "Invalid choice. Please try again.\n";
				cin >> truthIfFail;
			}

			if (truthIfFail == 1)
			{
				string text3 =  "\nUncovering the details of the case......\n\n";

				for (size_t i = 0; i < text3.size(); i++)
				{
					cout << text3[i] << flush;
					for (int k = 0; k < 10000000; k++) {
						// Introduce some delay by performing trivial operations
					}
				}

				ending();
			}
			else
			{
				string text;
				string symbolArr[8];
				symbolArr[0] = " __________  __     __  ________      ________  __    __  ________     \n";
				symbolArr[1] = "|___    ___||  |   |  ||   _____|    |   _____||  \\  |  ||   ___  \\   \n";
				symbolArr[2] = "    |  |    |  |   |  ||  |          |  |      |   \\ |  ||  |   \\  |  \n";
				symbolArr[3] = "    |  |    |  |___|  ||  |_____     |  |_____ |    \\|  ||  |   |  |  \n";
				symbolArr[4] = "    |  |    |   ___   ||   _____|    |   _____||        ||  |   |  |  \n";
				symbolArr[5] = "    |  |    |  |   |  ||  |          |  |      |  |\\    ||  |   |  |  \n";
				symbolArr[6] = "    |  |    |  |   |  ||  |_____     |  |_____ |  | \\   ||  |___/  |  \n";
				symbolArr[7] = "    |__|    |__|   |__||________|    |________||__|  \\__||________/   \n";

				for (int i = 0; i < 8; i++)
				{
					text = symbolArr[i];
					for (size_t i = 0; i < text.size(); i++)
					{
						cout << text[i] << flush;
						for (int k = 0; k < 1500000; k++) {
							// Introduce some delay by performing trivial operations
						}
					}
				}
				exitWithoutSave();
			}
		}
	}
}

// Uncovering the truth, then exit game
void Game::ending()
{
	inputFile.open("Story Input.txt");
	if (!inputFile)
	{
		cout << "Error opening Story Input.txt\n";
	}
	else
	{
		cin.ignore();
		while (!inputFile.eof())
		{
			getline(inputFile, text, '*');
			for (size_t i = 0; i < text.size(); i++)
			{
				cout << text[i] << flush;
				for (int k = 0; k < 10000000; k++) {
					// Introduce some delay by performing trivial operations
				}
			}
			cin.get();
		}
	}
	cout << endl;
	
	string text;
	string symbolArr[8];
	symbolArr[0] = " __________  __     __  ________      ________  __    __  ________     \n";
	symbolArr[1] = "|___    ___||  |   |  ||   _____|    |   _____||  \\  |  ||   ___  \\   \n";
	symbolArr[2] = "    |  |    |  |   |  ||  |          |  |      |   \\ |  ||  |   \\  |  \n";
	symbolArr[3] = "    |  |    |  |___|  ||  |_____     |  |_____ |    \\|  ||  |   |  |  \n";
	symbolArr[4] = "    |  |    |   ___   ||   _____|    |   _____||        ||  |   |  |  \n";
	symbolArr[5] = "    |  |    |  |   |  ||  |          |  |      |  |\\    ||  |   |  |  \n";
	symbolArr[6] = "    |  |    |  |   |  ||  |_____     |  |_____ |  | \\   ||  |___/  |  \n";
	symbolArr[7] = "    |__|    |__|   |__||________|    |________||__|  \\__||________/   \n";

	for (int i = 0; i < 8; i++)
	{
		text = symbolArr[i];
		for (size_t i = 0; i < text.size(); i++)
		{
			cout << text[i] << flush;
			for (int k = 0; k < 1500000; k++) {
				// Introduce some delay by performing trivial operations
			}
		}
	}
	exitWithoutSave();
}