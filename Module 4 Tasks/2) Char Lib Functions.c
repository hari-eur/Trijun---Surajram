#include <stdio.h>
#include <string.h>
#include <ctype.h>
void printNewLine(char []);
void removeWhiteSpace(char []);
int main()
{
    char input[20],inputCopy[20];
    static int alphaCount,numCount,lwrCount,uprCount,punctCount;
    printf("Enter the string\n");
    scanf("%[^\n]s",input);
    for(int i=0;i<strlen(input);i++)
    {
        inputCopy[i]=input[i];
    }
    for(int i=0;i<strlen(input);i++)
    {
        if(isalpha(input[i]))
        {
            alphaCount++;
            if(islower(input[i]))
            {
                lwrCount++;
            }
            else
            {
                uprCount++;
                input[i]=tolower(input[i]);
            }
        }
        else if(isdigit(input[i]))
        {
            numCount++;
        }
        else if(ispunct(input[i]))
        {
            punctCount++;
        }
        
    }
    printf("The string %s contains %d alphabets and %d digits and %d puntuations\n",inputCopy, alphaCount, numCount, punctCount);
    printf("The string %s contains %d UpperCase Characters and %d LowerCase Character\n",inputCopy, uprCount, lwrCount);
    printf("After converting all the UpperCase characters to LowerCase, the output is %s\n",input);
    printf("Printing each word in a new line\n");
    printNewLine(inputCopy);
    printf("After removing all the white spaces, the output is ");
    removeWhiteSpace(inputCopy);
    
}

void printNewLine(char input[])
{
    int spaces=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(isspace(input[i]))
        {
            spaces++;
        }
        else if(spaces!=0)
        {
            printf("\n");
            spaces=0;
            i--;
        }
        else
        {
            printf("%c",input[i]);
        }
    }
    printf("\n");
}

void removeWhiteSpace(char input[])
{
    for(int i=0,k=0;i<strlen(input);i++)
    {
        if(isspace(input[i]))
        {
            continue;
        }
        printf("%c",input[i]);
    }
    printf("\n");
}
