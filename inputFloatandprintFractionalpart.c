#include<stdio.h>    
int main()
{
    float x,y;
    printf("Enter the number :");
    scanf("%f",&x);
    y = x - (int)x;
    printf("The Fractional part is %f",y);
    return 0;
} 