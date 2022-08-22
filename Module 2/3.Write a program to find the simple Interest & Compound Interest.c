#include<stdio.h>
int main()
{
	float P,R,N,CI,SI,Year;
	printf("Enter Your Principal Value:");
	scanf("%f",&P);
	printf("Enter Your Rate of interest:");
	scanf("%f",&R);
	printf("Enter Your time period:");
	scanf("%f",&N);
	//Simple Interest
	SI=(P*R*N)/100;
	printf("Your Simple interest is:%f",SI);
	//compound Interest
	if (N==1)
	{
	R=R/100;
	R+=1;
	Year=R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
	if (N==2)
	{
	R=R/100;
	R+=1;
	Year=R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==3)
	{
	R=R/100;
	R+=1;
	Year=R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==4)
	{
	R=R/100;
	R+=1;
	Year=R*R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==5)
	{
	R=R/100;
	R+=1;
	Year=R*R*R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==6)
	{
	R=R/100;
	R+=1;
	Year=R*R*R*R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==7)
	{
	R=R/100;
	R+=1;
	Year=R*R*R*R*R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==8)
	{
	R=R/100;
	R+=1;
	Year=R*R*R*R*R*R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==9)
	{
	R=R/100;
	R+=1;
	Year=R*R*R*R*R*R*R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
    if (N==10)
	{
	R=R/100;
	R+=1;
	Year=R*R*R*R*R*R*R*R*R*R;
	CI=P*Year;
	CI-=P;
	printf("\nYour Compound interest is:%f",CI);
    }
}
