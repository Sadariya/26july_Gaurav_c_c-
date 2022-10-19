//Write a program of to swap the two values using templates
#include <iostream>
using namespace std;
template <class t>
class tops
{
	public :
		t number1;
		t number2;
		t temp;
		
		void enter ()
		{
			cout <<"Enter the number1 :- " ;
			cin >> number1;
			cout << "Enter the number2 :- ";
			cin >> number2;
		}
		void star ()
		{
			temp = number1;
			number1 = number2;
			number2 = temp;
		}
		void showdata ()
		{
			cout <<endl << "Your number1 is :- " <<number1;
			cout <<endl << "Your number2 is :- " <<number2;
		}
		
};
int main ()
{
	tops <float> s1 ;  // data type intialize
	s1.enter();
	cout <<endl <<"-----Before swapping numbers-----"<<endl;
	s1.showdata();
	cout <<endl <<"-----After swapping numbers-----"<<endl;
	s1.star();
	s1.showdata();
	
	return 0;
}
