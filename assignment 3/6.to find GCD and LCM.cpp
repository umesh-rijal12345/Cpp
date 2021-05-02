//program to find GCD and LCM of two numbers.

#include<iostream>
#include<conio.h>
using namespace std;
class calculate{
	
	public:
		int a,b,rem,x,y;
		void GCD()
		{
			cout<<"Enter x and y:"<<endl;
			cin>>x>>y;
			
			a=x;
			b=y;
			//for gcd
			while(b>0)
			{
			rem = a%b;
			a=b;
			b=rem;
		}
			cout <<"The GCD is = "<<a<<endl;
		}
		
		void LCM()
		{
			int LCM = (x*y)/a;
			cout<<"The LCM is = "<<LCM<<endl;
		}
};

int main()
{
	calculate c;
	c.GCD();
	c.LCM();
}
