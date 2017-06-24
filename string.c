#include <stdio.h>

int main(void)
{
  char name[] = "";
  int n1 = 0;
  int n2 = 0;
  puts("Enter your name");
  scanf("%s", &name);
  printf("Hello, %s\n", name);
  puts("Give me first number");
  scanf("%d", &n1);
  puts("Give me second number");
  scanf("%d", &n2);
  printf("%s, your sum is %d\n", name, n1 + n2);
}
