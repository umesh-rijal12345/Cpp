//program that reads two numbers and swap them.

#include<iostream>
#include<conio.h>
using namespace std;
class swp{
	
	public:
		int a,b;
		void number()
		{
			cout<<"Enter the number:"<<endl;
			cin>>a>>b;
			
			cout <<"The number before swap is = "<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
			
			int temp;
			temp = a;
			a = b;
			b = temp;
			
			cout<<"The number after swap is = "<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
		}
};

int main()
{
	swp s;
	s.number();
}
