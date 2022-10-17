/*
Create a class account that stores customer name, account number and 
type of account. From this derive classes curr_acc and sav_acct to make 
them more specific to their requirements Include necessary member 
functions in order to achieve the following tasks 
a) Accepts deposit from a customer and update balance. 
b) Display the balance. 
c) Compute and deposit interest. 
d) Permit withdraws and updates the balance. 
e) Check for the minimum balance, impose penalty, necessary and 
update the balance.
*/
#include <iostream>
using namespace std;

class Account  // This is base class Account 
{
	public :
		char cname [20];
		long int ano ;
		int type ;
		float balance;
		void details () // customer details
		{
			cout << "Enter Your name :- ";
			cin >> cname;
			cout << "Enter Your Account number :- ";
			cin >> ano;
			cout <<"Enter Your balance :- ";
			cin >> balance;
		}
		void displaybalance () // 2) Display the balance.
		{
			cout <<endl <<"Your balance is "<<balance;
		}
};

class Saving : public Account // This is derived class Saving which have details of base class 
{
	public :
	float deposit;
	float PI;
	float withamount ;
	float penalty;
	
		void Deposit ();
		void computeinterest ();
		void permitwithdraw ();
		void Penalty ();
};

void Saving :: Deposit () // 1) Accepts deposit from a customer and update balance.
{
	cout <<endl << "How many amount deposit in your bank account :- ";
	cin >>deposit;
	balance +=deposit;
}

void Saving :: computeinterest () // 3) Compute and deposit interest.
{
	PI = (balance * 5)/100;
	cout <<endl<< "Your deposit interest is " << PI;
	balance += PI; // deposit interest in balance 
}

void Saving :: permitwithdraw () // 4) Permit withdraws and updates the balance.
{
	cout << "Enter amount want to withdraws :- ";
	cin >> withamount ;
	balance -= withamount;
}
void Saving :: Penalty ()//5) Check for the minimum balance, impose penalty, necessary and update the balance.
{
	if (balance < 5000)
	{
		penalty = (balance * 5.5)/100;
		cout << "Your penalty is " <<penalty;
		balance -= penalty;
	}
	else 
	{
		cout <<endl<< "Your account balance is upto date ";
	}
}

class Current : public Account // This is derived class current which have details of base class  
{
	public :
		
};
int main ()
{
	int type;
	int ch,a;
	int password;
	Saving s1;
	Current c1;
	s1.details();
	
	cout << "Press 1 for Saving Account "<<endl;
	cout << "Press 2 for Current Account "<<endl;
	cout << "Enter Account type first :- " ;
	cin >> type ;
	
	switch (type)
	{
		case 1:
			cout <<endl<<"1) Accepts deposit from a customer and update balance. ";
			cout <<endl<<"2) Display the balance.";
			cout <<endl<<"3) Compute and deposit interest. ";
			cout <<endl<<"4) Permit withdraws and updates the balance. ";
			cout <<endl<<"5) Check for the minimum balance, impose penalty, necessary and update the balance."<<endl;
		
		for (a = 0 ; a < 10; a++)
		{
			cout << "Enter what would want to do :- ";
			cin >> ch;
				switch (ch)
				{
					case 1:
						s1.Deposit();
						break;
					case 2:
						s1.displaybalance();
						break;
					case 3:
						s1.computeinterest();
						break;
					case 4:
						cout <<endl <<"Enter Your password :- ";
						cin >> password;
						if (password == 1234)
						{
							s1.permitwithdraw();
						}
						break;
					default :
						break;
				}
				cout <<endl << "Press 1 for reprocess ";
				cout <<endl << "Press 11 for no process ";
				cout <<endl << "Do you want to process again :- ";
				cin >> a;
		}	
		break;//main case1 break
		case 2:
			break;//main case2 break
			
		default :
			cout << "Enter valid intput ";
			break;
	}
		s1.Penalty();
		cout <<endl<< "Your final balance is " <<s1.balance;
	return 0;
}
