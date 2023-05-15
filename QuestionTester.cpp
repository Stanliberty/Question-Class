// File Name: QuestionTester.cpp
// Author: Mohammad Zaeed
// Collaborators: Dr. Jill Seaman
// Date: 09/10/2020
// Driver to test the Question class.

#include <iostream>
#include <iomanip>
using namespace std;

#include "Question.h"
#include "Question.cpp"

int main()
{
    Question q1;
    q1.setStem("What name is given to half of a Byte (4 bits)?");
    string q1Answers [] = {"Nibble","Ort","Scrap","Snippet"};
    q1.setAnswers(q1Answers);
    q1.setKey('A');
    
    cout << endl << "q1 stem: " << q1.getStem() << endl;
    cout<< "q1 first answer: " << q1.getAnswer(0) << endl;
    cout<< "q1 last answer: " << q1.getAnswer(3) << endl;
    cout <<"q1 correct answer: " << q1.getKey() << endl;
    cout << endl;

    string q2Answers [] = {"China","India","Mexico","Australia"};
    Question q2("Which country is home to the Kangaroo?",q2Answers,'D');
    
    cout << q2.ask();
    cout << endl << "correct answer: " << q2.getKey() << endl << endl;

    q2.cycle();
    cout << q2.ask();
    cout << endl << "correct answer: " << q2.getKey() << endl << endl;
    
    q2.cycle();
    cout << q2.ask();
    cout << endl << "correct answer: " << q2.getKey() << endl << endl;
    
    q2.cycle();
    cout << q2.ask();
    cout << endl << "correct answer: " << q2.getKey() << endl << endl;
    
    q2.cycle();
    cout << q2.ask();
    cout << endl << "correct answer: " << q2.getKey() << endl << endl;
}

/* Expected output:
 
q1 stem: What name is given to half of a Byte (4 bits)?
q1 first answer: Nibble
q1 last answer: Snippet
q1 correct answer: A

Which country is home to the Kangaroo?
A. China
B. India
C. Mexico
D. Australia
correct answer: D

Which country is home to the Kangaroo?
A. India
B. Mexico
C. Australia
D. China
correct answer: C
Which country is home to the Kangaroo?
A. Mexico
B. Australia
C. China
D. India
correct answer: B
Which country is home to the Kangaroo?
A. Australia
B. China
C. India
D. Mexico
correct answer: A
Which country is home to the Kangaroo?
A. China
B. India
C. Mexico
D. Australia
correct answer: D

 */
