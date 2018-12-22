#include <stdio.h>
#define MAX_NAME_LENGTH 20

void clearStdin(void){
    int c;

    while(( c = getchar() ) != '\n' && ( c != EOF ));
}


void string_convert(void)
{
  printf("Start string_convert\n");
  char name[MAX_NAME_LENGTH + 2];
  float n1 = 0;
  float n2 = 0;
  puts("Enter your name");
  scanf("%20s", name);
  clearStdin();
  printf("Delay\n");

  printf("Hello, %s\n", name);

  puts("Give me first number");
  scanf("%f", &n1);
  clearStdin();

  puts("Give me second number");
  scanf("%f", &n2);
  clearStdin();

  // at least 3 length and precision is 2
  printf("%s, %3.2f + %3.2f is %3.2f\n", name, n1, n2, n1 + n2);
  printf("%s, %3.2f - %3.2f is %3.2f\n", name, n1, n2, n1 - n2);
  printf("%s, %3.2f * %3.2f is %3.2f\n", name, n1, n2, n1 * n2);
  if (n1 > n2){
    printf("%s, %3.2f / %3.2f is %3.2f\n", name, n1, n2, n1 / n2);
  }
  printf("-------------------------\n");
}
