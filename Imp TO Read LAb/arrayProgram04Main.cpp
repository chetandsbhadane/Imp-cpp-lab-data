#include<iostream>
#include "arrayProgram04.h"
#include<cstring>
using namespace std;
int main(){

	MyString str1;
	str1.dis();
	cout<<"enter size"<<endl;
	int size=0;

	MyString string1(5); //take size as 5

	MyString string2(string1);
//	string1.dis();

	cout << "str3 (copy of str2): ";
    	string2.dis();

    	// Modify str2
    //	strcpy(string2, "Hello"); // Modify str2 directly
				  
    	cout << "\nAfter modifying str2:\n";
    	cout << "str1: ";
    	string1.dis();
    	cout << "str2: ";
    	string2.dis();
    	//cout << "str3: ";
  	 // str3.display();

//	MyString str(size);
//	cout<<"size -"<<str.size<<endl;
//	str.dis();
	return 0;
}
