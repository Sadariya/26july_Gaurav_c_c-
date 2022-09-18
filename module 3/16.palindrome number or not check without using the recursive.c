// palindrome number or not check without using the recursive function.
/*
#include<stdio.h>
int main ()
{
	int a,b,c=0,d=1,e=0;
	printf("\n\t**Enter number to check is palindrome or not.**\n");
	printf("\n\tEnter the number :- ");
	scanf("%d",&a);
	e=a;
	for (b=1; b<10; b++)
	{
		if (a>0)
		{
			d=c+a%10;
			c=(d*10);
			a=a/10;
		}
	}
	if (d == e)
		printf("\n\t--> This is palindrome number.");
	else 
		printf("\n\t-->This is not palindrome number.");
}
*/

// palindrome number or not check with using the recursive function.
#include<stdio.h>
#include<math.h>
int reverse(int number)
{
	int c;
    int digit = log10(number);
    if(number == 0)
        return 0;
    return ((number%10 * pow(10, digit)) + reverse(number/10));
}
int main ()
{
	int digit ;
	int number;
	printf("Enter the number :- ");
	scanf("%d",&number);
	if (number == reverse (number))
		printf("\n%d is palindrome number.",number);
	else
		printf("\n%d is not a palindrome number.",number);
	return 0;
}
