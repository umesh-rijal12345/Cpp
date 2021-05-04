#include<iostream>
#include<conio.h>
using namespace std;
class A{
	
	public:
		void check()
		{
			int arr[20],i,j,n;
			cout<<"Enter the size of array:"<<endl;
			cin>>n;
			
			cout<<"Enter the element of array:"<<endl;
			for(i=0 ; i<n ; i++)
			{
				cin>>arr[i];
			}
			
			cout<<"The array is :"<<endl<<"{";
			for(i=0 ; i<n ; i++)
			{
				cout<<arr[i]<<",";
			}
			cout<<"}"<<endl;
			
			//to check the array is sorted or not
			int flag =0;
			for(i=0 ; i<n ; i++)
			{
				if(arr[i]>arr[i+1])
				{
				flag = 1;
				break;
				}
				else
				{
					flag = 0;
				}
			}
			if(flag = 0)
			{
				cout<<"The array is sorted."<<endl;
			}
			else
			{
				cout<<"The array is not sorted."<<endl;
			}
				
		}
};

int main()
{
	A a;
	a.check();
}
