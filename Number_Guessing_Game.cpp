//                 Number Guessing Game 
//                ----------------------

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	
	cout<<"\t\t\t\t welcome to Guess_the_Number Game!"<<endl;   
	cout<<"Let's Start!"<<endl;
	cout<<"you have only 10 chances!"<<endl;
	int chance =3;	
	srand(time(0));
	int random_number = 1 + (rand() % 100);  //the number between (1 - 100)
	
	int user_number;
	
	cout<<"Enter number between 1-100:";
	cin>>user_number; 
	
   
		if(user_number > random_number)
		{
			cout<<"your number is too high"<<endl<<"TRY!"<<endl;
        	
		}
		
		else if(user_number < random_number)
		{
			cout<<"your number is too low"<<endl<<"TRY!"<<endl;
			
		}
		
		else
		{
			cout<<"Your number is correct"<<endl;
		
		}		

cout<<"Game End!";
return 0;
}

