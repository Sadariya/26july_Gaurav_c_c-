// write a programme to read integer data from file.
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	FILE *A;
	int a ;
	
	A = fopen ("C:/Users/TOPS/Desktop/Read_Write_data.txt","r");
	
	fscanf(A,"%d",&a);
	printf("Your number is :- %d",a);	
	
	fclose (A);
	
	return 0;
}

// Write a program to read character string using gets data from the file.
/*
#include <stdio.h>
int main ()
{
	FILE *A;
	char B [50];
	int c;
	
	A = fopen ("D:/Assignment/module 4/new_text_file.txt","r");
	
	for (c=0; c<2; c++)
	{
		fgets(B,50,A);
		printf("\n%s",B);		
	}
	
	fclose (A);
}
*/
