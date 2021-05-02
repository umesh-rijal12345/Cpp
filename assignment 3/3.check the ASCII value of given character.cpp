// program to print ASCII value of all ASCII value of all characters.

#include<iostream>
#include<conio.h>
using namespace std;
class A{
	
	public:
		char c;
		void print()
		{
			cout <<"Enter the character: "<<endl;
			cin>>c;
			
			cout<<"The ASCII value of "<< c <<" is " << int(c) <<endl;
		}
};

int main()
{
	A a;
	a.print();
}
