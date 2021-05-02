//program to find cubes and squares of first 10 natural numbers.

#include<iostream>
using namespace std;
class fnd{
	
	public:
		
		void check()
		{
			//to find cube 
			cout<<"The square of first 10 natural number is :"<<endl;
			for(int i=1 ; i<=10 ;i++)
			{
				cout<<i*i<<endl;
			}
			
			cout<<"The cube of first 10 natural number is :"<<endl;
			for(int i=1 ; i<=10 ;i++)
			{
				cout<<i*i*i<<endl;
			}
		}
};

int main()
{
	fnd f;
	f.check();
}
