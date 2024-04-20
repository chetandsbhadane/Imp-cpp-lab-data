#include<iostream>
#include "program03.h"
using namespace std;

Date::Date(){
	this->dd = 0;
	this->mm = 0;
	this->yyyy = 0;
}

Date::Date(int dd, int mm, int yyyy){
	this->dd = dd;
	this->mm = mm;
	this->yyyy = yyyy;
}

Date& Date::operator=(const Date& otherDate){
	this->dd = otherDate.dd;
	this->mm = otherDate.mm;
	this->yyyy = otherDate.yyyy;
	return *this;
}

Date& Date::operator+(const Date& rightDate){
	this->dd = this->dd + rightDate.dd;
	this->mm = this->mm + rightDate.mm;
	this->yyyy = this->yyyy + rightDate.yyyy;
	return *this;
}

Date& Date::operator-(const Date& rightDate){
	this->dd = this->dd - rightDate.dd;
	this->mm = this->mm - rightDate.mm;
	this->yyyy = this->yyyy - rightDate.yyyy;
	return *this;
}

bool Date::operator==(const Date& rightDate)const{
	return dd==rightDate.dd && mm==rightDate.mm && yyyy==rightDate.yyyy;	
}

bool Date::operator!=(const Date& rightDate) const{
	return !((*this)==rightDate);
}

ostream& operator<<(ostream& os,const Date& date){
	return os <<date.dd<<" "<<date.mm<<" "<<date.yyyy;
}

istream& operator>>(istream& in,Date& date){
	cout<<"enter dd,mm,yyyy"<<endl;
	in >> date.dd;
	in >> date.mm;
	in >> date.yyyy;

	return in;
}


void Date::dis(){
	cout<<" day "<<dd<<" month "<<mm<<" year "<<yyyy<<endl;
}

Date::~Date(){

}
