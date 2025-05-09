#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
  int n;
  printf("Enter the number of integers in the array: ");
  scanf("%d", &n);
   
    int *a = malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }


 srand(time(NULL));
  
printf("Original array:\n");
for (int i = 0; i<n; i++)
  {
    a[i] = rand() % 100;
    printf(" %d ", a[i]);
  }

printf("\nReverse array:\n");

for(int i=n-1; i>=0; --i)
  {
    printf(" %d ", a[i]);
  }


  free(a);
  return 0;
}
