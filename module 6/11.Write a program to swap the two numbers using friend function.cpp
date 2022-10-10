#include <iostream>
using namespace std;

class Number
{
	private :
		int a;
		int b;
	
	public :
		void berforeswap ()
		{
			cout << "Enter any two numbers";
			cout <<endl <<"A = ";
			cin >> a;
			cout <<"B = ";
			cin >> b;
			cout << "\n**** Before swapping Number ****";
			cout <<endl << "\t-> A = "<<a;
			cout <<endl << "\t-> B = "<<b;
		}
	friend int swapnumber (Number);
};

int swapnumber (Number n1)
	{
		int temp;
			
			temp = n1.a;
			n1.a = n1.b;
			n1.b = temp;
		cout << endl << "\n**** After swapping Number ****";
		cout << endl << "\t-> A = " <<n1.a;
		cout << endl << "\t-> B = " <<n1.b;

		return 0;
	}

int main ()
{
	Number n;
	n.berforeswap();
	swapnumber(n);

	return 0;	
}
