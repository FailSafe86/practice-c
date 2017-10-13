// sorting algorithms
#include <stdio.h>
#include "minunit.h"
#include "insertion_sort.c"
#include "selection_sort.c"
#include "quicksort.c"
#include "merge_sort.c"
#include "bubble_sort.c"
#include "comb_sort.c"
#include "cocktail_shaker_sort.c"
#include "shell_sort.c"
#include "counting_sort.c"
#include "binary_search.c"
#include "euclidean_algorithm.c"


int tests_run = 0;


//tests on sorts
static char * test_insertion_sort() 
{
  int test_data[5] = {6,2,1,3,8};
  insertion_sort(test_data, 5);

  printf("Test: insertion_sort...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_insertion_sort_with_swap() 
{
  int test_data[5] = {6,2,1,3,8};
  insertion_sort_with_swap(test_data, 5);

  printf("Test: insertion_sort_with_swap...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_insertion_sort_recursive() 
{
  int test_data[5] = {6,2,1,3,8};
  insertion_sort_recursive(test_data, 5);

  printf("Test: test_insertion_sort_recursive...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_selection_sort() 
{
  int test_data[5] = {6,2,1,3,8};
  selection_sort(test_data, 5);

  printf("Test: selection_sort...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_quicksort() 
{
  int test_data[5] = {6,2,1,3,8};
  quicksort(test_data, 0, 4);

  printf("Test: quicksort...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_merge_sort() 
{
  printf("Test: merge_sort...");
  
  int test_data[5] = {6,2,1,3,8};
  merge_sort(test_data, 0, 4);
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);

  int test_data2[10] = {9,8,7,6,5,5,4,3,2,1};
  merge_sort(test_data2, 0, 9);
  mu_assert("\nerror: test_data2[0] not sorted correctedly", test_data2[0] == 1);
  mu_assert("\nerror: test_data2[5] not sorted correctedly", test_data2[5] == 5);
  mu_assert("\nerror: test_data2[9] not sorted correctedly", test_data2[9] == 9);
  
  printf("all Tests Passed\n");
  return 0;
}

static char * test_bubble_sort() 
{
  int test_data[5] = {6,2,1,3,8};
  bubble_sort(test_data, 5);

  printf("Test: bubble_sort...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_cocktail_shaker_sort() 
{
  int test_data[5] = {6,2,1,3,8};
  cocktail_shaker_sort(test_data, 5);

  printf("Test: cocktail_shaker_sort...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_comb_sort() 
{
  printf("Test: comb_sort...");

  int test_data[5] = {6,2,1,3,8};
  comb_sort(test_data, 5);
  
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_shell_sort() 
{
  int test_data[10] = {6,2,1,3,8,4,9,7,5,0};
  int test_gaps[3] = {5, 3, 1};
  shell_sort(test_data, 10, test_gaps, 3);

  printf("Test: shell_sort...");
  mu_assert("\nerror: test_data[0] not sorted correctedly", test_data[0] == 0);
  mu_assert("\nerror: test_data[1] not sorted correctedly", test_data[1] == 1);
  mu_assert("\nerror: test_data[2] not sorted correctedly", test_data[2] == 2);
  mu_assert("\nerror: test_data[3] not sorted correctedly", test_data[3] == 3);
  mu_assert("\nerror: test_data[4] not sorted correctedly", test_data[4] == 4);
  mu_assert("\nerror: test_data[5] not sorted correctedly", test_data[5] == 5);
  mu_assert("\nerror: test_data[6] not sorted correctedly", test_data[6] == 6);
  mu_assert("\nerror: test_data[7] not sorted correctedly", test_data[7] == 7);
  mu_assert("\nerror: test_data[8] not sorted correctedly", test_data[8] == 8);
  mu_assert("\nerror: test_data[9] not sorted correctedly", test_data[9] == 9);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_counting_sort() 
{
  printf("Test: counting_sort...");

  int test_data[5] = {6,2,1,3,8};
  int out_data[5];
  counting_sort(test_data, out_data, 8, 5);
  
  mu_assert("\nerror: test_data[0] not sorted correctedly", out_data[0] == 1);
  mu_assert("\nerror: test_data[1] not sorted correctedly", out_data[1] == 2);
  mu_assert("\nerror: test_data[2] not sorted correctedly", out_data[2] == 3);
  mu_assert("\nerror: test_data[3] not sorted correctedly", out_data[3] == 6);
  mu_assert("\nerror: test_data[4] not sorted correctedly", out_data[4] == 8);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_binary_search()
{
  int test_data[5] = {6,2,1,3,8};

  printf("Test: binary_search...");
  mu_assert("\nerror: binary_search", binary_search(8, test_data, 0, 4) == true);
  mu_assert("\nerror: binary_search, the number 7 is not present in array", binary_search(7, test_data, 0, 4) == false);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_gcd()
{
  int test_data[2] = {119,544};
  int answer = gcd(test_data[0], test_data[1]);

  printf("Test: gcd...");
  mu_assert("\nerror: gcd(119,544), answer should be 17", answer == 17);
  printf("all Tests Passed\n");
  return 0;
}

static char * test_gcd_recursive()
{
  int test_data[2] = {119,544};
  int answer = gcd_recursive(test_data[0], test_data[1]);

  printf("Test: gcd_recursive...");
  mu_assert("\nerror: gcd_recursive(119,544), answer should be 17", answer == 17);
  printf("all Tests Passed\n");
  return 0;
}


static char * all_tests()
{
  printf("Starting...all tests\n\n");
  mu_run_test(test_insertion_sort);
  mu_run_test(test_insertion_sort_with_swap);
  mu_run_test(test_insertion_sort_recursive);
  mu_run_test(test_selection_sort);
  mu_run_test(test_quicksort);
  mu_run_test(test_merge_sort);
  mu_run_test(test_bubble_sort);
  mu_run_test(test_cocktail_shaker_sort);
  mu_run_test(test_comb_sort);
  mu_run_test(test_shell_sort);
  mu_run_test(test_counting_sort);
  mu_run_test(test_binary_search);
  mu_run_test(test_gcd);
  mu_run_test(test_gcd_recursive);
  return 0;
}

int main(int argc, char **argv) {
     char *result = all_tests();
     if (result != 0) {
         printf("%s\n", result);
     }
     else {
         printf("\nALL TESTS PASSED\n");
     }
     printf("Tests run: %d\n", tests_run);
 
     return result != 0;
}