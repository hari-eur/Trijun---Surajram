#include <stdio.h>

int main()
{
    int a,n=5;
    while(n>0)
    {
        scanf("%d",&a);
        if(a>0)
        {
            (n!=1)?printf("You have entered a postive number : %d, Please enter %d more inputs \n",a,n-1):printf("You have entered a postive number : %d, Thank you for completing the task \n",a);
            n--;
        }
        else
        {
            printf("Negative and Zeros are not allowed, Please enter again\n");
            continue;
        }
    }
    
}
