#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class quad{
	public:
		int a,b,c;
		void calc()
		{
			cout <<"enter the value of quadratic equation i.e a , b, c respectively."<<endl;
			cin>>a>>b>>c;
			// to find the root we have
			float root1,root2;
			root1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
			root2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
			
			cout<<"The roots of given quadratic equation are = "<<root1<<" , "<<root2<<endl;
		}
};

int main()
{
	quad q;
	int x,y,z;
	q.calc();
}
