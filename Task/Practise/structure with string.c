#include<stdio.h>
struct number
{
    int a;
    char b[20];
}FFU;
int main()
{
	int c;
    for(c = 0; c < 5 ; c++)
    {
    printf("\n\tEnter your number :- ");
    scanf("%d",&FFU.a);
    printf("\tEnter your name :- ");
    scanf("%s",&FFU.b);
	}
    
    for(c = 0; c < 5 ; c++)
    {
    printf("\n\t-->Your number is :- %d.",FFU.a);
    printf("\n\t-->Your name is :- %s.",FFU.b);
	}
}
