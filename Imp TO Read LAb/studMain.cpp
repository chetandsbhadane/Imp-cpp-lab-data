#include<iostream>
#include "stud.h"
#include <fstream>
using namespace std;

int main(){

	char fName[100];
	cout<<"ENter file name "<<endl;
	cin>>fName;

	ofstream fout(fName, ios::app|ios::binary);
	
	Stud s;
	int ch;
	do{
		s.Accept();
		fout.write((char*)&s, sizeof(Stud));	
		cout<<"do you want to add more data? press 1 | :exit press 0";
		cin>>ch;
	}while(ch!=0);

	fout.close();

	char fName2[100];
	cout<<"enter file name"<<endl;
	cin>>fName2;

	ifstream fin(fName2,ios::binary);

	cout<<"records"<<endl;
	Stud s2;
	
	while(fin.read((char*)&s2 , sizeof(Stud))) {
		s2.Dis();
	}
	fin.close();
	return 0;
}
