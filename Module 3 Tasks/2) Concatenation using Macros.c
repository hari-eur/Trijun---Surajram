#include<stdio.h>
#include<string.h>
#define concat(x,y,len) (x*len)+y

int main()
{
    int input1,input2,n,len=1;
    printf("Enter the first integer\n");
    scanf("%d",&input1);
    printf("Enter the second integer\n");
    scanf("%d",&input2);
    n=input2;
    while(n>0){
        n/=10;
        len*=10;
    }
    printf("The concatenated result is %d",concat(input1,input2,len));
    return 0;
}
