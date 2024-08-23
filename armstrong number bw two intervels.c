#include <stdio.h>
#include<math.h>

int main()
{
    int limit,rem,dt,temp,i;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++){
    temp=i;
    dt=0;
    while(temp>0){
        rem=temp%10;
        dt=dt+pow(rem,3);
        temp=temp/10;
    }
     if(dt==i){
        printf("%d ",i);
    }
    }
    
    
    return 0;
}
