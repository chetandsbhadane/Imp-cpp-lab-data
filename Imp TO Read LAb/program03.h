/*
Create Date  class with data members
	dd
	mm
	yyyy
 and implement following 
Default constructor
Parameterized constructor
Destructor
Function to find out difference between two dates 
Function to compare dates
Separate header and implementation files
Overlaod ==, !=, +, - operator  */
#include<iostream>
using namespace std;
class Date{
	private:
		int dd;
		int mm;
		int yyyy;
	public:
		Date();
		Date(int,int,int);
		~Date();
		Date& operator=(const Date&);
		Date& operator+(const Date&);
		Date& operator-(const Date&);
		bool operator!=(const Date&)const;
		bool operator==(const Date&)const;
		void dis();
		friend ostream& operator<<(ostream&,const Date&);
		friend istream& operator>>(istream&,Date&);
};

