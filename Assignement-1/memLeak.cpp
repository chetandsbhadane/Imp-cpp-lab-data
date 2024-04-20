#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"int the Base ctor.."<<endl;
		}
		~A(){
			cout<<"In the base dtor.."<<endl;
		}
};

class B:public A{

	private:
		int *p;

	public:
		B(){
			p = new int[10];
			cout<<"in the derived ctor.."<<endl;
		}
		~B(){

			cout<<"in the derived dtor.."<<endl;
			delete [] p;
		}
};

int main(){
	
	A *base = new B();
       delete base;	

	return 0;
}
