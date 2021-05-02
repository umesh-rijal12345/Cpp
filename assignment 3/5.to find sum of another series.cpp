 //program to evaluate the series S = 1+2*1+3*2+……………………N*(N-1).
 #include<iostream>
 #include<conio.h>
 using namespace std;
 class series{
 	
 	public:
 		float sum = 1,n;
 		void find()
 		{
 			cout<<"Enter the number:"<<endl;
 			cin>>n;
 			
 			for(int i=2; i<=n; i++)
 			{
 				sum += i*(i-1);
			 }
			 
			 cout<<"The sum is = "<<sum<<endl;
		 }
 };
 
 int main()
 {
 	series s;
 	s.find();
 }
