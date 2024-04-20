#include<iostream>
#include "sorting.h"
using namespace std;


Sorting::Sorting(){
	for(int i=0;i<5;i++){
		arr[i] = 0;
	}
}
void Sorting::accept(){
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
}

void Sorting::display(){
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}
