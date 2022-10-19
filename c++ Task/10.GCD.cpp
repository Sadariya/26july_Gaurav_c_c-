// GCD number
/*
Greatest Common Divisor
a = 45 = 3 * 3 * 5
b = 30 = 2 * 3 * 5

common factor = 3 , 5

so GCD of 45 and 30 is 3*5 = 15
*/ 
#include <iostream>
using namespace std;

int main ()
{
	int number1 = 45 ;
	int number2 = 30 ;
	int a,b;
	
	for (int a = 1; a < number2; a ++)
	{
		if (number1 % a == 0 && number2 % a == 0)
		{
			b = a;
		}
	}
	cout << "Your number is "<<b;
}
