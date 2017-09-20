// selection sort
#include <stdio.h>


void selection_sort(int input_array[])
{
  int size_of_array = sizeof(input_array);
  
  // loop through entire array
  for (int i=0; i < size_of_array-1; i++) 
  {
    // update min value as the last element in sorted array
    int min = input_array[i];
    // test against other elements in array
    for (int j=i+1; j < size_of_array; j++) 
    {
      // if element is less, update element to the new min value
      if (input_array[j] < min)
      {
        min = input_array[j];
      }
    }
    // if new min found swap with ith value
    if (min != input_array[i])
    {
      swap(min, input_array[i]);
    }
  }
}