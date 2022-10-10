/*
Create a class person having members name and age.
Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize,
read and write data.
Write also Main function (Multiple Inheritance).
*/
#include <iostream>
using namespace std;

class person 
{
	public :
		int age;
		char name[10];
		void writedata ();
};

void person :: writedata ()
{
	cout << "\n\t******Enter Member details*******"<<endl;
	cout <<endl << "\tEnter Member Age :";
	cin >> age;
	cout << "\tEnter Member Name :";
	cin >> name;
}

class student  
{
	public :
		int per ;
		void percentage ();
};

void student :: percentage ()
{
	cout << "\tEnter the Member percentage :";
	cin >> per;
}

class teacher
{
	public:
		int sal;
		void salary ();
};

void teacher :: salary ()
{
	cout << "\tEnter the salary of member :";
	cin >> sal;
}

class principal : public person ,public student ,public teacher
{
	public :
		void readdata ();
};

void principal :: readdata ()
{
	cout << "\n\t.......Member details is under........."<<endl;
	cout << "\n\t|" << "Member Name is "<<name;
	cout << "\n\t|" <<"Member Age is "<< age;
	cout << "\n\t|" <<"Member percentage is "<< per;
	cout << "\n\t|" <<"Member salary is "<<sal;
}

int main ()
{
	
	principal p1;
	p1.writedata();
	p1.percentage();
	p1.salary();
	p1.readdata();
	
	return 0;
}

