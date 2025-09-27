//Write a program to find the factorial of a given number.
#include <stdio.h>

int main(void)
{
  long n;
  long i;
  long fractorial = 1;
  
  printf("Provide postive integer for fractorial: ");
  scanf("%ld", &n);

  for(i = n; i >= 1 ;i--)
  {
    printf("%ld", i);
    if ( i > 1)
    {
        printf(" * ");
    }
    fractorial = fractorial * i;
  }
  printf(" = %ld\n", fractorial);
}