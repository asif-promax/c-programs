#include<stdio.h>

int main()
{
    int l,w;
    printf("Enter length and width:");
    scanf("%d%d",&l,&w);
    printf("Area of rectangle = %d\n",l*w);
    printf("perimeter of rectangle =%d", 2*(l+w));
    return 0;
}