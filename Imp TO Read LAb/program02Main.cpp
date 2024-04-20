#include<iostream>
#include "program02.h"
using namespace std;

int main(){

	Time t;

	Time t1(10,40,00);
	t1.dis();
	
	Time t2(10,20,00);
	t2.dis();

	t1.compareTime(t2);
	t1.timeDiff(t2);

	return 0;
}
