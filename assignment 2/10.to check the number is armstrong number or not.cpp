//program that reads a number and check whether it is Armstrong's number or not

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class arm{
	
	public:
		int num,sum = 0,size,rem , num1;
		void check()
		{
			cout <<"Enter the number of digits :"<<endl;
			cin>>size;
			cout<<"Enter the number:"<<endl;
			cin>>num1;
			
			num = num1;
			for(int i=0; i<size; i++)
			{
				rem = num%10;
				num = num/10;
				sum = sum + pow(rem,3);
			}
			
			if(sum == num1)
			{
				cout<<num1<<" is armstrong's number."<<endl;
			}
			else
			{
				cout<<num1<<" is not armstrong's number."<<endl;
			}
			
		}
};

int main()
{
	arm a;
	a.check();
}
