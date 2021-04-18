#include<iostream>		//to find largest among entered three numbers
#include<conio.h>
using namespace std;
class largest{
	public:
		int a,b,c;
		void calculate()
		{
			cout<<"Enter three numbers:"<<endl;
			cin>>a>>b>>c;
			
			int largest = (a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);
			cout<<"The largest among two numbers is : "<< largest <<endl;
		}
};

int main()
{
	largest l;
	l.calculate();
}
