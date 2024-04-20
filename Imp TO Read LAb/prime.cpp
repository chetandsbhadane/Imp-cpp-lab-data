#include<iostream>
using namespace std;


bool isPrime(int num){
	if(num == 1 || num ==0){
		return false;
	}

	for(int i=2;i<num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

bool isEven(int num){
	for(int i=1;i<num;i++){
		if(num%2==0){
			return true;
		}
	}
	return false;
}

bool isOdd(int num){
	for(int i=1;i<num;i++){
		if(num%2!=0){
			return true;
		}
	}

	return false;
}

int main(){

	int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
	cout<<"Prime numbers\n";
	for(int i=0;i<=11;i++){
		if(isPrime(arr[i])){
			cout<<arr[i]<<" ";
		}		
	}

	cout<<"\nEven Numbers\n";
	for(int i=0;i<=11;i++){
		if(isEven(arr[i])){
			cout<<arr[i]<<" ";	
		}
	}

	cout<<"\nOdd Numbers\n";
        for(int i=0;i<=11;i++){
                if(isOdd(arr[i])){
                        cout<<arr[i]<<" ";
                }
        }

	return 0;
}
