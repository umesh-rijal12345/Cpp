//program to reverse a number.

#include<iostream>
#include<conio.h>
using namespace std;
class reverse{
	
	public:
		int n,rem1,rem2,rem3,rem4;
		void find()
		{
			cout<<"Enetr 4 digit number : "<<endl;
			cin>>n;
			
			int x = n;
			
			rem1 = n%10;
			n = n/10;
			rem2 = n%10;
			n = n/10;
			rem3 = n%10;
			n = n/10;
			rem4 = n%10;
			
			int rev = rem1*1000 + rem2*100 + rem3*10 + rem4;
			cout<<"The reverse of "<<x<<" is = "<<rev<<endl;
		}
};

int main()
{
	reverse r;
	r.find();
}
