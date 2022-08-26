/*
A prime number is a whole number greater than 1 whose only factors are 1 and itself.
A factor is a whole number that can be divided evenly into another number.
The prime numbers are 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97.
Numbers that have more than two factors are called composite numbers.
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\nEnter number to know it is prime or not:");
    scanf("%d",&a);
    if (a>7)
    {
     b=a%2;
     c=a%3;
     d=a%5;
     e=a%7;
     	if((b<=0)||(c<=0)||(d<=0)||(e<=0))
			printf("\nit is not prime number");
    	else
			printf("\nit is prime number");
    }
    else
    {
     	if ((a==2)||(a==3)||(a==5)||(a==7))
			printf ("\nit is prime number.");
    	else
			printf ("\nit is not prime number.");
    }
    return 0;
}
