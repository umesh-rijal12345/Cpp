// to read marks in five subjects and to find total marks, percentage
#include<iostream>
#include <conio.h>
using namespace std;
class marks{
	public:
		int math,science,social,nepali,english;
		void calculate(int m)
		{
			cout<<"Enter the marks of maths , science , social , nepali, and english respectively:"<<endl;
			cin>>math>>science>>social>>nepali>>english;
			if((math>100)||(science>100)||(social>100)||(nepali>100)||(english>100))
			{
				cout<<"!!! entered marks is invalid !!!"<<endl;
			}
			else
			{
				int total,percent;
				total = math + science + social + nepali + english;
				percent = (total*100)/500;
				cout<<"The total marks is = "<<total<<endl;
				cout<<"The percentage of secured marks is = "<<percent<<"%"<<endl;
			}
			
		}
};

int main()
{
	int m;
	marks ma;
	ma.calculate(m);
}
