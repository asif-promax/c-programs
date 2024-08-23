#include <stdio.h>

int prime(int a)
{


    for(int i=2; i<a/2; i++){
        if(a%i != 0){
            continue;
        }
        else{
            return 1;
        }
    }
    return 0;

}
int main()
{
    int a,b,res=0;
    printf("enter the intervels:");
    scanf("%d%d",&a,&b);


    for(int i=a;i<=b;i++)
    {
        res=prime(i);
        if(res==0)
        {
            printf("%d\n",i);
        }
    }
}