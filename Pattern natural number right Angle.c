/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int size,i,j,s=0;
        printf("enter size: ");
        scanf("%d",&size);
        for(i=1;i<=size;i++){
            for(j=1;j<=i;j++){
                s+=1;
                printf("%d ",s);
            }
            printf("\n");
        }
            

 return 0;
}
