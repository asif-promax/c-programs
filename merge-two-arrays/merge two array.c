/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
 int i,n1,n2,n3,temp;
    printf("Enter size of first array:");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter elements \n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array:");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter elements \n");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    n3=n1+n2;
    int arr3[n3];
    for(i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    for(i=0;i<n2;i++){
        arr3[n1+i]=arr2[i];
    }
    for(i=0;i<n3;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}