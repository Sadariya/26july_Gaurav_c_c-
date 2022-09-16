// Write a program of structure for five employee that provides the following information print and
// display empno, empname, address and age

#include<stdio.h>
struct employee
{
	int a,b;
	char c[100],d[100];
}in[20];
int main ()
{
	int e;
	for (e=0; e<5; e++)
	{
printf("\n\t**Enter the %d employee details.**\n",e+1);
		printf("Enter the employee [%d] no :- ",e+1);
		scanf("%d",&in[e].a);
		printf("Enter the employee [%d] age:- ",e+1);
		scanf("%d",&in[e].b);
		printf("Enter the employee [%d] name :- ",e+1);
		scanf("%s",&in[e].c);
		printf("Enter the employee [%d] address :- ",e+1);
		scanf("%s",&in[e].d);
	}
	for (e=0; e<5; e++)
	{
printf("\n\t** %d employee details are below.**",e+1);
		printf("\nEnter the employee [%d] no is %d",e+1,in[e].a);
		printf("\nEnter the employee [%d] age is %d",e+1,in[e].b);
		printf("\nEnter the employee [%d] name is %s",e+1,in[e].c);
		printf("\nEnter the employee [%d] address is %s",e+1,in[e].d);
	}
}
