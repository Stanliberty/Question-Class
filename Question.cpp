// File Name: Question.cpp
// Author: (Stanley Nwajiaku)
// Date: 09/20/2021
// Assignment Number: 2
// CS 2308 Fall 2021
// Description: (Question member function definitions).

#include <iostream>
#include <string>
#include "Question.h"

using namespace std;

Question::Question() {
    stem="";
    for (int i=0; i<4; i++)
    answers[i]="";
    key = 'X';
  }

Question::Question(string stem, string answers[4], char key): stem(stem), key(key)
  {
    for (int i=0; i<4; i++)
    this->answers[i] = answers[i];
  }

void Question::setStem(string stem)
  {
    this->stem = stem;
  }

string Question::getStem()
  {
    return stem;
  }

void Question::setAnswers(string answers[4])
  {
    for(int i=0; i<4; i++)
    this->answers[i] = answers[i];
  }

string Question::getAnswer(int i)
  {
    if(i>=0 && i<4)
    return answers[i];
    return"";
  }

void Question::setKey(char keyyyy)
  {
    this->key = keyyyy;
  }

char Question::getKey()
  {
    return key;
  }

void Question::swapAnswers(int a, int b)
  {
    int idx1 = a%4;
    int idx2 = b%4;

    if(idx1 != idx2) 
   {
    int keyidx = (key-'A');
     if(keyidx == idx1)
     {
     key = 'A'+idx2;
     }
     else if(keyidx == idx2)
     {
      key = 'A'+idx1;
     }
     string temp = answers[idx1];
     answers[idx1] = answers[idx2];
     answers[idx2] = temp;
   }
  }

void Question::cycle()
{
    swapAnswers(0, 1);
    swapAnswers(1, 2);
    swapAnswers(2, 3);
    
}

string Question::ask()
 {
   string question = stem;
   for(int i=0; i<4; i++)
  {
   question +="\n";
   question +=('A'+i);
   question +=". "+answers[i];
  }
  return question;
 }
