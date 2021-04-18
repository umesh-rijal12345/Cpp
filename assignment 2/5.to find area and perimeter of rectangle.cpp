//obtain the length and width of a rectangle from the user and compute its area and perimeter.

#include<iostream>
#include<conio.h>
using namespace std;
class rectangle{
	public:
		int length,width;
		void calculate()
		{
			cout<<"Enter the length and width of rectangle :"<<endl;
			cin>>length>>width;
			
			cout<<"The area of the rectangle is = "<< length*width<<endl;
			cout<<"The perimeter of the rectangle is = "<<2*(length+width)<<endl;
			
		}
};

int main()
{
	rectangle r;
	r.calculate();
}
