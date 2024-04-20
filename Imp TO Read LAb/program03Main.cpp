#include<iostream>
#include"program03.h"
using namespace std;

int main(){

	Date d1(20,4,2024);
	d1.dis();
	Date d2;
	d2 = d1;
	d2.dis();

	Date d3(1,1,24);
	Date d4;
//	d4 = d1+d3;
//	d4.dis();

	Date d5;
	d5 = d1-d3;
	d5.dis();

	Date d6(1,1,23);
	//bool b = d1==d6;
//	cout<<d6!=d1<<endl;
	if(d6==d3){
		cout<<"equal"<<endl;
	}
	else{
		cout<<"not equal"<<endl;
	}

	Date d7(11,11,1999);
	cout<<d7;

	Date d8;
	cin>>d8;
	cout<<d8<<endl;
	return 0;
}
