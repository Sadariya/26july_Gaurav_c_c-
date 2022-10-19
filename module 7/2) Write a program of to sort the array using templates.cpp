// 2) Write a program of to sort the array using templates.

#include <iostream>
#include <iomanip>
using namespace std;
template <class s>

class sort
{
	public :
		s a[10];
		s b,c,d;
		
	s enterdata ()
	{
		cout <<"Enter the number :- "<<endl;
		for (b = 0; b < 5; b++)
		{
			cout <<setw (20)<<"a["<<b+1<<"] = ";
			cin >>a[b];
		}
		return 0;	
	}
		
	s showdata ()
	{
		for (b = 0; b < 5; b ++)
		{
			for (d = b+1 ; d <5; d++)
			{
				if (a[b] > a[d])
				{
					c = a[b];
					a[b] = a[d];
					a[d] = c;
				}
			}
		cout <<endl <<setw(20)<< "ans["<<b+1<<"] ="<< a[b];
		}
		return 0;
	}
};

int main ()
{	
	sort <int> s1;
	cout <<endl << "---------Enter any 5 numbers to sort that numbers--------- " <<endl;
	s1.enterdata();
	cout <<endl << "---------5 sorted numbers is given below --------- " <<endl;
	cout <<"Your numbe is :- ";
	s1.showdata();
	
	return 0;
}
