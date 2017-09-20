// sorting algorithms
#include <stdio.h>

/*
From https://en.wikipedia.org/wiki/Insertion_sort

Worst-case performance: O(n2) comparisons, swaps
Best-case performance: O(n) comparisons, O(1) swaps
Average performance: O(n2) comparisons, swaps

Worst-case space complexity: O(n) total, O(1) auxiliary

Features
--------
- Simple implementation
- Efficient for (quite) small data sets
- More efficient in practice that most other simple quadratic algorithms
- Adaptive i.e., efficient for data sets that are already substantially sorted: 
  the time complexity is O(nk) when each element in the input is no more than k places away from its sorted position
- Stable i.e., does not change the relative order of elements with equal keys
- In-place i.e, only requires a constant amount O(1) of additional memory space
- Online i.e., can sort a list as it receives it


Insertion Sort in 3 lines
for(i=1;i<a.length;i++)
   for(j=i;j>0;j--)
     if(a[j-1]>a[j]) {a[j-1]+=a[j]; a[j]=a[j-1]-a[j]; a[j-1]-=a[j]} else break;
*/

// insertion sort on an array
void insertion_sort(int input_array[], int length)
{
  int temp, j;
  for (int i=1;i<length;i++)
  {
    j = i;
    while (j > 0 && input_array[j] < input_array[j-1])
    {
      // swap A[j] and A[j-1]
      temp = input_array[j];
      input_array[j] = input_array[j-1];
      input_array[j-1] = temp;
      j--;
    }
  }
}

// a slightly fast version that moves arr[i] to its position in one go and 
// only performs one assignment in the inner loop body.
void insertion_sort_with_swap(int input_array[], int length)
{
  int i = 1;
  while (i < length)
  {
    int temp = input_array[i];
    int j = i - 1;
    while (j >=0 && input_array[j] > temp)
    {
      input_array[j+1] = input_array[j];
      j--;
    }
    input_array[j+1] = temp;
    i++;
  }
}

// recursive implementation
void insertion_sort_recursive(int arr[], int length)
{
  if (length > 0)
  {
    insertion_sort_recursive(arr, length-1);
    int x = arr[length];
    printf("current x: %i\n", x);
    int j = length - 1;
    while (j >= 0 && arr[j] > x)
    {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = x;
  }
}