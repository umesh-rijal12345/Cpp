/*Create a class Swapper class with two integer instance variablex and y
 and constructor with two parameters that initializes the two variables. 
 Also include three member functions: A getX () that returns x, a getY () 
 function that returns y, a void swap () method that swaps the values of 
 x and y. Then define a main() function to create an object of Swapper class 
 and swap the value of instance variables*/
#include<iostream>
#include<conio.h>
#include<utility>
using namespace std;
class Swapper{
	private:
		int x , y ;
		
	public:
		Swapper(int x1 , int y1)
		{
			x = x1;
			y = y1;
			
			cout<<"Before swap "<<endl<<"x : "<<x<<endl<<"y : "<<y<<endl;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
		
		
};

int main()
{
	Swapper s(10,12);
	s.getX();
	s.getY();
	swap(getX(),getY());
	cout<<"After swap "<<endl<<"x : "<<s.getX()<<endl<<"y : "<<s.getY()<<endl;
}
