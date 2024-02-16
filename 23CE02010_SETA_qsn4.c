#include <stdio.h>
int i, n, j;
int primecheck(int k)
{
    int c=0;
    for(int d=2;d<=k;d++)
    {
        if(k%d==0)
        c++;
    }
    if(c>1) return(3);
    else return(4);
}
int main()
{
    printf("Enter a number \n");
    scanf("%d", &n);
    int primecounter=0;
    for (i = 2; i <= (n / 2); i++)
    {
        int c1 = primecheck(i);
        int c2 = primecheck(n-i);
        if(c1==4 && c2==4)
        {
            printf("Pair of prime numbers= %d , %d\n",i,n-i);
            primecounter++;
            
        }
    }
    if(primecounter==0)
    printf("Pair of primes can not be generated\n");
    return 0;
}