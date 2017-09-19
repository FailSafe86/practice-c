// sorting algorithms
#include <stdio.h>
// #include "minunit.h"

// int tests_run = 0;

// void insertion_sort(int input_array[], int length);


// static char * test_insertion_sort() 
// {
//   int test_data[5] = {6,2,1,3,8};
//   insertion_sort(test_data, 5);

//   mu_assert("error, test_data[0] not sorted correctedly", test_data[0] == 1);
//   mu_assert("error, test_data[2] not sorted correctedly", test_data[2] == 3);
//   mu_assert("error, test_data[4] not sorted correctedly", test_data[4] == 8);
//   return 0;
// }

// static char * all_tests()
// {
//   mu_run_test(test_insertion_sort);
//   return 0;
// }

// int main(int argc, char **argv) {
//      char *result = all_tests();
//      if (result != 0) {
//          printf("%s\n", result);
//      }
//      else {
//          printf("ALL TESTS PASSED\n");
//      }
//      printf("Tests run: %d\n", tests_run);
 
//      return result != 0;
// }


// insertion sort
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

// selection sort
// void selection_sort(int input_array[])
// {
//   int size_of_array = sizeof(input_array);
  
//   // loop through entire array
//   for (int i=0; i < size_of_array-1; i++) 
//   {
//     // update min value as the last element in sorted array
//     int min = input_array[i];
//     // test against other elements in array
//     for (int j=i+1; j < size_of_array; j++) 
//     {
//       // if element is less, update element to the new min value
//       if (input_array[j] < min)
//       {
//         min = input_array[j];
//       }
//     }
//     // if new min found swap with ith value
//     if (min != input_array[i])
//     {
//       swap(min, input_array[i]);
//     }
//   }
// }

