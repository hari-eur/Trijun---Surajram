#include <stdio.h>
void linearSearch(int[], int, int);
void binarySearch(int [], int , int);
int main()
{
    int n,find;
   
    printf("Enter the number of the elements\n");
    scanf("%d",&n);
    int inputs[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&inputs[i]);
    }
    printf("Enter the search element\n");
    scanf("%d",&find);
    linearSearch(inputs,n,find);
    binarySearch(inputs,n,find);
    
}

void linearSearch(int inputs[], int n, int find)
{
    int flag=0,times=0;
    printf("\nLinear Search\n");
    for(int i=0;i<n;i++)
    {
        times++;
        if(inputs[i]==find)
        {
            printf("\nThe element %d is found at the position %d. It took %d number of times to find the element using Linear Search\n",find,i+1,times);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nThe element %d is not found on this list",find);
    }
}

void binarySearch(int inputs[], int n, int find)
{
    int quit;
    printf("\nBinary Search\n");
    printf("Is the entered inputs in sorted order?(0/1)\n");
    scanf("%d",&quit);
    if(quit)
    {
        int low=0,middle,high=n-1,times=0;
        while(low<=high)
        {
            middle=(low+high)/2;
            times++;
            if(inputs[middle]==find)
            {
                printf("\nThe element %d is found at the position %d. It took %d number of times to find the element using Binary Search",find,middle+1,times);
                break;
            }
            else if(inputs[middle]>find)
            {
                high=middle-1;
            }
            else
            {
                low=middle+1;
            }
        }
        
    }
    else
    {
        printf("Binary Search cannot be applied");
    }
}