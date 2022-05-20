#pragma once
#include <string>
#include "supervisor.h"
#include "student.h"
using namespace std;

class Exam {
private:
	string examID;
	string examName;
	int time;
	Student* stu[2];
	Supervisor* sup1[2];

public:
	Exam();
	Exam(int eTime,string pexamID, string pexamName);
	void setTime();
	void setDuration();
	void displayExam();
	void displayDetails();
	void addFeedback();
	void addSupervisor(Supervisor* sup1, Supervisor* sup2);
	void addStudent(Student* stu1, Student* stu2);
	void addAnswer();
	~Exam();
};
