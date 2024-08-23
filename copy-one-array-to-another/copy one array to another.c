/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter size of first array:");
    scanf("%d",&n);
    int arr1[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];
    }
    printf("second array =");
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
