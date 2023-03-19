#include<stdio.h>
#include"sumAndAverage2.c"
int average(int[], int);
int sum(int[], int);
int main()
{
	int n;
	printf("\n Enter the number of elements\n");
	scanf("%d",&n);
	int inputs[n];
	for(int i=0;i<n;i++)
	{
		printf("\nEnter element %d\n",i+1);
		scanf("%d",&inputs[i]);
	}
	printf("\nThe total sum is %d\n",sum(inputs,n));
	printf("\nThe average is %d\n",average(inputs,n));
	return 0;
}