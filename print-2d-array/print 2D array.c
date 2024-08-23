
#include <stdio.h>

int main()
{
    int row,clm,i,j;
    printf("enter the number of raw:");
    scanf("%d",&row);
    printf("enter the number of columns:");
    scanf("%d",&clm);
    int arr[row][clm];
    printf("enter numbers:");
    for(i=0;i<row;i++){
        for(j=0;j<clm;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("elementns:\n");
    for(i=0;i<row;i++){
        for(j=0;j<clm;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}