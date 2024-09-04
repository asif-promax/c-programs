#include<stdio.h>

int main()
{
    int i,j,n,k;
    printf("Enter number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
        if(k==1||k==i){
            printf("* ");
         }else{
             printf("  ");
         }
        }
        printf("\n");
    }
    for(i = 1; i < n; i++){
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        for(k = 0; k < (n - i); k++) {
            if (k == 0 || k == (n - i - 1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}