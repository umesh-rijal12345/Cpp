//Write a C++ program to display the series: ½ + 2/3 + ¾  + 4/5 + 5/6…………………..n-1/n

#include<iostream>
#include<conio.h>
using namespace std;
class A{
	
	public:
	
		void find()
		{
			int i,n;
			float sum=0;
			cout<<"Enter the number:"<<endl;
			cin>>n;
			for( i=2 ; i<=n ; i++)
			{
				sum += (i-1)/i;
			}
			
			cout <<"The sum of given series is = "<<sum<<endl;
		}
};

int main()
{
	A a;
	a.find();
}



