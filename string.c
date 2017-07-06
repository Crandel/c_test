#include <stdio.h>

int main(void)
{
  char name[] = "";
  float n1 = 0;
  float n2 = 0;
  puts("Enter your name");
  scanf("%s", &name);
  printf("Hello, %s\n", name);
  puts("Give me first number");
  scanf("%f", &n1);
  puts("Give me second number");
  scanf("%f", &n2);
  // at least 3 length and precision is 2
  printf("%s, %3.2f + %3.2f is %3.2f\n", name, n1, n2, n1 + n2);
  printf("%s, %3.2f - %3.2f is %3.2f\n", name, n1, n2, n1 - n2);
  printf("%s, %3.2f * %3.2f is %3.2f\n", name, n1, n2, n1 * n2);
  printf("%s, %3.2f / %3.2f is %3.2f\n", name, n1, n2, n1 / n2);
}
