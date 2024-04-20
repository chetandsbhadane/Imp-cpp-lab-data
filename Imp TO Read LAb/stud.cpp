#include<iostream>
#include "stud.h"
using namespace std;

void Stud::Accept(){
	cout<<"Enter roll no: "<<endl;
	cin>>rNo;
	cout<<"ENter name: "<<endl;
	cin.ignore();
	cin.getline(name,50);
}

void Stud::Dis(){

	cout<<"rNo: "<<rNo<<" name "<<name<<endl;
}
