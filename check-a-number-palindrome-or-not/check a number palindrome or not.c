
#include <stdio.h>

int main()
{
    int input,temp,reverce=0,rem;
    printf("Enter a number:");
    scanf("%d",&input);
    temp=input;
    while(input>0){
        rem=input%10;
        reverce=reverce*10+rem;
        input=input/10;
    }
    if(temp==reverce){
        printf("%d is palindrome",temp);
    }else{
        printf("%d is not palindrome",temp);
    }

    return 0;
}
