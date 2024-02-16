#include<stdio.h>
int main()
{
    printf("Enter a,b,c for equation ax^2+bx+c=0 \n");
    float a,b,c,d,root1,root2;
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(a==0)
    {
        printf("Given coefficients do not form a quadratic equation\n");
        return 0;
    }
    else if(d<0)
    {
        printf("Imaginary roots\n");
        return 0;
    }
    else if(d==0)
    {
        root1=(0-b)/(2*a);
        printf("Single root of equation is %f\n",root1);
        return 0;
    }
    else
    {
        root1=(d-b)/(2*a);
        root1=(d+b)/(2*a);
        printf("roots of equation are %f\t%f",root1,root2);
    }
    return 0;

}