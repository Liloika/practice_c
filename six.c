#include <stdio.h>

int main() {

  int e1 = 0, e2 = 1, e, n, i = 0;

  while (n < 1) {
    printf("Enter to range number: ");
    scanf("%d", &n);
   
    if (n < 1) {
      printf("Enter number > 1\n");
    }
  }

  printf("Fibonacci sequence: ");
 
  while (i < n) {
    if (i < 1) {
      e = i;
    } else {
      e = e1 + e2;
      e1 = e2; 
      e2 = e;
    }
 
    printf(" %d ", e);
    i++;
  }

  printf("\n");
  return 0;
}

