#include<iostream>
#include<conio.h>
using namespace std;
class sum{
	public:
		int num,size;
		void add(int n)
		{
			int rem,i,sum=0;
			num=n;
			for(i=1;i<=size;i++)
			{
				rem=num%10;
				num=num/10;
				sum=sum+(rem*rem);
				
			}
			cout<<"The sum of digits of "<< n<<" is "<<sum<<endl;
		}
};

int main()
{
	system("cls");
	sum s;
	cout<<"How much digit number you want to enter?"<<endl;
	cin>>s.size;
	cout<<"Enter the number you want"<<endl;
	cin>>s.num;
	s.add(s.num);
}
