// sorting algorithms
#include <stdio.h>
#include "minunit.h"
#include "sorting.c"
#include "search.c"

int tests_run = 0;

void insertion_sort(int input_array[], int length);
bool binary_search(int key, int array[], int min, int max);


static char * test_insertion_sort() 
{
  int test_data[5] = {6,2,1,3,8};
  insertion_sort(test_data, 5);

  mu_assert("error, test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("error, test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("error, test_data[4] not sorted correctedly", test_data[4] == 8);
  return 0;
}

static char * test_binary_search()
{
  int test_data[5] = {6,2,1,3,8};
  //binary_search(8, test_data, 0, 4);
  mu_assert("error", binary_search(8, test_data, 0, 4) == true);
  mu_assert("error: the number 7 is not present in array", binary_search(7, test_data, 0, 4) == false);
  return 0;
}


static char * all_tests()
{
  mu_run_test(test_insertion_sort);
  mu_run_test(test_binary_search);
  return 0;
}

int main(int argc, char **argv) {
     char *result = all_tests();
     if (result != 0) {
         printf("%s\n", result);
     }
     else {
         printf("ALL TESTS PASSED\n");
     }
     printf("Tests run: %d\n", tests_run);
 
     return result != 0;
}