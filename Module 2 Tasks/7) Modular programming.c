#include <stdio.h>
int factorial(int);
int power(int, int);
void armstrong(int);
void fibonacci(int);

int main()
{
    int input,options;
    printf("Enter the input\n");
    scanf("%d",&input);
    printf("\nChoose one of the following functions\n1)factorial\n2)power\n3)armstrong\n4)fibonacci\n");
    scanf("%d",&options);
    switch(options)
    {
        case 1:
            printf("\nThe factorial of %d is %d\n",input,factorial(input));
            break;
        case 2:
            int input2;
            printf("\nEnter the power to be raised\n");
            scanf("%d",&input2);
            printf("\n%d to the power of %d is %d\n",input,input2,power(input,input2));
            break;
        case 3:
            armstrong(input);
            break;
        case 4:
            fibonacci(input);
            break;
    }
    
    return 0;
}

int factorial(int number)
{
    int output=1;
    while(number>1){
        output*=number;
        number--;
    }
    return output;
}

int power(int input1, int input2)
{
    int output=1;
    for(int i=0;i<input2;i++)
    {
        output*=input1;
    }
    return output;
}

void armstrong(int number)
{
    int num = number,output = 0;
    while(num>0){
        output += power(num%10,3);
        num/=10;
    }
    if(output == number){
        printf("%d is an Armstrong number", number);
    }
    else{
        printf("%d is not an Armstrong number", number);
    }
}

void fibonacci(int number){
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    while(number>0){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        number--;
    }
}