/*TO FIND SIMPLE AND COMPOUND INTEREST
Amount=Principal(P)+Simple Interesrt(SI)
Simple Interest Formula is 
SI=(P*R*T)/100 Where as,
P= Principal
R=Rate of Interest
T=Time period 
Compound Interst Formula is 
CI=P*(1+R)n*/
#include<math.h>
#include<stdio.h>
int main()
{
    float P,R,N,CI,SI,B,RESULT;
    printf("Enter Your Principal Amount:");
    scanf("%f",&P);
    printf("Enter Your Rate of interest:");
    scanf("%f",&R);
    printf("Enter Your Time period(in Years):");
    scanf("%f",&N);
    SI=(P*R*N)/100;
    printf("Your simple interest is:%f",SI);
    B=(1+(R/100));
	RESULT=pow(B,N);
	CI=P*RESULT;
	CI-=P;
    printf("\nYour compound interest is:%f",CI);
}
