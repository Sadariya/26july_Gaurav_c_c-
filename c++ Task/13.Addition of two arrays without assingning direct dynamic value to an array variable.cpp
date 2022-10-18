//Addition of two arrays without assingning direct dynamic value to an array variable

#include <iostream>
using namespace std;

int main ()
{
	int a;
	int b[20];
	int c[30];
	
	for (a = 0; a < 5; a++)
	{
		cout << "Enter the number b["<<a<<"] = ";
		cin >> b[a];
		cout << "Enter the number c["<<a<<"] = ";
		cin >> c[a];
	}
	
	for (a = 0; a < 5; a++)
	{
		cout <<endl <<" b["<<a<<"] + c ["<<a<<"] = "<<b[a]+c[a];
	}
}
