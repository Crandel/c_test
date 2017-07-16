#include <stdio.h>
#include <test.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("Run test C program with %i args: ", argc);
  for (int i = 0; i < argc; i++){
    printf("%s ", argv[i]);
  }
  printf("\n");
  /*
  string_convert();
  ascii();
  test error codes
  */
  char test_str[] = "some test string";
  printf("Original -> '%s'\n", test_str);
  char *copy_test_str = copy_some_str(test_str);
  if (copy_test_str != NULL){
    printf("Copy -> '%s'\n", copy_test_str);
    // we need to free memory after work with copy string is done
    free(copy_test_str);
  }
  /* return 0; */
}
