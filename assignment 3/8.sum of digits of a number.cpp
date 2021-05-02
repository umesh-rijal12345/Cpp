//program to find sum of digits of a number.

#include<iostream>
#include<conio.h>
using namespace std;
class digit{
	
	public:
		int n,sum=0,rem;
		void find()
		{
			cout<<"Enter the number:"<<endl;
			cin>>n;
			
			int x = n;
			while(n!=0)
			{
				rem = n%10;
				n = n/10;
				sum = sum + rem;
			}
			cout <<"The sum of digits of a number is : "<<sum<<endl;
		}
};

int main()
{
	digit d;
	d.find();
}
