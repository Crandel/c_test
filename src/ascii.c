#include <stdio.h>

void ascii(void)
{
  int start = 65;
  for(int i = start; i < start + 26; i++ ){
    printf("Code %i converted to char %c\n", i, (char)i);
  }
  printf("\nReverse convertion\n\n");
  for(char c = 'A'; c <= 'Z'; c++ ){
    printf("Char %c has code %i\n", c, (int)c);
  }
}
