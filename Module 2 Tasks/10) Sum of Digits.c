#include <stdio.h>
void reverse(int, int *);
int main()
{
    
    int num,digit,rev=0,output=0,flag=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    reverse(num,&rev);
    printf("Enter the digit\n");
    scanf("%d",&digit);
    
    while(rev>0){
        if(rev%10 == digit){
            flag=1;
            break;
        }
        else{
            output+=rev%10;
            rev/=10;
        }
    }
    if(flag!=1){
        printf("There is no %d in the number %d, therefore the sum of the all the digits is %d",digit,num,output);
    }
    else{
        printf("The sum of digit till reaching the digit %d of the number %d is %d\n",digit,num,output);
    }
}

void reverse(int num,int *rev){
    while(num>0){
        *rev = *rev*10 + num%10;
        num/=10;
    }
}
