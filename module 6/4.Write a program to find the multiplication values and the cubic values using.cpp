/*Write a program to find the multiplication values and the cubic values using
inline function.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class multiplication
{
    private :
        int a;
        int b;
    public:
        inline int multiplyvalue (int a,int b)
        {
            return a * b;
        }
        inline int cubicvalue (int c)
        {
            return pow (c,3);
        }
};

int main ()
{
    int a,b;
    int c;
    
    multiplication m1;
    
    cout <<endl << setw(50) << "**********To Multiply value*********";
    cout << endl << "1) Enter two Number to multiplication : ";
    cout << endl << "\tEnter first digit :- ";
    cin >> a;
    cout << "\tEnter second digit :- ";
    cin >> b;
    cout <<endl << "Ans:- Your multiplication value is " << m1.multiplyvalue (a,b)<<endl;
    
    cout <<endl << setw(50)<< "*********To Get cube value*********";
    cout << endl << "2) enter any value get cubic value of number ";
    cin >> c;
    cout << endl << "Ans:- Your cubic value is " << m1.cubicvalue (c);
    
    return 0;
}
