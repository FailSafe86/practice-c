#include <stdio.h>
#include <math.h>

/*
Comb Sort
==============

https://en.wikipedia.org/wiki/Comb_sort

Worst-case performance: O(n2)
Best-case performance: O(n log n)
Average performance: O(n2/2^p)

Worst-case space complexity: O(1)

Features
--------
- Eliminates turtles, or small values near the end of the list.
- shrink factor of 1.3 is considered optimal.

*/

void comb_sort(int arr[], int length);

// comb sort on an array
void comb_sort(int arr[], int length)
{
	int sorted = 0;
	// initialise gap size
	int gap = length;
	// set shrink factor
	double shrink = 1.3;
	while (sorted == 0)
	{
		// update gap value for next comb
		int gap = floor(gap / shrink);
		if (gap > 1)
		{
			// not sorted until gap size is zero
			sorted = 0;
		}
		else
		{
			gap = 1;
			sorted = 1;
		}

		// a single "comb" over the input list
		int i = 0;
		while (i + gap < length - 1)
		{
			if (arr[i] > arr[i + gap])
			{
				int temp = arr[i];
				arr[i] = arr[i + gap];
				arr[i + gap] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}