#include<iostream>
using namespace std;

class abstraction 
{
	private :
		
		int Sum;
	
	public:
		
		// assign the private variable :- 
		abstraction ()
		{
			int a;
			Sum = a;
		}
		
		// sum is done
		int sum1 (int b,int c)
		{
			Sum = b + c;
			
			return 1;
		}
		
		// Get value 
		int add ()
		{
			return Sum;
		}
		
};

int main ()
{
	int number,number1;
	
	cout << "Enter the number :- ";
	cin >> number >> number1;
	
	abstraction obj;
	obj.sum1(number,number1);
	
	cout << "Your addtion is " << obj.add();
}
