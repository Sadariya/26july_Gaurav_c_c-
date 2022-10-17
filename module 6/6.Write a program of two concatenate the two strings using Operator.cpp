//Write a program of two concatenate the two strings using Operator Overloading

#include <iostream>
#include <string.h>
using namespace std;

class String
{
	private :
		char a[20];
	public :		
		void entername ()
		{
			cout << "Enter 1st string name :- ";
			cin >> a ;
		}
		String operator + (String obj)
		{
			String obj1;
			strcat (a,obj.a);
			strcpy (obj1.a,a);
			
			return obj1;
		}
		void showdata ()
		{
			cout <<endl<< a  ;
		}
};

int main ()
{
	String s1,s2,s3;
	s1.entername();
	s2.entername();
	cout <<endl <<"Before concenate the two string ";
	cout <<endl <<"1st string is";
	s1.showdata();
	cout <<endl <<"2nd string is";
	s2.showdata();
	cout <<endl <<"After concenate the two string ";
	s3 = s1 + s2;
	s3.showdata();
	
	return 0;
}
