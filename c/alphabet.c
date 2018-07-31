#include <stdio.h>
int
main ()
{
  char c;
  printf ("Enter a character: ");
  scanf ("%c", &c);

  if (isalpha (c))
    printf ("Alphabet");
  else
    printf ("No");

  return 0;
}
