#include<stdio.h>
struct Queue
{
    int a[5];
    char b[100];
};
int main()
{
    struct Queue SSt;
    int c;
    for(c = 0; c < 5 ; c++)
    {
        printf("\nEnter Your number %d == ",c+1);
        scanf("%d",&SSt.a[c]);
        printf("Enter Your name %d == ",c+1);
        scanf("%s",&SSt.b);
    }
    for(c = 0; c < 5 ; c++)
    {
        printf("\n Your number is = %d. \t Your name is = %s.",SSt.a[c],SSt.b);
    }
}
