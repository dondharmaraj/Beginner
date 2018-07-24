#include<stdio.h>
#include<ctype.h>
void main ()
{
  char c, ch;
  printf ("Enter input: ");
  scanf ("%c", &c);
  ch = tolower (c);
  if (ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u')
    {
      printf ("VOWEL");
    }
  else if ((ch>=97 && ch <=122))
    {
      printf ("Consonant");
    }
  else
    {
      printf ("Invalid");
    }
}
