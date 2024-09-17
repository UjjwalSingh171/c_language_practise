#include<stdio.h>
int main()
{
    float r,v;
    printf("Enter the radius of sphere:%f",r);
    scanf("%f",&r);
    v = 4 * 3.1415 * r * r * r / 3;
    printf("The volume of Given Sphere is :%f",v);
    return 0;
}