#include<stdio.h>
void main(){
   int i, num, range, count;
   printf("Enter the range: ");
   scanf("%d", &range);
   printf("The prime numbers in between the range 1 to %d:",range);
   for(num = 1;num<=range;num++){
      count = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            count++;
         break;
      }
   }
   if(count==0 && num!= 1)
      printf("%d ",num);
   }
}