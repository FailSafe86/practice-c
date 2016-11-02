// sorting algorithms

// insertion sort
void insertion_sort(int input_array[])
{
  // loop through each element in an array
  for (int i = 1; array_length = sizeof(input_array) - 1; i++) 
  {
    // temp store of variables
    ith_element = input_Array[i];
    int j = i-1;
    // loop through each element before the ith_element check if it is larger than the value in front of it.
    / if it is move it down one place in the array
    while (j >= 0 and input_array[j] > ith_element)
    {
      input_array[j+1] = input_array[j];
      j--;
    }
    // insert 
    input_array[j+1] = ith_element;
  }
}

// selection sort
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
