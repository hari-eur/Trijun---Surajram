#include <stdio.h>
void reverse(int, int *);
int main()
{
    
    int num,digit,rev=0,output=0,flag=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    
    printf("Value of input before call by value: %d\n",num);
    printf("Value of output before call by reference: %d\n",rev);
    
    printf("\nReversing the number\n");
    reverse(num,&rev);
    
    printf("\n");
    printf("Value of input after call by value: %d\n",num);
    printf("Value of output after call by reference: %d\n",rev);
    
}

void reverse(int num,int *rev){
    while(num>0){
        *rev = *rev*10 + num%10;
        num/=10;
    }
    printf("Value of input inside the function: %d\n",num);
    printf("Value of output inside the function: %d\n",*rev);
}
