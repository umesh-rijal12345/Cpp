//program that reads temperature in degree Celsius and convert it into Fahrenheit
#include<iostream>
#include<conio.h>
using namespace std;
class A{
	
	public:
	int celsius,farenheit;
	void convert()
	{
		cout<<"Enter temperature in celsius:"<<endl;
		cin>>celsius;
		
		farenheit = 9*(celsius/5) + 32;
		cout<<"The temperature in farenheit is : "<<farenheit<<endl;
	}
};

int main()
{
	A a;
	a.convert();
}
