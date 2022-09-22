#include<iostream>
using namespace std;

int a[10];
int b,d;
int c[10];

int task ()
{
	for (b = 0; b < 6; b++)
	{
		if (c[0] == 0 && a[4] == 0){
		cout<<"Enter the number "<<b<<" :- ";
		cin>> a[b];
		}
		if (a[4] != 0){
			b = 0;
		}
		if (a[4] != 0 && a[0] != 0){
		b = d;
		cout<<"Enter the second number "<<b<<" :- ";
		cin>> c[b];
		b = d+1;
		d = b;
		}
		if ( c[5] != 0 )
		{
			b=13;
		}
	}
}

int sumarray ()
{
	b=0;
	for (b = 0; b < 5; b++)
	{
		cout<<endl<<"Your addition of two array element numbers are == "<<a[b]+c[b];
	}
}
int main ()
{
	task ();
	sumarray ();
	
	return 0;
}
