/*Leap years are a way to ensure that our calendar is on track.
There are roughly 365.24 days in a year,
which means that we need to add 1 extra day once every 4 years,
and a year with 1 extra day is known as a leap year.
We need to do this to ensure that we don't fall several hours behind each year.
Calculating leap years is easy, but there are a few special rules to keep in mind as
you do your calculations.
If you prefer to look at a calendar instead of doing the math, then this is also an option.*/

/*See if the number is evenly divisible by 4.
Dividing the year by 4 will result in a whole number with no remainder 
if the number is evenly divisible.
The number must be evenly divisible by 4! Otherwise, it is not a leap year.*/

/*Confirm the number isn't evenly divisible by 100.
If a year is evenly divisible by 4, but it is not evenly divisible 100, then it is a leap year.
If a year is divisible by both 4 and 100, then it might not be a leap year,
and you will have to perform 1 more calculation to check.*/

/*Check if the number is evenly divisible by 400 to confirm a leap year.
If a year is divisible by 100, but not 400, then it is not a leap year.
If a year is divisible by both 100 and 400, then it is a leap year.*/

#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter year to know that it is leap year or not:");
	scanf("%d",&a);
    b=a%4;
    c=a%100;
    d=a%400;
	if (((b<=0)&&(c>0))||((c<=0)&&(d<=0)))
        printf("\nThis is leap year");
    else
	    printf("\nThis is not leap year");    
}
