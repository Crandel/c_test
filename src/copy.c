#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * copy_some_str(char orig[])
{
  int or_len = strlen(orig);
  // get from system number of memory bytes for our copy string
  char *cp = malloc(sizeof(char) * (or_len + 1));
  // if memory not enough malloc returns NULL
  if (cp != NULL){
    // don`t forget about end of string "\0" -> '<='
    for (int i = 0; i <= or_len; i++){
      cp[i] = orig[i];
    }
    return cp;
  }
  return NULL;
}
