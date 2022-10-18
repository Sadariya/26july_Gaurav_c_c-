// check that number is armstrong or not.
/*
Given a number x,determine whether the given number is Armstrong number or not.
A positive integer of n digits is called an Armstrong number of order n (order is number of digits)
if abcd… = pow (a,n) + pow (b,n) + pow (c,n) + pow (d,n) + …. 
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main ()
{
	int number;
	int a,b,c,d,e=0;
	cout <<endl<< "**********Enter number to check that it is an armstrong number or not**********"<<endl;
	cout <<endl <<right <<setw(29) << "Enter the Number :- ";
	cin >> number;
	b = number;
	a= 1 + log10 (number);
	for (int b = 0 ; b < a; b ++)
	{
		d = number;
		c = pow (number %= 10 , a);
		d /=10;
		number = d;
		e += c;
	}
	cout <<endl << "\tYour result is under ";
	if (b == e)
	{
		cout <<endl <<right <<setw(12)<< "-->"<<b<<" is an armstrong number ";
	}
	else
	{
		cout <<endl <<setw(12)<<"-->"<<b<<" is not an armstrong number ";
	}
return 0;
}
