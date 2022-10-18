//find the prime number of two intervals
/*
There are 25 prime numbers between 1 to 100 which are 
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
53, 59, 61, 67, 71, 73, 79, 83, 89, 97.
*/

#include <iostream>
using namespace std;

int main ()
{
	int number1;
	int number2;
	int temp;
	int c;
	
	cout << "Enter First number :- " ;
	cin >> number1;
	cout << "Enter last number :- ";
	cin >> number2;
	
	if (number1 > number2)
	{
		temp = number1;
		number1 = number2;
		number2 = temp;
	}
	
	for (c = number1; c <= number2; c++ )
	{
		if (c != 1 && c % 2 != 0 && c % 3 != 0 && c % 5 != 0 && c % 7 != 0){
			cout << c <<", ";	
		}
			if ( c == 2 || c == 3||c == 5|| c==7)
		{
			cout <<c <<", ";
		}
	}
	
	return 0;
}
