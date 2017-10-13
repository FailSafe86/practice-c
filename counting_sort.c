#include <stdio.h>

/*
Counting Sort
==============

https://en.wikipedia.org/wiki/Counting_sort

Worst-case performance: O(n+k)
Best-case performance: O(n), when k = O(n)
Average performance: O(n+k)

Worst-case space complexity: O(n+k)

Stable: Yes

Features
--------
- stable, numbers with the same value appear in the output 
array in the same order as they do in the input array.
- not a comparison sort
*/

void counting_sort(int A[], int B[], int k, int length);
void check_state(int A[], int lenA, int B[], int lenB, int C[], int lenC);

void counting_sort(int A[], int B[], int k, int length)
{

	int C[k+1];
	for (int i = 0; i <= k; i++)
	{
		C[i] = 0;
	}

	//check_state(A, length, B, length, C, k+1);

	for (int j = 0; j <= length-1; j++)
	{
		// C[i] now contains the number of elements equals to i.
		C[A[j]] += 1;
	}

	//check_state(A, length, B, length, C, k+1);

	for (int i = 1; i <= k; i++)
	{
		// C[i] now contains the number of elements less than or equal to i.
		C[i] = C[i] + C[i-1];
	}

	//check_state(A, length, B, length, C, k+1);

	for (int j = length-1; j >= 0; j--)
	{
		B[C[A[j]]-1] = A[j];
		C[A[j]] -= 1;

	}

	//check_state(A, length, B, length, C, k+1);

}

void check_state(int A[], int lenA, int B[], int lenB, int C[], int lenC)
{
	printf("\n...state...\n");
	printf("A[]:");
	for (int i = 0; i < lenA; i++)
	{
		printf(" %d", A[i]);
	}
	printf(", ");

	printf("B[]:");
	for (int i = 0; i < lenB; i++)
	{
		printf(" %d", B[i]);
	}
	printf(", ");

	printf("C[]:");
	for (int i = 0; i < lenC; i++)
	{
		printf(" %d", C[i]);
	}
	printf("\n");
}
