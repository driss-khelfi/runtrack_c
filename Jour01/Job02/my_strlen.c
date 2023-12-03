#include <stdio.h>
//création de la fonction my_strlen
int my_strlen(char *str)
{
  int i = 0;
  while(str[i] != 0)
  {
    ++i;
  }
  return i;
}
//execution de la fonction my_strlen
int main()
{
  char *str = "Hello World!";
  int length = my_strlen(str);
 printf("Le nombre de caractères dans la chaine est %d\n", length);
  return 0;
}
