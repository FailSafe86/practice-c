#include <stdio.h>

/*
Selection Sort
==============

from https://en.wikipedia.org/wiki/Selection_sort

Worst-case performance: O(n2) comparisons, O(n) swaps
Best-case performance: O(n2)
Average performance: O(n2)

Worst-case space complexity: O(n) total, O(1) auxiliary

Features:
- in-place comparison sort
- simple implementation
- parformance advantages over more complicated algorithms, particularly when 
auxiliary memory is limited.
- typically faster for small arrays (i.e. fewer than 10-20)
- preferable to insertion sort in erms of number of writes (O(n) swaps vs. O(n2) swaps)

*/

// Selection sort on an array
void selection_sort(int input_array[], int length)
{
  // loop through entire array
  for (int i=0; i < length-1; i++) 
  {
    // find min value in unsorted array a[i...length-1]

    // assume min is the first element
    int idx_min = i;
    // test against other elements in array to find smallest
    for (int j=i+1; j < length; j++) 
    {
      // if element is less, update element to the new min value
      if (input_array[j] < input_array[idx_min])
      {
        // new min found; remember its index
        idx_min = j;
      }
    }

    // swap a[i] with a[imin]
    if (idx_min != i)
    {
      int temp = input_array[idx_min];
      input_array[idx_min] = input_array[i];
      input_array[i] = temp;
    }
  }
}