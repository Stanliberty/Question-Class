// File Name: Question.h
// Author: Stanley Nwajiaku
// Date: 09/20/2021
// Assignment Number:2
// CS 2308 Fall 2021
// Description: (Question header file).

#ifndef QUESTION_H
#define QUESTION_H

#include <string>
using namespace std;

class Question
{
  public:
	Question();
	Question(string stem, string answers[4], char key);
	void setStem(string stem);
	string getStem();
	void setAnswers(string answers[4]);
	string getAnswer(int i);
	void setKey(char key);
	char getKey();
	void swapAnswers(int a, int b);
	string ask();
  void cycle();

  private:
	string stem;
	string answers[4];
	char key;


};

#endif
