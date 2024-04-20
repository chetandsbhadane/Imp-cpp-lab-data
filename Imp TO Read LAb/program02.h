/*
Create Time  class with data members
	hours
	minutes
	seconds
and implement following
Default constructor
Parameterized constructor
Destructor
Function for display data
Function to compare two time objects
Function to find out difference between two time objects */

class Time{
	private:
		int hours;
		int mins;
		int secs;
	public:
		Time();
		Time(int,int,int);
		~Time();
		void dis();
		void compareTime(Time&);
		void timeDiff(Time&);

};
