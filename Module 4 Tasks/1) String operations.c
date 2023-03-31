#include <stdio.h>
#include <string.h>
int main()
{
    char input[20];
    char copiedInput[20];
    printf("Enter the string\n");
    scanf("%s",input);
    printf("The length of the input string is %lu\n",strlen(input));
    printf("Before copying: %s\n",copiedInput);
    strcpy(copiedInput,input);
    printf("After copying: %s\n",copiedInput);
    strcat(copiedInput,input);
    printf("After concating: %s\n",copiedInput);
    printf("Comparing input string with concatenated string %d\n",strcmp(input,copiedInput));
}
