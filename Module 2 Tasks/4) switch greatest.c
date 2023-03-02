#include <stdio.h>

int main()
{
    int val1,val2,option;
    printf("Enter the two values");
    scanf("%d%d",&val1,&val2);
    option = (val1>val2)?1:2; 
    switch(option)
    {
        case 1:
            printf("%d is greater than %d",val1,val2);
            break;
        
        case 2:
            printf("%d is greater than %d",val2,val1);
            break;
    }
}
