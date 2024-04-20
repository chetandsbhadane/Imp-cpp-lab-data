#ifndef STRING_H
#define STRING_H
/*
 4. Create Your own String class (Use class name as MyString)  with data members
		char * p;
		int size;
Allocate memory dynamically for pointer and get size from user. 
Implement followings
    • Default constructor
    • Parameterized constructor
    • Copy Constructor
    • Destructor for clean-up (use delete compulsory)
    • Display function.
    • Separate header and implementation files */

class MyString{
	private:
		char* p;
		int size;
	public:
		MyString();
		MyString(int);
		MyString(MyString&);
		~MyString();
		void dis();
		MyString(char[]);
};

#endif
