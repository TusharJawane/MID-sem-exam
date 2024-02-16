#include<stdio.h>
int fact(int a)
{
    if(a==0)
    {return 1;}
    else
    return(a*fact(a-1));

}
void main()
{
    printf("Enter number\n");
    int n;
    scanf("%d",&n);
    int temp=n,dig,sum=0;
    while(temp>0)
    {
        dig=temp%10;
        temp/=10;
        int digfact=fact(dig);
        sum+=digfact;
    }
    if(sum==n)
    {printf("%d is a strong number\n",n);}
    else
    {printf("%d is not a strong number\n",n);}
}