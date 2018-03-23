#include <stdio.h>

int main()
{
  int one, two;
  printf("Enter two integers:\n");
  scanf("%d\n%d", &one, &two);
  printf("Sum is: %d\nDiff is: %d\n", one + two, one - two);
  return 0;
}