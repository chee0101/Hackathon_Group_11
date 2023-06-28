#ifndef INTERVIEW_H
#define INTERVIEW_H
#include <iostream>
#include "InterviewList.h"
#include <fstream>
using namespace std;

class Interview
{
private:
	ifstream inputFile;

	//composition to access the function of it
	InterviewList interviewList;
	
	//label of person
	int pers;

	//label of question
	int ques;
	
	//store dialog
	string interview;

public:
	Interview();
	~Interview()
	{};

	void readFile();
	void displayInterview();
};

#endif