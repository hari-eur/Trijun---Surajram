#include <stdio.h>

int main()
{
    int inputs[3],k=0, sum=0;
    printf("Enter three inputs\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&inputs[i]);
    }
    int *start = inputs;
    printf("\nPrinting each values using pointers addition\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\t",*(start+i));
    }
    while(k<3)
    {
        sum+=*start++;
        k++;
    }
    printf("\n\nThe sum of all inputs using pointer increment is %d\n", sum);
    printf("\nPrinting each values in reverse using pointer decrement\n");
    while(k>0)
    {
        printf("%d\t",*--start);
        k--;
    }
    printf("\n\nFinding the greates value using pointer comparism");
    if(*start>*start+1 && *start>*start+2)
    {
        printf("\n%d is the greatest\n",*(start));
    }
    else if(*start+1>*start+2)
    {
        printf("\n%d is the greatest\n",*(start+1));
    }
    else
    {
        printf("\n%d is the greatest\n",*(start+2));
    }
    return 0;
}
