#ifndef CLUELIST_H
#define CLUELIST_H
#include <iostream>
using namespace std;

class ClueList
{
private:
    //One node holds all information of one clue
    struct ClueNode
    {
        string location = "";
        string spot = "";
        int clueNumber = 0;
        string clue = "";
        string information = "";
        ClueNode* next = nullptr;
        ClueNode* back = nullptr;
    };

    //head and tail pointer of the list
    ClueNode* head;
    ClueNode* tail;

public:
    ClueList()
    {
        head = nullptr;
        tail = nullptr;
    }
    ~ClueList();

    void appendNode(string, string, int, string, string);
    void searchAndDisplayNode(string, string);
    string getFoundClueRoom(string, string) const;
    string getFoundClue(string, string) const;
    string getFoundClueInfo(string, string) const;

    //this function is for internal usage 
    //to display the whole clueList
    void displayNode();
};

#endif