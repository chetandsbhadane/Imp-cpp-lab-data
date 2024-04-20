#include<iostream>
using namespace std;
class Animal
{
int weight;
public: 
	void SetWeight(int w)
	{
	weight = w;
	}
	int getW(){
		return weight;
	}
};

class Tiger :virtual public Animal
{
	int height;
	public: 
	void SetHeight(int h)
	{
	height = h;
	}
};

class Lion :virtual public Animal
{
	int length;
	public: 
	void Setlength(int l)
	{
	length = l;
	}
};


class Liger :  public Lion, public Tiger
{	
};
int main()
{
Liger liger;
//liger.SetWeight(10);
//cout<<"weight of liger is "<<liger.getW();
cout<<sizeof(liger);
return 0;
}
