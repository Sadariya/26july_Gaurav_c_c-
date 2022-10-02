// Write a program of find the simple interest using constructor with dynamic
// initialization. Make constructor like Interest (int principal, int year, int rate)
// Interest (int principal, int year, float rate = 2.5)

#include<iostream>
using namespace std;
class Sinterest
{
	private :
		
		float simple;
		
    public :
    
    Sinterest (int principal, int year, float rate)
    {
        
        simple = (principal * year * rate ) / 100;
		
		cout << "Your simple interest is "<<simple;
    }
};

int main ()
{
    int principal;
    int year;
    float rate;

    cout<<"Enter the amount of principal :- ";
    cin>>principal;
    cout<<"Entet the period of year :- ";
    cin>>year;
    cout<<"Enter the rate of interest :- ";
    cin>>rate;

    Sinterest e1 (principal , year , rate);
    
    return 0;
}

