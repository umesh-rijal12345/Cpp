#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	
	public:
		int a;
		void mul(int x)
		{
			
			if(a%5==0)
			{
				cout<<a<<" is the multiple of 5"<<endl;
			}
			else
			{
				cout <<a<<" is not the multiple of 5"<<endl;
			}
		}
};

int main()
{
	A obj;
	int b;
	cout<<"Enter the number"<<endl;
	cin>>obj.a;
	obj.mul(b);
}
