#include<iostream>
using namespace std;
int main ()
{
	int a;
	int b;
	int c;
	
	for (a=4; a>0; a--)
	{
		for (b=0; b<a; b++){
			cout<<" ";	
		}
		for (b=5; b>a; b--){
			cout<<"* ";	
		}
		
		cout<<"\n";
	}
	
	for (a=5; a>0; a--)
	{
		for (b=5; b>a; b--){
			cout<<" ";	
		}
		for (b=0; b<a; b++){
			cout<<"* ";	
		}
		
		cout<<"\n";
	}

	return 0;
}
