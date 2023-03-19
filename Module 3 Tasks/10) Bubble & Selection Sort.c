#include <stdio.h>
void bubbleSort(int [], int);
void selectionSort(int[] , int);

int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int inputs1[n],inputs2[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of element %d\n",i+1);
        scanf("%d",&inputs1[i]);
        inputs2[i]=inputs1[i];
    }
    printf("\nBefore Sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",inputs1[i]);
    }
    printf("\n\n");
    bubbleSort(inputs1,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",inputs1[i]);
    }
    printf("\n\n");
    selectionSort(inputs2,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",inputs2[i]);
    }
    return 0;
}

void bubbleSort(int inputs[], int n)
{
    
    printf("\nPerforming Bubble Sort\n");
    int swapCount = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(inputs[i]>inputs[j])
            {
                int temp = inputs[i];
                inputs[i] = inputs[j];
                inputs[j] = temp;
                swapCount++;
            }
        }
    }
    printf("\nThe number of swaps occured to sort the list using Bubble Sort is %d\n",swapCount);
}

void selectionSort(int inputs[], int n)
{
    printf("\nPerforming Selection Sort\n");
    int swapCount = 0;
    for(int i=0;i<n;i++)
    {
        int minimumPos=i;
        for(int j=i+1;j<n;j++)
        {
            if(inputs[j]<inputs[minimumPos])
            {
                minimumPos=j;
            }
        }
        int temp = inputs[i];
        inputs[i] = inputs[minimumPos];
        inputs[minimumPos] = temp;
        swapCount++;
    }
    printf("\nThe number of swaps occured to sort the list using Selection Sort is %d\n",swapCount);
}

