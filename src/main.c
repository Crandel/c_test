#include <stdio.h>
#include <test.h>

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
  copy_some_str();
  printf("last printf\n");
  /* return 0; */
}
