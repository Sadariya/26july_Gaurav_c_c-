/*
Define a class to represent a bank account. Include the following members:
   Data Member :-
a) Name of the depositor
b) Account Number
c) Type of Account
d) Balance amount in the account
   Member Functions :-
f) To assign values
g) To deposited an amount
h) To withdraw an amount after checking balance
i) To display name and balance 
*/
#include<iostream>
using namespace std;
class Bankaccount
{
	
public:
    char name[30];
    double accountno;
    char type[30];
    int balance;
    
    int assign ()
    {
        cout<<"Enter name of the depositor :- ";
        cin>>name;
        cout<<"Enter account Number :- ";
        cin>>accountno;
        cout<<"Enter the type of account :- ";
        cin>>type;
        cout<<"Enter the previous balance :- ";
        cin>>balance;
    
        return 0;
    }; 

	int deposit ()
	{
		int damount;
		cout<<"Enter the deposit amount :- ";
		cin>>damount;
		balance += damount;
		cout<<"Your balance is "<<balance;
		
		return 0;
	}
	
    int withdraw ()
    {
    	int withd;
    	
        cout<<" Enter withdrawl amount :- ";
        cin>>withd;
        
        if (withd < balance){
        	balance -= withd;
            cout<<"Balance amount in the account is :- "<<balance<<endl;
        }
        if (withd > balance){
            cout<<"........insufficient balance in your account......"<<endl;
             cout<<"Your balance is :- "<<balance<<endl;
        }
        
        return 0;
    }
    
    int show ()
    {
    	cout<<"Name of the depositor is :- "<<name<<endl;
        cout<<"Your balance is :- "<<balance<<endl;
	}
};

int main ()
{
    Bankaccount obj;
    obj.assign ();
    int a;
    
    cout<<".....Press 1 to deposite an amount....."<<endl;
    cout<<".....Press 2 to withdraw an amount....."<<endl;
    cout<<".....press 3 to check balance "<<endl;
    cin>>a;
    
	if (a == 1)
	{
		obj.deposit();
	}
	if (a == 2){
		obj.withdraw ();	
	}
	if (a == 3)
	{
		obj.show();
	}
    return 0;
}
