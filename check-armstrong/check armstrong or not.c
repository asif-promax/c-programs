/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int input,rem,dt=0,temp;
    printf("Enter a number to check armstrong or not:");
    scanf("%d",&input);
    temp=input;
    while(input>0){
        rem=input%10;
        dt=dt+pow(rem,3);
        input=input/10;
    }
    if(dt==temp){
        printf("%d is armstrong number",temp);
    }
    else{
        printf("%d is not armstrong number",temp);
    }
    
    return 0;
}
