#include<stdio.h>
int power(int,int);
int main()
{
    int terms,input,output=0;
    printf("Enter the number of terms\n");
    scanf("%d",&terms);
    int values[terms];
    for(int i=terms-1;i>=0;i--)
    {
        if(i==0){
            printf("\nEnter the value of constant\n");
        }
        else{
            printf("\nEnter the value of x^%d\n",i);
        }
        scanf("%d",&values[i]);
    }
    printf("\nEnter the value of x\n");
    scanf("%d",&input);
    printf("\nThe Polynomial equation is ");
    for(int i=terms-1;i>=0;i--){
        if(i==0)
        {
            printf("[%d]",values[i]);
        }
        else
        {
            printf("[%dx^%d]+",values[i],i);
        }
        output+=values[i]*power(input,i);
    }
    printf("\nThe value of the polynomial equation after substituting the value of x as %d is %d\n",input,output);
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
