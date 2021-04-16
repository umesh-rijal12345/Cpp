#include<iostream>		//to convert second into hour, minute and second
#include<conio.h>
using namespace std;
class time{
	public:
		int second,hour,minute;
		void calculate(int x)
		{
			second = x;
			hour = second/3600;
			second = second%3600;
			minute = second/60;
			second = second%60;
			
			cout<<x<<" seconds is equals to = "<<endl<<hour<<" hours "<<endl<<minute<<" minutes "<<endl<<second<< " seconds"<<endl;
		}
};

int main()
{
	time t;
	int a;
	cout<<"Enter the seconds you want to convert: "<<endl;
	cin>>a;
	t.calculate(a);
}
