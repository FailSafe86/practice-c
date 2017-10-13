#include <stdio.h>
#include <math.h>

/*
Merge Sort
==============

https://en.wikipedia.org/wiki/Merge_sort

Worst-case performance: O(n log n)
Best-case performance: O(n log n) typical
Average performance: O(n log n)

Worst-case space complexity: O(n) total, O(n) auxiliary

Stable: Yes

Features
--------
- In the worst case, merge sort does about 39% fewer comparisons 
than quicksort does in the average case
- is a stable sort

*/

void merge_sort(int arr[], int left_idx, int right_idx);
void merge(int arr[], int left_idx, int right_idx, int end_idx);

//merge sort on an array
void merge_sort(int arr[], int left_idx, int right_idx)
{
  if (left_idx < right_idx)
  {
    int mid_idx = floor((left_idx + right_idx) / 2);
    merge_sort(arr, left_idx, mid_idx);
    merge_sort(arr, mid_idx+1, right_idx);
    merge(arr, left_idx, mid_idx, right_idx);
  }
}


// merging an array
void merge(int arr[], int left_idx, int mid_idx, int right_idx)
{
  // length of each subarray
  int left_length = mid_idx - left_idx + 1;
  int right_length = right_idx - mid_idx;

  // define the left and right sub-arrays
  int left_arr[left_length];
  int right_arr[right_length];

  // copy sub-array arr[left...mid] into left_arr[0...left_length]
  for (int i = 0; i < left_length; i++)
  {
    left_arr[i] = arr[left_idx + i];
  }
  // copy sub-array arr[mid + 1...right] into right_arr[0...right_length]
  for (int j = 0; j < right_length; j++)
  {
    right_arr[j] = arr[mid_idx + j + 1];
  }

  // sentinals
  //left_arr[left_length+1] = 99;
  //right_arr[right_length+1] = 99;
  int i = 0;
  int j = 0;

  for (int k = left_idx; k <= right_idx; k++)
  {
    if (left_arr[i] <= right_arr[j])
    {
      arr[k] = left_arr[i];
      i++;
    }
    else
    {
      arr[k] = right_arr[j];
      j++;
    }
  }
}
