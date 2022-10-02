/*
Define a class to represent lecture details. Include the following members and
the program should handle at least details of 5 lecturer.
Data members:
a) Name of the lecturer
b) Name of the subject
c) Name of course
d) Number of lecturers
Data functions:
a) To assign initial values
b) To add a lecture details
c) To display name and lecture details 
*/

#include<iostream>
using namespace std;
class lecture
{
	private:
		string Lecturer;
		string subject;
		string course;
		int lecturers;
		int a;
	
	public:
		
		int assign ()
		{
			
			cout<<"Enter the number of lecturer :- ";
			cin>>lecturers;
			
			for (a = 0; a < lecturers; a++)
			{
			cout<<"Enter the name of lecturer :- ";
			cin>>Lecturer;
			cout<<"Enter the name of subject :- ";
			cin>>subject;
			cout<<"Enter the name of course :- ";
			cin>>course;	
			}
			
		return 0;	
		}
		
		int show ()
		{
			int b;
			
			cout<<"Enter which lecturer detail you want to see :- ";
			cout<<".......Press 1,2,3,4,5.......";
			cin>>b;
			
			for (a = b; a <= b; a++)
			{
			cout<<endl<<"\tName of lecturer is :- "<<Lecturer;
			cout<<endl<<"\tName of subject is :- "<<subject;
			cout<<endl<<"\tName of course is :- "<<course;
			}
		}
};
int main ()
{
	lecture obj;
	obj.assign();
	obj.show();
	
	return 0;
}

