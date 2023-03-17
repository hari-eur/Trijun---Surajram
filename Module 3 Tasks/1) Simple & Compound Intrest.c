/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float simpleIntrest(int, float, int);
float compoundIntrest(int, float, int, int);
int main()
{
    int p,t,choice;
    float r,a;
    printf("Enter the principal amount\n");
    scanf("%d",&p);
    printf("Enter the intrest rate\n");
    scanf("%f",&r);
    printf("Enter the number of years\n");
    scanf("%d",&t);
    printf("What do you wish to do\n\t1) Simple Intrest\n\t2) Compound Intrest\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            a=simpleIntrest(p,r,t);
            printf("\nThe amount you would recieve for %d at a simple intrest rate of %.1f for the %d year is %.2f",p,r,t,a);
            break;
        
        case 2:
            int n;
            printf("Enter the number of times compounded per year\n");
            scanf("%d",&n);
            a=compoundIntrest(p,r,t,n);
            printf("\nThe amount you would recieve for %d at an intrest rate of %.1f compounded %d times for the %d year is %.2f",p,r,n,t,a);
            break;
    }
    return 0;
}

float simpleIntrest(int p, float r, int t)
{
    return p+(p*(r/100)*t);
}

float compoundIntrest(int p, float r, int t,int n)
{
    return p*pow((1+((r/100)/n)),n*t);
}
