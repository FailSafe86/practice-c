#include <stdio.h>

/*
Bubble Sort
==============

https://en.wikipedia.org/wiki/Bubble_sort

Worst-case performance: O(n2)
Best-case performance: O(n)
Average performance: O(n2)

Worst-case space complexity: O(1) auxiliary 

Stable: Yes

Features
--------
- Twice as many writes as insertion sort
- Twice as many cache misses
- Asymptotically more branch mispredictions

*/

void bubble_sort(int arr[], int length);

// bubble sort on an array
void bubble_sort(int arr[], int length)
{
	int i = 0;
	int li = length-1;
	while (li > 1)
	{
		for (int i=0;i<li;i++)
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

/*
Prove correctness with a loop invariant
Initialization: It is true prior to the first iteration of the loop.

Maintenance: If it is true before an iteration of the loop, it remains true before the
next iteration.

Termination: When the loop terminates, the invariant gives us a useful property
that helps show that the algorithm is correct.

Loop invariant:
- the number of sorted elements is n-1, where n is the number of while loops

*/