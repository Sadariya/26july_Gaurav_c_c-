#include <iostream>
using namespace std;

int main()
{
    int n1, n2, hcf, temp, lcm;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    hcf = n1;
    temp = n2;
    
    while(hcf != temp)
    {
        if(hcf > temp)
        {
        	 hcf -= temp;
            cout << endl << "if contion ";
            cout <<endl << "hcf = " <<hcf;
            cout <<endl<< "temp = " << temp;
		}
        else
		{
			temp -= hcf;
            cout <<endl <<"\n Else condition ";
            cout <<endl << "hcf = " <<hcf;
            cout <<endl<< "temp = " << temp;
		}
    }

    lcm = (n1 * n2) / hcf;
    cout << lcm << " = (" << n1 << " * " << n2 << ") / " << hcf;

    cout << "LCM = " << lcm;
    return 0;
}


/*
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, max;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
        	cout <<endl << "n1 = " << n1;
        	cout <<endl << "n2 = " << n2;
            cout <<endl << "\nLCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    
    return 0;
}
*/


// GCD number
/*
Greatest Common Divisor
a = 45 = 3 * 3 * 5
b = 30 = 2 * 3 * 5

common factor = 3 , 5

so GCD of 45 and 30 is 3*5 = 15
*/
/* 
#include <iostream>
using namespace std;

int main ()
{
	int number1 = 45 ;
	int number2 = 30 ;
	int a,b;
	
	for (int a = 1; a < number2; a ++)
	{
		if (number1 % a == 0 && number2 % a == 0)
		{
			b = a;
		}
	}
	cout << "Your number is "<<b;
}

*/
