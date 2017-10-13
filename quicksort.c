#include <stdio.h>

/*
Insertion Sort
==============

from https://en.wikipedia.org/wiki/Quicksort

Worst-case performance: O(n2)
Best-case performance: O(n log n) (simple partition)
Average performance: O(n log n), O(n) (three-way partition and equal keys)

Worst-case space complexity: O(n) auxiliary (naive), O(log n) auxiliary

Stable: No (typical), Yes (variant dependent)

Features
--------


*/

void quicksort(int arr[], int lo, int hi);
int partition(int arr[], int lo, int hi);

// quicksort on an array of integers
void quicksort(int arr[], int lo, int hi)
{
	if (lo < hi)
	{
		int q = partition(arr, lo, hi);
		quicksort(arr, lo, q-1);
		quicksort(arr, q+1, hi);
	}
}

// partition function
int partition(int arr[], int lo, int hi)
{
	int temp;
	int pivot = arr[hi];
	int i = lo-1;
	for (int j=lo; j <= hi-1; j++)
	{
		
		// add loop invariant's here

		// swap A[i] with A[j]
		if (arr[j] < pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	
	}
	// swap A[i+1] with A[hi]
	if (arr[hi] < arr[i+1]){
		temp = arr[i+1];
		arr[i+1] = arr[hi];
		arr[hi] = temp;
	}
	return i+1;
}

/*
loop invariant's used to show correctness

Taken from CLRS

for (int k=0; k<5;k++){
	if (k>=lo && k<=i)
	{
		assert(arr[k] <= pivot);
		//printf("assertion 1: k = %d, pivot = %d, arr[k] = %d\n", k,pivot,arr[k]);
	}
	if (k>=i+1 && k<=j-1)
	{

		assert(arr[k] > pivot);
		//printf("assertion 2: k = %d, pivot = %d, arr[k] = %d\n", k,pivot,arr[k]);
	}
	if (k == hi)
	{
		assert(arr[k] == pivot);
		//printf("assertion 3: k = %d, pivot = %d, arr[k] = %d\n", k,pivot,arr[k]);
	}
}
*/