#include<string>
#include <iostream>
#include"admin.h"
#include"answer.h"
#include"exam.h"
#include"feedback.h"
#include"registration.h"
#include"report.h"
#include"student.h"
#include"subject.h"
#include"supervisor.h"
#include"workMaterials.h"
using namespace std;

int main()
{
	Admin *ad1;
	Registration *reg1[2];
	Subject *sub[2];
	WorkMaterials *work[2];
	Student *stu[2];
	Exam *exm1[2];
	Supervisor *sup1[2];
	Answer *ans;
	Feedback *feed[2];
	Report *rep;



	delete[] reg1;
	delete[] sub;
	delete[] work;
	delete[] stu;
	delete[] exm1;
	delete[] sup1;
	delete ans;
	delete[] feed;
	delete rep;

	char ch;
	cin >> ch;

	return 0;
}

