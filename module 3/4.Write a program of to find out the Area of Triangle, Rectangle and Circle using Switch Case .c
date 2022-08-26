/*
Write a program of to find out the Area of Triangle,
Rectangle and Circle using Switch Case .(Must Be Menu Driven)
Area of Triangle A=1/2*base*higth
Area of Rectangular A=length*breadth
Area of circle A=pi*r*r
*/
#include<stdio.h>
#define pi 3.14
void
 main()
{
    int r,l,b,bs,h,S;
    printf("\nselection 1= Area of triangle.");
    printf("\nselection 2= Area of Rectangular.");
    printf("\nselection 3= Area of cicle.");
    printf("\nEnter selection to know Area of triangle,rectangular or cicle:");
    scanf("%d",&S);
    switch (S)
    {
    case 1:
        printf("\n@ Enter the base of triangle:");
        scanf("%d",&bs);
        printf("Enter the hight of triangle:");
        scanf("%d",&h);
        printf("\n-->Area of triangle is:%f",0.5*bs*h);
        break;
    case 2:
        printf("\n@ Enter length of Rectangular:");
        scanf("%d",&l);
        printf("Enter breadth of Rectangular:");
        scanf("%d",&b);
        printf("\n-->Area of Rectangular is:%d",l*b);
        break;
    case 3:
        printf("\n@ Enter the radious of circle:");
        scanf("%d",&r);
        printf("\n-->Area of circle is:%f",(pi*r*r));
        break;
    default:
        printf("Enter valid selection........");
        break;
    }
}
