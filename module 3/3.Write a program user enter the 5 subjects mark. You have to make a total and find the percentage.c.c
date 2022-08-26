/*
Write a program user enter the 5 subjects mark.
You have to make a total and find the percentage.
a) percentage > 75 you have to print “Distinction”
b) percentage > 60 and percentage <= 75 you have to print “First class”
c) percentage >50 and percentage <= 60 you have to print “Second class”
d) percentage > 35 and percentage <= 50 you have to print “Pass class”
e) Otherwise print “Fail”
Each subject marks is suppose that 100 marks so total marks is 600.
*/
#include<stdio.h>
void main()
{
	printf(" @ Enter Your all subject marks to know your percentage and grade:-");
	float a,b,c,d,e,f;
	float P;
	//Marks:-
	printf("\nEnter mathematics marks:");
	scanf("%f",&a);
	printf("Enter gujrati marks:");
	scanf("%f",&b);
	printf("Enter hindi marks:");
	scanf("%f",&c);
	printf("Enter sanskrit marks:");
	scanf("%f",&d);
	printf("Enter english marks:");
	scanf("%f",&e);
	//Percentage :-
	P=((a+b+c+d+e)*100)/600;
	printf("Your percentage is:%f",P);
	//Grade:-
    if (P>75)
    printf("\nYou are Distinction.");
    else if ((P>60)&&(P<=75))	
    printf("\nYou are First class.");
    else if  ((P>50)&&(P<=60))
    printf("\nYou are Second class.");
    else if  ((P>35)&&(P<=50))
    printf("\nYou are Pass class.");
    else
    printf("\nYou are Fail.");
}
