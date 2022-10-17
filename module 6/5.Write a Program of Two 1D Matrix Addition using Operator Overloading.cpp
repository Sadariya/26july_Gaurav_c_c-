// Write a Program of Two 1D Matrix Addition 
//using Operator Overloading

#include <iostream>
#include <iomanip>
using namespace std;

class Array
{
    public :
	int a[10];
	int c;
	void getdata ()
	{
		for (c = 0; c < 2; c++){
			cout << "Enter Your number " ;
			cin >> a[c];
		}
	}
	Array operator + (Array obj)
	{
	    Array obj1;
	    for (c = 0; c < 2; c++){
	    obj1.a[c] = a[c] + obj.a[c];
		}
		
		return obj1;
	}
	void showdata ()
	{
		for (c = 0; c < 2; c++){
	   		cout <<endl<<setw(15)<< "|" << a[c]<< "|";
		}
	}
	void showdata1 ()
	{
		for (c = 0; c < 2; c++){
		cout <<endl <<setw(30)<< "|"<< a[c]<<"|";
		}
	}
};

int main ()
{
     Array A1,A2;
     cout << "Enter 1st 1D matrix :-" <<endl;
     A1.getdata();
     cout << "Enter 2nd 1D matrix :-" <<endl;
     A2.getdata();
     cout <<endl<< "1st 1D matrix :-" ;
     A1.showdata();
     cout <<endl<< "2nd 1D matrix :-" ;
     A2.showdata();
     Array A3 = A1 + A2;
     cout <<endl<< "Two matrix addition is under :-";
     A3.showdata1();

     return 0;
}
