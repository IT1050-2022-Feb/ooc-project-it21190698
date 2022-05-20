#pragma once
#include"admin.h"
#include <string>
using namespace std;

class Student {
private:
	string studentID;
	int studentMobileNumber;
	string studentName;
	string studentEmail;
	//Admin *admin1;


public:
	Student();
	Student(string pstudentID, int pstudentMobileNumber, string pstudentName,  string pstudentEmail);
	void displayDetails();
	void checkLoginDetails();
	void searchExam();
	void searchSubject();
	void searchWorkMaterials();
	void attemptExam();
	void logout();
	~Student();

};
