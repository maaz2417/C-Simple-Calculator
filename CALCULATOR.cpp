#include<iostream>
using namespace std;
int main()
{
	char operation;
	double num1;
	double num2;
	char choice;
	do{
		cout<<"Enter Operator ( +, -, *, /) : ";
		cin>>operation;
		
		cout<<"Enter Two Numbers : "<<endl;
		cin>>num1;
		cin>>num2;
		
		switch (operation){
			case '+':
				cout<< "RESULT : "<<num1 + num2 <<endl;
				break;
			case '-':
				cout<<"RESULT : "<<num1 - num2 <<endl;
				break;
			case '*':
			    cout<<"RESULT : "<<num1 * num2 <<endl;
			    break;
			case '/':
				if(num2 != 0)
				cout<<"RESULT : " <<num1 / num2<<endl;
			    else
			    cout<<"ERROR! divided by 0"<<endl;
			    break;
		}
		cout<<"Do You Want To Do Another Calculation? (Y/N)";
		cin>>choice;
	} while (choice =='y' || choice == 'Y');
    return 0;
}

