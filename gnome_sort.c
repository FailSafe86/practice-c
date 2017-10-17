#include <stdio.h>

/*
Gnome Sort
==============

https://en.wikipedia.org/wiki/Gnome_sort

Worst-case performance: O(n2)
Best-case performance: O(n)
Average performance: O(n2)

Worst-case space complexity: O(1) auxiliary

Stable: No

Features
--------
- 

*/

void gnome_sort(int arr[], int length);

// gnome_sort on an array
void gnome_sort(int arr[], int length)
{
	int pos = 1;
	while (pos < length)
	{
		if (pos == 0 | arr[pos] >= arr[pos-1])
		{
			pos += 1;
		}
		else
		{
			int temp = arr[pos];
			arr[pos] = arr[pos-1];
			arr[pos-1] = temp;
			pos -= 1;
		}
	}
}