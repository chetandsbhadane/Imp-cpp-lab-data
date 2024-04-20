#include<iostream>
#include "arrayProgram04.h"
#include<cstring>
using namespace std;
MyString::MyString(){
	cout<<"default ctor called..\n";
	size = 1; //allocate space for termination
	p = new char[size];
	*p = '\0'; //initialize with empty string
}

MyString::MyString(int size){
	cout<<"paramatarized ctor called..\n";
	this->size = size+1;
	p = new char[this->size];
	*p = '\0';
}

MyString::MyString(MyString& thatString){
	cout<<"copy ctor called.."<<endl;
	this->size = thatString.size;
	//create seperate memory to copy content by conetent of other
	this->p = new char[this->size];
	strcpy(this->p, thatString.p);

}


void MyString::dis(){
	cout<<"dis called\n";
	cout<<p<<endl;
}

MyString::~MyString(){
	cout<<"destr called.\n";
	delete [] p;
}
