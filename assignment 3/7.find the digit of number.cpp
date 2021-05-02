//program to count number of digits in a number.

#include<iostream>
#include<conio.h>
using namespace std;
class number{
	
	public:
		int a,count=0;
		void find()
		{
			cout<<"Enter the number:"<<endl;
			cin>>a;
			
			int x = a;
			while(a!=0)
			{
				a = a/10;
				count++;
			}
			cout<<"The total number of digits in "<<x << " is "<< count<<endl;
			
		}
		
};

int main()
{
	number n;
	n.find();
}
