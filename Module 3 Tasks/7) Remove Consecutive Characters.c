#include <stdio.h>

int main()
{
    char input[20];
    scanf("%[^\n]s",input);
    for(int i=0;i<=sizeof(input);i++){
        if(input[i]==input[i+1]){
            i+=1;
        }
        else
        {
            printf("%c",input[i]);
        }
    }
    
    return 0;
}
