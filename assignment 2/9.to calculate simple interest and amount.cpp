//program that reads P,T, and R and find simple interest and amount.

#include<iostream>
#include<conio.h>
using namespace std;
class SI{
	public:
		int p,t,r;
		void calculate()
		{
			cout<<"Enter principle , time , rate respectively:"<<endl;
			cin>>p>>t>>r;
			
			float simpleInterest = (p*t*r)/100;
			cout<<"The simple interest is = "<<simpleInterest<<endl;
			
			float amount = simpleInterest + p ; 
			cout<<"The amount is = "<<amount<<endl;
		}
};

int main()
{
	SI s;
	s.calculate();
}
