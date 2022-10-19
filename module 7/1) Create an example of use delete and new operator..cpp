// 1) Create an example of use delete and new operator.

#include <iostream>
using namespace std;

class garden
{
	private :
		int Public;
		int child;
	public :
		garden ()
		{
			cout << "Enter childs in the garden :- ";
			cin >> child;
			cout << "Enter public in the garden :- ";
			cin >> Public;
		}
		void show ()
		{
			cout <<endl << "Total child :- " << child;
			cout <<endl <<"Total Public :- " <<Public;
		}
};
int main ()
{
	cout <<endl << "--------Enter the information of garden--------"<<endl;
	garden *ptr = new garden ();  // new operator use
	cout <<endl << "--------Show the information of garden--------"; 
	ptr -> show ();
	
	delete ptr; // delete operator use for relese memory
	
	return 0;
}
