#include <stdio.h>
int main() 
{
    int a,b,c=1;
    printf("Enter a base number: ");
    scanf("%d", &a);
    printf("Enter an exponent: ");
    scanf("%d", &b);
    while (b != 0) 
	{
        c*=a;
        --b;
    }
    printf("Answer = %d", c);
    return 0;
}
