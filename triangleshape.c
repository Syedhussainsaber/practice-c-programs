#include <stdio.h>
int main()
{
  int n;
  printf("Enter the value of n :\n");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < 2 * i - 1; j++)
    {
      if (j == 0)
      {
        for (int k = n - i; k > 0; k--)
        {
          printf("  ");
        }
      }
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}