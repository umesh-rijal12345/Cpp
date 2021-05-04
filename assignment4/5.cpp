#include<iostream>
#include<conio.h>
using namespace std;
class number{
	
	private:
		int a,b,c;
		
	public:
		number(int x, int y, int z)
		{
			
			a = x;
			b = y; 
			c = z;
		}
		
		int largest()
		{
			int large = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
			return large;
		}
};

int main()
{
	int m,n,o;
	cout<<"Enter the number:"<<endl;
	cin>>m>>n>>o;
	number num(m,n,o);
	num.largest();
	cout<<"The largest number is : "<<num.largest();
}
