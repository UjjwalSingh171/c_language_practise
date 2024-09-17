#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the Principal Amount:%f",p);
    scanf("%f",&p);
    printf("Enter the Rate of Interest:%f",r);
    scanf("%f",&r);
    printf("Enter the Time:%f",t);
    scanf("%f",&t);
    si = p*r*t/100;
    printf("The Simple Interest is %f",si);
    return 0;
}