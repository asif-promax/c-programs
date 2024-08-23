/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct complex{
    int rl,img;
}c1,c2,res;

int main()
{
    printf("Enter 1st complex numbers(real and Imaginary):");
    scanf("%d%d",&c1.rl,&c1.img);
    printf("Enter 2nd complex numbers(real and Imaginary):");
    scanf("%d%d",&c2.rl,&c2.img);
    res.rl=c1.rl+c2.rl;
    res.img=c1.img+c2.img;
    printf("complex numbers 1:%d+%d\t",c1.rl,c1.img);
    printf("%d+%d",c2.rl,c2.img);
    printf("\nsum=%d+%di",res.rl,res.img);
    return 0;
}
