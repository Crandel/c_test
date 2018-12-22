#include <stdio.h>
#include <my_functions.h>
#include <my_structs.h>
#include <stdlib.h>

#define FIRST_CHAR 2
#define SECOND_CHAR 2


int main(int argc, char *argv[])
{
  printf("Run test C program with %i args: ", argc);
  for (int i = 0; i < argc; i++){
    printf("%s ", argv[i]);
  }
  printf("\n");


  string_convert();
  ascii();

  // test error codes

  char test_str[] = "some test string";
  printf("Original -> '%s'\n", test_str);
  char *copy_test_str = copy_some_str(test_str);
  if (copy_test_str != NULL){
    printf("Copy -> '%s'\n", copy_test_str);
    swap(copy_test_str, FIRST_CHAR, SECOND_CHAR);
    printf("Swap -> '%s'\n", copy_test_str);
    // we need to free memory after work with copy string is done
    free(copy_test_str);
  }
  printf("Original -> '%s'\n", test_str);

  user vasya;
  fill_user(&vasya);
  int birth_year = birthday(&vasya);
  printf("Your birth year is %i\n", birth_year);
  return 0;
}
