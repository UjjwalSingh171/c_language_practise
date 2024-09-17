#include<stdio.h>    
int main()
{
    int a,b,q,r;                                //Divident=(Divisor * Quotient) + Remainder
    printf("Enter the First number:");
    scanf("%d",&a);
    printf("Enter the Second number:");
    scanf("%d",&b);
    q = a/b;
    r = a - ( b * q );
    printf("The remainder of a/b :%d",r);
    return 0;
} 