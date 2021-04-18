//program that reads radius of circle and finds area and circumference.

#include<iostream>
#include<conio.h>
using namespace std;
class calculate{
	public:
		int r;
		float pi = 3.14;
		void check()
		{
		cout<<"Enter the radius of circle:"<<endl;
		cin>>r;
		
		cout<<"The area of circle is = "<<pi*r*r<<endl;
		cout<<"The circumference of circle is = "<<2*pi*r<<endl;
		}
};

int main()
{
	calculate cal;
	cal.check();
}
