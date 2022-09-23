// write a programme to read data from file.
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	FILE *A;
	int a = 2000;
	
		
	A = fopen ("C:/Users/TOPS/Desktop/Read_Write_data.txt","w");
	
	fprintf(A,"%d",a);
	
	fclose(A);
	
	A = fopen ("C:/Users/TOPS/Desktop/Read_Write_data.txt","r");
	
	fscanf(A,"%d",&a);
	
	printf("Your value is %d",a);
	
	fclose(A);
	
	return 0;
}
