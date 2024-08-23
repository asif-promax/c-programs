#include<stdio.h>

int main()
{
    int i,n,j,temp;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    
    for(i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            printf("%d", arr[i]);
    }
    }
    return 0;
}