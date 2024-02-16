#include<stdio.h>
void main()
{
    printf("Enter radius of sphere\n");
    float r;
    scanf("%f", &r);
    float pi=3.14;
    float area=4*pi*r*r;
    float vol= (area*r)/3;
    printf("Volume is %0.02f Surface area is %0.02f",vol,area);
}