#include<iostream>  //to add digits of four digit number
#include<conio.h>
using namespace std;
class num{
	public:
		int a,s=0,rem;
		void sum()
		{
			cout<<"Enter the four digit number:"<<endl;
			cin>>a;
			
			for(int i=0; i<4 ; i++)
			{
				rem = a%10;
				a = a/10;
				s = s + rem;
			}
			
			cout<<"The sum of digits of "<< a << " is "<< s;
		}
};

int main()
{
	num n;
	n.sum();
}
