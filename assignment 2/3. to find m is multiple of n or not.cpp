// program to read two integer values m and n and to decide and print whether m is a multiple of n.
#include<iostream>
#include<conio.h>
using namespace std;
class multiple{
	public:
		int m,n;
		void calculate()
		{
			cout<<"Enter the value of m and n:"<<endl;
			cin>>m>>n;
			
			if(m%n==0)
			{
				cout<<m<<" is the multiple of "<<n<<endl;
			}
			else
			{
				cout<<m<<" is not the multiple of "<<n<<endl;
			}
		}
};

int main()
{
	multiple a;
	a.calculate();
}
