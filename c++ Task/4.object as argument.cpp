// object as argument :- 

#include <iostream>
using namespace std;

class practise 
{
	private :
		int a;
		int b;
		
	public :	
		int x;
		int y;
			
		int assign ()
		{
			a = x;
			b = y;
			
			cout << "Enter two number ";
			cin >> x >> y ;
			
			return 0;
		}
	
	int object (practise ,practise);
};

practise :: object (practise p1, practise p2)
{
	cout << endl << p1.x << " + " <<p2.x  << " = " << p1.x + p2.x;
	cout << endl << p1.y << " - " <<p2.y  << " = " << p1.y - p2.y;
	cout << endl << p1.x << " * " <<p2.x  << " = " << p1.x * p2.x;
	cout << endl << p1.y << " % " <<p2.y  << " = " << p1.y % p2.y;
	cout << endl << p1.x << " / " <<p1.y  << " = " << (float)p1.x / (float)p1.y;
	

	return 0;
}

int main ()
{
	practise pp1,pp2,pp3;
	
	pp1.assign();
	pp2.assign();
	pp3.object(pp1,pp2);
	
	return 0;
}


