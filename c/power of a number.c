#include <stdio.h>
 
int main()
{
  int i, Number, Exponent; 
  long Power = 1;
  
  scanf(" %d", &Number);
 
  scanf(" %d", &Exponent);
    
  for(i = 1; i <= Exponent; i++)
  {
  	Power = Power * Number;
  }
  
  printf("\n%ld",Power);
  
  return 0;
}
