#include <stdio.h>

/*
Shell Sort
==============

https://en.wikipedia.org/wiki/Shellsort

Worst-case performance: O(n2) (worst known gap sequence), O(n log2 n) (best known gap sequence)
Best-case performance: O(n log n)
Average performance: gap sequence dependent

Worst-case space complexity: O(n) total, O(1) auxiliary

Stable: No

Features
--------
- 

*/

void shell_sort(int arr[], int length, int gaps[], int num_gaps);

// shell sort on an array
void shell_sort(int arr[], int length, int gaps[], int num_gaps)
{
	for (int k = 0; k < num_gaps; k += 1)
  {
    int gap = gaps[k];
    // do gapped insertion sort for this gap size.
    int temp, j;
    for (int i = gap; i < length; i += gap)
    {
    	j = i;
    	while (j > 0 && arr[j] < arr[j-gap])
    	{
    		// swap A[j] and A[j-1]
    		temp = arr[j];
    		arr[j] = arr[j-gap];
    		arr[j-gap] = temp;
    		j -= gap;
    	}
    }
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