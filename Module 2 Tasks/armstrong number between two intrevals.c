#include <stdio.h>
int size(int input);
int power(int, int);
void armstrong(int,int);

int main()
{
    int intreval1,intreval2;
    printf("Enter the value of the two intrevals");
    scanf("%d%d",&intreval1,&intreval2);
    for(int i=intreval1;i<=intreval2;i++)
    {
        int s = size(i);
        armstrong(i,s);
    }
}

int size(int input){
    int s=0;
    while(input>0)
    {
        input/=10;
        s++;
    }
    return s;
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

void armstrong(int number,int size)
{
    int num = number,output = 0;
    while(num>0){
        output += power(num%10,size);
        num/=10;
    }
    if(output == number){
        printf("%d is an Armstrong number\n", number);
    }
    else{
        printf("%d is not an Armstrong number\n", number);
    }
}
