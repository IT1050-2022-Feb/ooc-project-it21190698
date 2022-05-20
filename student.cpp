#include "student.h"
#include "admin.h"
#include <string>
#include <iostream>
using namespace std;

Student::Student()
{
	studentMobileNumber = 0;
	studentID= "";
	studentName= "";
	studentEmail="";

}


Student::Student(string pstudentID, int pstudentMobileNumber, const string pstudentName, const string pstudentEmail)
{
	studentMobileNumber = pstudentMobileNumber;
	studentID, pstudentID;
	studentName=pstudentName;
	studentEmail= pstudentEmail;
}

void Student::searchExam()
{

}
void Student::searchSubject()
{

}
void Student::searchWorkMaterials()
{

}
void Student::attemptExam()
{

}
void Student::logout()
{

}
void Student::checkLoginDetails()
{

}
Student::~Student()
{
	//destructor
	cout << "Student Destroyed" << endl;
}
