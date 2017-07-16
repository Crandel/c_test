#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void copy_some_str(void)
{
  char orig_str[] = "First string";
  printf("Original -> '%s'\n", orig_str);
  int or_len = strlen(orig_str);
  char *cp = malloc(sizeof(char) * (or_len + 1));
  if (cp != NULL){
    for (int i = 0; i <= or_len; i++){
      cp[i] = orig_str[i];
    }
    printf("Copy -> '%s'\n", cp);
  }

}
