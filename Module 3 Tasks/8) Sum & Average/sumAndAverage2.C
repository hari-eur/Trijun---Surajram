int sum(int inputs[], int n)
{
	int output=0;
	for(int i=0;i<n;i++)
	{
		output+=inputs[i];
	}
	return output;
}
int average(int inputs[],int n)
{
	int total = sum(inputs,n);
	return total/n;
}