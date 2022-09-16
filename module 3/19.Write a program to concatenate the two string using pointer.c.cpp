// Write a program to concatenate the two string using pointer.
#include<stdio.h>
int main()
{
	char *a[20];
	char *b[20];
	int c; 
printf("\n\t**Enter string name**\n");

	printf("Enter the 1st string :- ");
	scanf("%s",&*a);
	printf("Enter the 2nd string :- ");
	scanf("%s",&*b);
printf("\n\t**Your concatenate value is below** \n");
	for (c=0; c<2; c++)
	{
		printf("%s",a);
		*a=*b;	
	}
}
