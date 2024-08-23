#include<stdio.h>

int main()
{
    float amount,time,rate, ci;
    printf("Enter principal amount, time, rate :");
    scanf("%f%f%f",&amount,&time,&rate);
    ci=amount*(pow((1+rate/100),time));
    printf("Compound interest =%. 2f", ci);
    return 0;
}