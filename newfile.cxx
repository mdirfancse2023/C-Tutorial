#include <stdio.h>
void main()
{
	int arr[5],i, j, temp, min;
	printf("Type Elements\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d" ,&arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		min = i;
		for (j = i + 1; j < 5; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	printf("Median is : %d",arr[2]);
}