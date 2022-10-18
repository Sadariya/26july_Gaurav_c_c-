/*
Assume a class cricketer is declared. Declare a derived class player from
cricketer .Data member of player. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include <iostream>
using namespace std;

class cricketer    // Base class or parent class
{
	
	public:	
		char player [10];
		char performance [20];
		int runs;
		int match;
		void inputdata ()
		{
			cout << "\n\t.........Enter Player Details........."<<endl;
			cout << "Enter the player name :- ";
			cin >> player;
			cout << "Enter the total runs :- " ;
			cin >> runs;
//			cout << "performance of player :- ";
//			cin >> performance;
			cout << "How many match is played :- ";
			cin >> match;
			
		}
	
};
// Member functions input data, calculate average runs, Display
// data. (Single Inheritance)	

class batsman : public cricketer // derived class : base class 
{
	public :

		int averageruns ()	
		{
			return runs/match;	
		}
		int displaydata ()
		{
			int aver;
			cout << "\n\t\t.........Player Details........."<<endl;
			cout << endl << "\t\t|Player name is " << player ;
			cout << endl << "\t\t|Total runs :- " << runs;
			cout << endl << "\t\t|How many match is played :- "<< match;
			aver = averageruns ();
			cout << endl << "\t\t|Average runs is "<< aver;
			if (aver < 45)
				cout <<endl << "\t\t|Performance of player is good.";
			else if (aver < 80)
				cout <<endl << "\t\t|Performance of player is nice.";
			else if (aver > 80)
				cout << endl << "\t\t|Performance of player is best.";
			cout << endl <<endl;
		}
};

int main ()
{
	batsman b1,b2,b3;
	b1.inputdata();
	b2.inputdata();
	b3.inputdata();

	b1.averageruns();
	b2.averageruns();
	b3.averageruns();

	b1.displaydata();
	b2.displaydata();
	b3.displaydata();

	return 0;
}
