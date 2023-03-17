#include <stdio.h>
#include <math.h>
#include <string.h>
#define size 8
int ascii(char);
void binary(int, int[]);
void hexadecimal(int[]);
int main()
{
    char input[20];
    int result[size];
    printf("Enter a character\n");
    scanf("%s",input);
    printf("The hexadecimal value for the string %s is ", input);
    for(int i=0;i<strlen(input);i++)
    {
        binary(ascii(input[i]),result);
        hexadecimal(result);
    }
    return 0;
}
int ascii(char input)
{
    int output = input;
    return output;
}
void binary(int input,int result[])
{
    int k=size-1;
    while(k>=0)
    {
        if(input>0)
        {
            result[k]=input%2;
            input/=2;
        }
        else
        {
            result[k]=0;
        }
        k--;
    }
}
void hexadecimal(int input[])
{
    for(int i=0;i<size;i+=4)
    {
        int flag=3,output=0,j=i;
        while(flag>=0)
        {
            output+=input[j]*pow(2,flag);
            j++;
            flag--;
        }
        if(output<9)
        {
            printf("%d",output);
        }
        else
        {
            switch(output)
            {
                case 10:
                    printf("A");
                    break;
                case 11:
                    printf("B");
                    break;
                case 12:
                    printf("C");
                    break;
                case 13:
                    printf("D");
                    break;
                case 14:
                    printf("E");
                    break;
                case 15:
                    printf("F");
                    break;
            }
        }
    }
}
