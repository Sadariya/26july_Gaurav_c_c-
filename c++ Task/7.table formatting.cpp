#include <iostream>
using namespace std;

int main ()
{
	int number[5];
	char name [20];
	int sub1[5],sub2[5],sub3[5];
	int total[5];
	float per[5];
	int a,b;
	
	for (a = 0; a < 3; a++)
	{
		cout <<endl << "\n\t\tEnter student Details of "<<a;
		cout <<endl << "Enter the number :- ";
		cin >> number[a];
		cout<< "Enter the name :- ";
		cin >> name[a];
		cout << "Enter the sub1 marks :- ";
		cin >> sub1[a];
		cout << "Enter the sub2 marks :- ";
		cin >> sub2[a];
		cout << "Enter the sub3 marks :- ";
		cin >> sub3[a];
	}
	cout <<endl << "\n\t\t Details are below." << endl;
	cout <<endl << "| No.| Name | Sub1 | Sub2 | Sub3 | Total | Per | Result | "<<endl;
	for (a = 0; a < 3; a++)
	{
		
		total [a] = sub1[a] + sub2[a] + sub3[a];  
		per [a] = (total [a] * 100 ) / 300;		
		cout <<"| " << number[a] <<"  | " << name[a]<<"    | "  <<sub1[a]<<"   | " <<sub2[a]<<"   | " <<sub3[a]<<"   | " <<total[a]<<"   | " <<per[a]<<"  | ";
		if (per[a] > 33.33)
		{
			cout << "Pass"<<endl;
		}
		else 
		cout << "Fail"<<endl;
		
	}
	
}
