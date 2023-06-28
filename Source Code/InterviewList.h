#ifndef INTERVIEWLIST_H
#define INTERVIEWLIST_H
#include <iostream>
using namespace std;

class InterviewList
{
private:
    
    //store dialog of interview
    //one dialog node consist of one ques with one ans
    struct InterviewNode
    {
        //each person have specific label in text file
        int person;

        //number that indicate which question asked
        int question;

        //store the dialog text for a question
        string dialog;

        InterviewNode* next;
    };
    InterviewNode* head;

public:
    InterviewList()
    {
        head = nullptr;
    }
    ~InterviewList();

    void appendNode(int, int, string);
    void searchAndDisplayNode(int, int);
    void displayNode();
   
};


#endif

