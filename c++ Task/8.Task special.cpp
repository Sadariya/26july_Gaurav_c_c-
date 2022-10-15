#include<iostream>
using namespace std;

class Getvalue 
{
	public:
		int number1;
		int number2;
		int number3;
		int total;
		
		void get ()
		{
			cout << "Number1 = ";
			cin >> number1;
			cout <<"Number2 = ";
			cin >> number2;
		}
};

class Addition : public Getvalue
{
	public :
		
		void add ()
		{
			total = number1 + number2;
			cout <<endl<< "Your addition is " << total<<endl;
		}
		void readd ()
		{
			cout << "Enter readdition number ";
			cin >> number3;
			total = total + number3;
			cout << "Your readdition is : "<<total;
		}
};
class Multiplication : public Getvalue
{
	public :
		
		void Multiply ()
		{
			total = number1 * number2;
			cout <<endl<< "Your multiplication is " << total;
		}
			void readd ()
		{
			cout << "Enter readdition number ";
			cin >> number3;
			total = total * number3;
			cout << "Your readdition is : "<<total;
		}
};

class Substraction : public Getvalue
{
	public :
		
		void Sub ()
		{
			total = number1 - number2;
			cout <<endl<< "Your substraction is " << total;
			
		}
			void readd ()
		{
			cout << "Enter readdition number ";
			cin >> number3;
			total = total - number3;
			cout << "Your readdition is : "<<total;
		}
};

class Division : public Getvalue
{
	public :
		
		void Div ()
		{
			total = number1 / number2;
			cout <<endl<< "Your division is " << total;
		}
			void readd ()
		{
			cout << "Enter readdition number ";
			cin >> number3;
			total = total / number3;
			cout << "Your readdition is : "<<total;
		}
};

int main ()
{
	int ch,ch1;
	
	cout << endl <<" Press 1 for Addition ";
	cout << endl <<" Press 2 for substraction ";
	cout << endl <<" Press 3 for multiplication ";
	cout << endl <<" Press 4 for division "<<endl;
	cout << endl <<"Enter the number :- ";
	cin >> ch;
	
	switch (ch)
	{
		case 1 :
			Addition a1;
			a1.get();
			a1.add();
				
				cout <<endl << " Press 1 for re addition "	<<endl;
				cout << " Press 2 for new addition " << endl;
				cout << " Enter the number ";
				cin >> ch1;
				switch (ch1)
				{
					case 1:
						a1.readd();
						break;
					case 2:
						cout <<endl << "For new addition : ";
						a1.get();
						a1.add();
						break;
						
					default :
						cout<<"Contact to tops person Jatin";
						break;
						
				}	
			break;
		case 2 :
			Substraction s1;
			s1.get();
			s1.Sub();
				cout <<endl << " Press 1 for re substraction "	<<endl;
				cout << " Press 2 for new substraction " << endl;
				cout << " Enter the number ";
				cin >> ch1;
				switch (ch1)
				{
					case 1:
						s1.readd();
						break;
					case 2:
						cout <<endl << "For new substraction : ";
						s1.get();
						s1.Sub();
						break;
						
					default :
						cout<<"Contact to tops person Jatin";
						break;
						
				}
			break;
		case 3 :
			Multiplication m1;
			m1.get();
			m1.Multiply();
				cout <<endl << " Press 1 for re multipication "	<<endl;
				cout << " Press 2 for new multipication " << endl;
				cout << " Enter the number ";
				cin >> ch1;
				switch (ch1)
				{
					case 1:
						m1.readd();
						break;
					case 2:
						cout <<endl << "For new multiplcation : ";
						m1.get();
						m1.Multiply();
						break;
						
					default :
						cout<<"Contact to tops person Jatin";
						break;
						
				}
			break;
		case 4 :
			Division d1;
			d1.get();
			d1.Div();
				cout <<endl << " Press 1 for re division "	<<endl;
				cout << " Press 2 for new division " << endl;
				cout << " Enter the number ";
				cin >> ch1;
				switch (ch1)
				{
					case 1:
						d1.readd();
						break;
					case 2:
						cout <<endl << "For new division : ";
						d1.get();
						d1.Div();
						break;
						
					default :
						cout<<"Contact to tops person Jatin";
						break;
						
				}
			break;
		
		Default :
				cout <<endl<< " Go to hell ";
			break;
			
	}
	
	return 0;
}


