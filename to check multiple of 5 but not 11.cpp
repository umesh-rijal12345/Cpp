#include<iostream>
#include<conio.h>
using namespace std;
class multiple{
	
	public:
		int a;
		void mul(int x)
		{
			a=x;
			if((a%5==0) && (a%11!=0))
			{
				cout<< a << " is the multiple of 5 but not the multiple of 11."<<endl;
			}
			else
			{
				cout<< a << " is not the multiple of 5 only."<<endl;
			}
		}
};

int main()
{
	multiple m;
	cout<<"Enter the value of n:"<<endl;
	cin>> m.a;
	m.mul(m.a);
}
