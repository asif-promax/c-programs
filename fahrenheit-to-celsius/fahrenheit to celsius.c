/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float f,cel;
    printf("enter the fahrenheit:");
    scanf("%f",&f);
    cel=(f-32)*5/9;
    printf("%.2ff = %.2fc",f,cel);
    
    return 0;
}