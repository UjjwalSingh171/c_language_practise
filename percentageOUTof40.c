#include<stdio.h>
int main()
{
    float m1,m2,m3,m4;
    printf("Enter the marks of Maths:%f",m1);
    scanf("%f",&m1);
    printf("Enter the marks of  Science:%f",m2);
    scanf("%f",&m2);
    printf("Enter the marks of English:%f",m3);
    scanf("%f",&m3);
    printf("Enter the marks of SST:%f",m4);
    scanf("%f",&m4);
    float per = (m1+m2+m3+m4)/160*100;
    printf("The percentage of the Child is %f",per);
    return 0;
}