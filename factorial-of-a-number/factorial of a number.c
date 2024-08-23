/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,factorial=1;
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        factorial*=i;
    }
    printf("%d ",factorial);

    return 0;
}
