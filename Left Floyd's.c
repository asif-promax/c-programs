/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int row=5,i,j,k;
    for(i=0;i<row;i++){
        for(j=i;j<row;j++){
            printf(" ");
            
        }
        for(k=0;k<=i;k++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}