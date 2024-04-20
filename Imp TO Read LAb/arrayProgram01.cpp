#include "arrayProgram01.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(){
        rollNo = 0;
        name = "";
        course = "";
}

Student::Student(int r,string nm,string c){
	rollNo = r;
	name =  nm;
	course = c;
}

void Student::accept(){
	cout<<"Enter roll number "<<endl;
	cin>>rollNo;
	cout<<"Enter name "<<endl;
	cin.get();
	cin>>name;
	cout<<"Enter course"<<endl;
	cin.get();
	cin>>course;
}

void Student::display(){
	cout<<"rollNo - "<<rollNo<<endl;
	cout<<"Name - "<<name<<endl;
	cout<<"course - "<<course<<endl;
}

int Student::getRollNo(){
	return rollNo;
}

Student findByRoll(int roll,int size, Student s[]){
	for(int i=0;i<size;i++){
		if(roll == s[i].getRollNo()){
			return s[i];
		}
	}
	Student s2;
	return s2;
}
Student::~Student(){}

