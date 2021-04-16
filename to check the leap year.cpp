#include<iostream>
#include<conio.h>
using namespace std;
class leapYear{
	public:
		int year;
		
		void calc()
		{
		cout <<"Enter the year you want:"<<endl;
		cin>>year;
		
		if (((year%4==0) && (year%400==0)) || (year%100 !=0))
		{
			cout<< year <<" is leap year."<<endl;
		}
		else
		{
			cout<<year<<" is not leap year."<<endl;
		}
		}
};

int main()
{
	leapYear l;
	l.calc();
}
