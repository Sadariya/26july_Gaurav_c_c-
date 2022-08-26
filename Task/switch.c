#include<stdio.h>
int main()
{
    int a;
	int ch,ch1;
	printf("\n press 1=Apple thickshack \n press 2=kit kat menu");
    printf("\nEnter your choise:"); 
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Apple thickshake");
        break;
    case 2:
    	printf("\n21=kity kity thick shack \n 22=kit kat candy");
        printf("\n\nenter your kit kat choise:");
        scanf("%d",&ch1);
		switch (ch1)
             case 21:
                printf("kity kity thick shack");
                break;
             case 22:
                printf("kit kat candy");
                break;
        break;    
    default:
        printf("Enter valid char.......");
        break;
    }
}
