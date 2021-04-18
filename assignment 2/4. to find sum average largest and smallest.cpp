/*program to read three numbers and print the following results
a.	Sum of the values.
b.	Average of three values.
c.	Largest of the three.
d.	Smallest of the three.*/

#include<iostream>
#include<conio.h>
using namespace std;
class operation{
	public:
		int a,b,c;
		
		void calculate()
		{
			cout<<"Enter three numbers:"<<endl;
			cin>>a>>b>>c;
			
			cout<<"Sum of "<<a <<" , "<<b<<" , "<<c<<" is = "<<a+b+c<<endl;
			cout<<"The average of "<<a<<" , "<<b<<" , "<<c<<" is = "<<(float)(a+b+c)/3<<endl;
			
			int largest = (a>b) ? ((a>c)? a : c): ((b>c)? b:c);
			cout<<"The largest value is = "<<largest<<endl;
			
			int smallest = (a<b) ? ((a<c)? a : c) : ((b<c)? b : c);
			cout<< " The smallest number is = "<<smallest<<endl;
		}
};

int main()
{
	operation o;
	o.calculate();
}

