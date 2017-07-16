#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char *copy_some_str(char orig[])
{
  // don`t forget about end of string "\0" -> 'strlen(orig) + 1'
  int or_len = strlen(orig) + 1;
  // get from system number of memory bytes for our copy string
  char *cp = malloc(sizeof(char) * or_len);
  // if memory not enough malloc returns NULL
  if (cp != NULL){
    for (int i = 0; i < or_len; i++){
      if (i == 0){
        cp[i] = toupper(orig[i]);
      }else {
        cp[i] = orig[i];
      }
    }
    return cp;
  }
  return NULL;
}

void swap(char orig[], int a, int b)
{
  if (a < b && (int)strlen(orig) >= b){
    char tmp = orig[a];
    orig[a] = orig[b];
    orig[b] = tmp;
  }
}
