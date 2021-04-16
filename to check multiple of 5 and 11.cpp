#include<iostream>
#include<conio.h>
using namespace std;
class B
{
	public:
		int n;
		void check(int x)
		{
			n=x;
			if((n%5==0)&&(n%11==0))
			{
				cout<< n <<" is the multiple of 5 and 11."<<endl;
			}
			else
			{
				cout<< n <<" is not the multiple of 5 and 11."<<endl;
			}
		}
};

int main()
{
	B b;
	cout<<"Enter the number"<<endl;
	cin>>b.n;
	b.check(b.n);
}
