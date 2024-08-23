#include<stdio.h>

int main()
{
    float sum=0;
    int i,n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("average =%.2f", sum/n);
    return 0;
}