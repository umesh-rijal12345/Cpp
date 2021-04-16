#include<iostream>
#include<conio.h>
using namespace std;
class calc{
	
	public:
		
		int a,b;
		void add(int x, int y)
		{
			 a = x;
			 b =y;
			cout<<"The sum is = "<<a+b<<endl;
		}
		
		void sub(int x, int y)
		{
			a = x;
			b = y;
			cout <<" The difference is = "<<a-b<<endl;
		}
		
		void mul(int x , int y)
		{
			a = x;
			b = y;
			cout<<" The multiplication is = "<<a*b<<endl;
		}
		
		void div(int x , int y)
		{
			a = x;
			b = y;
			cout<< " The division is = "<<(float)a/b<<endl;
		}
};

int main()
{
	calc c;
	int m,n;
	cout <<"Enter two numbers that you want to calculate:"<<endl;
	cin>>m >> n;
	c.add(m,n);
	c.sub(m,n);
	c.mul(m,n);
	c.div(m,n);
}
