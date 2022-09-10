#include<stdio.h>
#include<string.h>
int Enterdata ()
{
	char A[10];
	char B[10];
	printf("\n\t* Enter 1st String name :- ");
	scanf("%s",&A);
	strcpy(B,A);
}
int printdata ()
{
	char B[10];
	printf("\n\t ** String 2nd is copied from 1st string. **\n\n");
	printf("\t --> 2nd String name is %s",B);	
}
int main()
{
	Enterdata ();
	printdata ();
}
/*
#include<stdio.h>
#include<string.h>
void main()
{
	char A[10];
	char B[10];
	printf("Enter 1st String name :- ");
	scanf("%s",&A);
	strcpy(B,A);
	printf("\nString 2nd is copied from 1st string.\n");
	printf("2nd String name is %s",B);
}
*/
