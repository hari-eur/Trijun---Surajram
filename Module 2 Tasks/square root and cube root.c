/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float i,n;
   scanf("%f",&n);
   for(i=0.01;i*i<=n;i+=0.01);
   printf("Square root of %f is %.2f\n",n,i);
   for(i=0.01;i*i*i<=n;i+=0.01);
   printf("Cube root of %f is %.1f",n,i);
}
