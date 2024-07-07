//                    calculator using c++

#include<iostream>
using namespace std;
int main()
{
	int num1, num2, choice;
	cout<<"Enter 1st number:"<<endl;
	cin>>num1;
	cout<<"Enter 2nd number:"<<endl;
	cin>>num2;
	
	cout<<"press:\n '+' for 1\n '-' for 2\n 'x' for 3\n '/' for 4 "<<endl;
	cout<<"Enter choice:"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			{
			int sum = num1+num2;
		    cout<<"Addition = "<<sum;
	     	break;
		    }   
		case 2:
			{
			int sub = num1-num2;
		    cout<<"Subtraction = "<<sub;
		    break;
	        }   
		case 3:
			{
			int mult = num1*num2;
		    cout<<"Multiplication = "<<mult;
		    break;
		    }   
		case 4:
			{
			int div = num1/num2;
		    cout<<"Division = "<<div;
		    break;
         	}
        default:
        	cout<<"Invalid choice";
    }
	return 0;	
}
