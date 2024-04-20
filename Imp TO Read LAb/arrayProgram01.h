#ifndef STUDENT_H
#define STUDENT_H

/*
Create Student class with data members
	RollNo
	Name
	Course
and implement following
Default constructor
Parameterized constructor
Destructor
Function to accept data
Function for display data
Write main function and create array of students and store data of multiple students in array.
Write Function to find student by Roll No */
#include <string>
using namespace std;
class Student{

	private:
		int rollNo;
		string name;
		string course;

	public:
		Student();
		Student(int,string,string);
		~Student();
		void accept();
		void display();
		int getRollNo();
};

Student findByRoll(int,int,Student []);

#endif
