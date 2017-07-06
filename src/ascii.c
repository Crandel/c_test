#include <stdio.h>

void ascii(void)
{
  int start = 65;
  for(int i = start; i < start + 26; i++ ){
    printf("Char %c has code %i\n", (char)i, i);
  }
}
