#include<iostream>
#include<conio.h>
using namespace std;
class number{
	
	public:
		int a, b;
		number(int x , int y)
		{
			a = x;
			b = y;
			
		}
		
		int getMax()
			{
				if(a>b)
				return a;
				
				else
				return b;
			}
};

int main()
{
	int m,n;
	cout<<"Enter the number:"<<endl;
	cin>>m>>n;
	number num(m,n);
	num.getMax();
	cout<<"Largest = "<<num.getMax();
}
