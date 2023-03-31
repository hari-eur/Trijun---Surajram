#include<stdio.h>
void main()
{
    long long int a=1,b=1,c=2;
    for(int i=1;i<75;i++)
    {
        printf("%lli\n",c);
        a=b;
        b=c;
        c=a+b;
    }
}