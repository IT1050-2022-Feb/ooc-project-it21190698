#include"supervisor.h"
#include "exam.h"
#include <string.h>
#include <iostream>
using namespace std;

Exam::Exam()
{
	time = 0;
	examID =  "";
	examName = "";
}
Exam::Exam(int eTime, string pexamID, string pexamName)
{
	time = eTime;
	examID= pexamID;
	examName= pexamName;
}
void Exam::addStudent(Student* stu1, Student* stu2)
{
	stu[0] = stu1;
	stu[1] = stu2;
}

void Exam::addSupervisor(Supervisor* sup1, Supervisor* sup2)
{
	//sup1[0] = sup1;
	//sup1[1] = sup2;
}
void Exam::setTime()
{

}
void Exam::setDuration()
{

}
void Exam::displayExam()
{

}
void Exam::displayDetails()
{

}
void Exam::addFeedback()
{

}
void Exam::addAnswer()
{

}
Exam::~Exam()
{
	//destructor
	cout << "Exam Destroyed" << endl;
}
