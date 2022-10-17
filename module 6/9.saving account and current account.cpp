/*
Assume that a bank maintains two kinds of accounts for customer, one called
as saving account and other as current accounts provides Simple interest and
withdraw facilities but no Cheque book facility.
a) The current account provides Cheque book facility but no interest.
b) Current account holders should maintain a minimum balance and if the
balance falls below this level a service charges is imposed
*/

#include <iostream>
#include <string.h>
using namespace std;

class details
{
	public :
		int  Number; //account number
		int  Balance;
		char Name [30];
		void detail ()		
		{
			cout <<endl <<"**********Enter Your account details**********";
			cout <<endl << "Enter Your name :- ";
			cin >> Name;
			cout << "Enter Your account number :- ";
			cin >> Number;
			cout <<"Enter Your Balance :- ";
			cin >> Balance;
		}
};
class saving : public details
{
	private :
		int  Years;
		int  SI;
		int  withamount;
		
	public :
		void simpleinterest ()
		{
			cout <<endl << "***********Customer Details**********"<<endl;
			cout <<endl <<"|"<< "Your name :- "<<Name<<"|";
			cout <<endl <<"|"<< "Type :- Saving Account"<<"|";
			cout <<endl <<"|"<< "Your account number :- "<<Number<<"|";
			cout <<endl <<"|"<< "Your Balance :- "<<Balance<<"|"<<endl<<endl;
			cout << "Enter Your SI years:- ";
			cin >> Years;
		}
		void showinterest ()
		{
			SI = (Balance*Years*5)/100;
			cout <<endl<< "|Your simple interest amount will be " <<SI<<"|";
		}
		void withdrawl ();
		void showwithdrawl ();
};
void saving :: withdrawl ()
{
	cout <<endl << "***********Customer Details**********"<<endl;
	cout <<endl <<"|"<< "Your name :- "<<Name<<"|";
	cout <<endl <<"|"<< "Type :- Saving Account"<<"|";
	cout <<endl <<"|"<< "Your account number :- "<<Number<<"|";
	cout <<endl <<"|"<< "Your Balance :- "<<Balance<<"|"<<endl;	
}
void saving :: showwithdrawl ()
{
	cout <<endl << "Enter withdrawl amount :- ";
	cin >>withamount;
	if (Balance > withamount)
	{
		Balance -= withamount;
		cout <<endl <<"|Your balance is :- "<<Balance<<"|";	
	}
	else 
	{
		cout <<endl<< "You are not able to withdrawl amount due to not enough balance.";
		cout <<endl <<"|Your balance is :- "<<Balance<<"|";	
	}
}

class current : public details
{
	public :
		int chequeno;
		string chequenm;
		int withamount;
		int penalty;
		void cheque()
		{
			cout <<endl << "*****Enter check details*****";
			cout <<endl <<"Enter check no. :- ";
			cin >>chequeno;
			cout << "Enter name on cheque :- ";
			cin >>chequenm;
			cout << "Enter withdrawl amount :- ";
			cin >>withamount;
		}
		void showcheque ()
		{
			cout <<endl << "|Your cheque no is " << chequeno<<"|";
			cout <<endl << "|Name on cheque is " << chequenm<<"|";
			cout <<endl << "|Withdrawl amount is " <<withamount<<"|";
			if ( withamount < Balance )
			{
			Balance -= withamount;
			cout <<endl << "Your Balance is " << Balance;
			}
			else 
			{
				cout <<endl << "Your check is bounce ";
				cout <<endl <<"|"<< "Your Balance :- "<<Balance<<"|"<<endl;
			}
		}
		void Penalty ()
		{
		if (Balance < 5000)
		{
			penalty = (Balance * 5.5)/100;
			cout <<endl<< "Your penalty is " <<penalty;
			Balance -= penalty;
			cout <<endl <<"|"<< "Your Balance :- "<<Balance<<"|"<<endl;
		}
		else 
		{
			cout <<endl<< "Your account balance is upto date ";
			cout <<endl <<"|"<< "Your Balance :- "<<Balance<<"|"<<endl;
		}
		}
					
};
int main ()
{
	int a,n;
	int password;
	saving s1;
	current c1;
	cout << "Press 1. If Your account is saving "<<endl;
	cout << "Press 2. If Your account is current"<<endl;
	cout << "Enter Your bank account type :- ";
	cin >> a;
	switch (a)
	{
		case 1:
			s1.detail();
			cout << "No checkbook facility is available for saving account "<<endl;
			cout << "Press 1. For simple interest details "<<endl;
			cout << "Press 2. For withdrawl an amount"<<endl;
			cout << "Enter what would you like to process :- ";
			cin >> n;
			
			switch (n)
			{
				case 1:
					s1.simpleinterest();
					s1.showinterest();
				break;
				
				case 2:
					cout <<endl <<"Enter Your password :- ";
					cin >> password;
					if (password == 1234)
					{
						s1.withdrawl();
						s1.showwithdrawl();
					}
				break;
			}
			break;
			
			
		case 2:
			c1.detail();
			cout << "checkbook facility is available for current account "<<endl;
			cout << "If Your balance is below 10000 charges will be applied. "<<endl;
			cout << "Press 1. For Cheque book facility "<<endl;
			//b) Current account holders should maintain a minimum balance and if the
			//balance falls below this level a service charges is imposed
			cout << "Press 2. For withdrawl an amount"<<endl;
			cout << "Enter what would you like to process :- ";
			cin >> n;
			
			switch (n)
			{
				case 1:
					c1.cheque();
					c1.showcheque();
					cout <<endl<< "\n---------checking minimum balance --------";
					c1.Penalty();
				break;
			}
			break;
		default:
			break;
	}

	return 0;
}
