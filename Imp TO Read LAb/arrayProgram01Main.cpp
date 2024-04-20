#include<iostream>
#include "arrayProgram01.h"


int main(){

	int size=0;
	cout<<"How many student do you want to add!";
	cin>>size;
	Student s3[size];

	for(int i=0;i<size;i++){
		s3[i].accept();
	}

	for(int i=0;i<size;i++){
		s3[i].display();
	}

	cout<<"\nfind by roll.. enter roll number to search!";
	int search=0;
	cin>>search;

	//Student s;
	Student s  = findByRoll(search,size,s3);

	if(s.getRollNo() != 0){
		s.display();
	}
	else{
		cout<<"Not found!";
	}

	return 0;
}
