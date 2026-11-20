#include <stdio.h>
int main()
{
	int a [100] ,n,i;
	int sum = 0, Largest, smallest;
	int even = 0, odd = 0;
	float mean;
	printf("Enter number of elements:");
	scanf("%d", &n);
	if (n<1 || n>100)
	{
		printf("invalid array size.\n");
		return 0;
	}
	printf("enter array elements:");
	for(i=0; i<n; i++)
	    scanf("%d", &a[i]);
   	Largest = smallest =a[i];
	for (i=0; i<n; i++)
	{
		sum += a[i];
		if (a[i] > Largest)
	    	Largest = a[i];
	    if (a[i]< smallest)
	        smallest = a[i];
	    if (a[i] % 2 == 0)
	        even++;
	    else
	        odd++;
	}
	mean = (float)sum / n;
	printf("sum =%d\n", sum);
	printf("mean =%.2f\n", mean);
	printf("Largest =%d\n", Largest);
	printf("Smallest =%d\n", smallest);
	printf("Even elements =%d\n", even);
	printf("Odd elements =%d\n", odd);
	return 0;
}
		
	
	
