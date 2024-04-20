#include<iostream>
using namespace std;

class MyArray{
	private:
		int size;
		int *p;
	public:
		MyArray(){
			this->size = 5;
			for(int i=0;i<size;i++){
				p[i] = 0;
			}
		}

		int& operator[](int i){
			return p[i];
		}

		friend ostream& operator<<(ostream& o,MyArray& arr);
};

ostream& operator<<(ostream& o,MyArray& arr){
	for(int i=0;i<arr.size;i++){
		o<<arr[i]<<endl;
	}
	return o;
}

int main(){
	
	MyArray a;

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;
	a[3] = 40;
	a[4] = 50;

	MyArray a2 = {1,2,3,4,5};

	cout<<a<<endl;
	return 0;
}
