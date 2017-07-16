typedef struct
{
  char *name;
  char *surname;
  int age;
}
user;

void fill_user(user *usr);
int birthday(user *usr);
