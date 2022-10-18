// Write a program to read and write data in to file
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	char name [100];
	int age;
	
	ofstream a;
	a.open("D:/Assignment/module 6/write.txt");
	cout <<endl<<"-------Writing in the file-------";
	cout <<endl <<"Enter Your name :- ";
	cin >> name;
	a <<endl<<name;
	cout <<"Enter Your Age :- ";
	cin >>age ;
	a <<endl<<age;
	a.close();
	
	ifstream b;
	b.open("D:/Assignment/module 6/write.txt");
	cout <<endl<<"-------Reading in the file-------";
	b >> name ;
	cout <<endl <<"Your name is :- "<<name;
	b >> age ;
	cout <<endl <<"Your name is :- "<<age;
	b.close();	
	
	return 0;
}
