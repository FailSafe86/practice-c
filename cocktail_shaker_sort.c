#include <stdio.h>

/*
Cocktail Shaker Sort
==============

https://en.wikipedia.org/wiki/Cocktail_shaker_sort

Worst-case performance: O(n2)
Best-case performance: O(n)
Average performance: O(n2)

Worst-case space complexity: O(1)

Features
--------
- Twice as many writes as insertion sort
- Twice as many cache misses
- Asymptotically more branch mispredictions
- smaller values move to the beginning more slowly than larger numbers, that move quickly to the end.
If the smallest element is at the end of the list, it will take n-1 passes to move it to the beginning.

*/

void cocktail_shaker_sort(int arr[], int length);


// cocktail shaker sort on array
void cocktail_shaker_sort(int arr[], int length)
{
	int i = 0;
	int li = length-1;
	while (li > 1)
	{
		for (int i=0; i<li; i++)
		{
			if (arr[i] > arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}

		for (int i=li; i=0; i--)
		{
			if (arr[i] > arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		li--;
	}
}