#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	
	public:
		int c;
		void check(int x)
		{
			c=x;
			if((c%11==0) || (c%5==0))
			{
			
				if((c%5==0) && (c%11 ==0))
				{
					cout<<c<<" is the multiple of both 5 and 11."<<endl;
				}
				else if(c%5==0)
				{
					cout<<c<<" is the multiple of 5"<<endl;
				}
				else if(c%11==0)
				{
					cout<<c<<" is the multiple of 11"<<endl;
				}
				
			}
			
			else
			{
				cout<<c<<" is not the multiple of 5 and 11"<<endl;
			}
		}
};

int main()
{
	A a;
	int n;
	cout<<"Enter the number you want to check:"<<endl;
	cin>>n;
	a.check(n);
	
}
