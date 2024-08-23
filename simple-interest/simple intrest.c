#include<stdio.h>

int main()
{
    float i,p,n,r;
    printf("Enter principal amount :");
    scanf("%f",&p);
    printf("Enter time period (year):");
    scanf("%f",&n);
    printf("Enter Rate of interest:");
    scanf("%f",&r);
    i=p*n*r;
    printf("Simple interest of %.2f=%.2f",p,i);
    return 0;
}