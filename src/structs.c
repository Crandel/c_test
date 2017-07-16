#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <my_structs.h>

int birthday(user *usr)
{
  time_t now;
   if ( time(&now) != (time_t)(-1) )
   {
      struct tm *mytime = localtime(&now);
      if ( mytime )
      {
        int cur_age = mytime->tm_year + 1900 - usr->age;
        return cur_age;
      }
   }
   return 0;
}

void fill_user(user *usr)
{
  /* puts("Enter your name"); */
  // we couldn`t use name, because its in struct and give us stack smashing detected
  char new_name[] = "Fedya";
  /* scanf(" %s", new_name); */
  /* puts("Enter your surname"); */
  char surname[] = "Petrovich";
  /* scanf(" %s", surname); */
  puts("Enter your age");
  int age = 0;
  scanf(" %i", &age);
  // we need to get memory from system for our string attributes
  usr->name = new_name == NULL ? NULL : strdup(new_name);
  usr->surname = surname == NULL ? NULL : strdup(surname);
  usr->age = age;
}
