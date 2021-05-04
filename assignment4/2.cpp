/*Write a program that creates two integer arrays data1 and data2,
 possibly of different lengths. Then it uses for loops to create a 
 new array data3 whose length is the sum of the lengths of data1
  and data2 and whose contents consists of the contents of data1 
  followed by contents of data2. For example, if the two arrays 
  are {1,2,3} and {4,5,6,7}, then the code should create the new
   array {1,2,3,4,5,6,7}.*/
#include<iostream>
#include<conio.h>
using namespace std;
class A{
	
	public:
		void check()
		{
			int d,e,f;
			int data1[100],data2[100],data3[200];
			
			cout<<"Enter the size of first array:";
			cin>>d;
			
			//to enter the elements of data1
			cout<<"Enter the elements of data1:"<<endl;
			for(int i=0 ; i<d ; i++)
			{
				cin>>data1[i];
			}
			
			cout<<"Elements of data1 are:"<<endl<<"{";
			for(int i=0 ; i<d ; i++)
			{
				cout<<data1[i]<<",";
			}
			cout<<"}"<<endl;
			
			//to enter the elements of data2
			cout<<"Enter the size of second array:";
			cin>>e;
			
			cout<<"Enter the elements of data2:"<<endl;
			for(int i=0 ; i<e ; i++)
			{
				cin>>data2[i];
			}
			
			cout<<"Elements of data2 are:"<<endl<<"{";
			for(int i=0 ; i<e ; i++)
			{
				cout<<data2[i]<<",";
			}
			cout<<"}"<<endl;
			
			//to put elements of data1 and data2 to third array i.e. data3
			f = d + e;
			int k=0;
			for(int i=0 ; i<d ; i++)
			{
				data3[k]=data1[i];
				k++;
			}
			for(int j=0 ; j<e ; j++)
			{
				data3[k] = data2[j];
				k++;
			}
			
			// to print the final array
			cout<<"The required array is :"<<endl<<"{";
			for(int i=0 ; i<f ; i++)
			{
				cout<<data3[i]<<",";
			}
			cout<<"}";
			
		}
};

int main()
{
	A a;
	a.check();
}
