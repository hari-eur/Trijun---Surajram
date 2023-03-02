#include <stdio.h>

int main()
{
    char character;
    scanf("%c",&character);
    if((character>='a'&& character<='z')||((character>='A'&& character<='Z')?character+=32:0))
    {
        if(character=='a'||character=='e'|| character=='i'||character=='o'||character=='u')
        {
            printf("\nIt is a vowel");
        }
        else
        {
            printf("\nIt is a consonant");
        }
    }
    else
    {
        printf("\n Not an alphabet");   
    }

    return 0;
}
