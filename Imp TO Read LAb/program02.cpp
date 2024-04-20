#include<iostream>
#include "program02.h"
using namespace std;
Time::Time(){
	this->hours = 0;
	this->mins = 0;
	this->secs = 0;
}

Time::Time(int hours, int mins, int secs){
	this->hours = hours;
	this->mins = mins;
	this->secs = secs;
}

Time::~Time(){

}

void Time::compareTime(Time& other){
	if(this->hours == other.hours && this->mins == other.mins && this->secs == other.secs){
		cout<<"Time is same!"<<endl; 
	}	
	else{
		cout<<"time is different"<<endl;
	}
}

void Time::timeDiff(Time& otherTime){
	int diff = 0;
	this->hours = this->hours - otherTime.hours;
	this->mins = this->mins - otherTime.mins;
	this->secs = this->secs - otherTime.secs;
	cout<<this->hours<<" hours "<<this->mins<<" mins "<<this->secs<<" secs "<<endl;
}

void Time::dis(){
	cout<<hours<<" hours "<<mins<<" mins  "<<secs<<" secs "<<endl;
}
