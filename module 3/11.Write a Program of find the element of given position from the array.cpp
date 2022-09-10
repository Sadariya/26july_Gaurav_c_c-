#include<stdio.h>
int main()
{
    int a[20];
    int b,c,d;
    printf("Enter how many number you want to print :");
    scanf("%d",&b);
        for(c=0; c<b; c++)
        {
            printf("Enter element number a[%d] = ",c);
            scanf("%d",&a[c]);
        }
    printf("Enter the element number = ");
    scanf("%d",&d);
        for(c=0; c<b; c++)
        {
            if (a[c]==d)
            {
                printf("Your element index is %d .",c+1);
            }
        }
}
// programme using while loop 1d array is used.
/*
#include<stdio.h>
int main()
{
    int a[20];
    int c=0,e=0;
    while (c<4)
    {
        printf("Enter number of matrix a[%d] : ",c);
        scanf("%d",&a[c]);
        c++;
    }
printf("\n * Enter number of element you want to know :- ");
scanf("%d",&e);
    c=0;
    while (c<4)
    {
        if (a[c] == e)
        {
			printf(" %d",c+1);  	
		}
        c++;
        printf("\n");
    } 
}
*/

/*
// programme using while loop 2d array is used.
#include<stdio.h>
int main()
{
    int a[20][20];
    int b[20][20];
    int c=0,d=0,e=0;
    while (c<2)
    {
        while ((d<2)&&(c<2))
        {
            printf("Enter number of matrix a[%d][%d] : ",c,d);
            scanf("%d",&a[c][d]);
            d++;
        }
        d=0;
        c++;
    }
printf("\n * Enter number of element you want to know :- ");
scanf("%d",&e);
    c=0;
    while (c<5)
    {
        while ((d<5)&&(c<5))
        {
            if (a[c][d] == e)
            { 
				printf("Your Index number is a[%d][%d] .",c,d); 				
			}
            d++;
        }
        d=0;
        c++;
        printf("\n");
    } 
}
*/
